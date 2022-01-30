#define Fan 3
#define Light 4
#define TV 5
#define Li 6

int temp=0,i=0;
int led=13;

char str[15];
void setup()
{
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
   pinMode(Fan, OUTPUT);
    pinMode(Light, OUTPUT);
    pinMode(Li, OUTPUT);
     pinMode(TV, OUTPUT);
  
  
  Serial.println("AT+CNMI=2,2,0,0,0");
  delay(500);
  Serial.println("AT+CMGF=1");
  delay(1000);
  
}

void loop()
{
  
  if(temp==1)
  {
    check();
    temp=0;
    i=0;
    delay(1000);
  }
}

 void serialEvent() 
 {
  while(Serial.available()) 
  {
    if(Serial.find("#A."))
    {
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      while (Serial.available()) 
      {
      char inChar=Serial.read();
      str[i++]=inChar;
      if(inChar=='*')
      {
        temp=1;
        return;
      } 
      } 
    }
   }
 }

void check()
{
   if(!(strncmp(str,"room1 on",8)))
    {
      digitalWrite(TV, HIGH);
       
      Serial.print("ON    ");
      delay(200);
    }  
   
   else if(!(strncmp(str,"room1 off",9)))
    {
      digitalWrite(TV, LOW);
      Serial.print("Off");
    
      delay(200);
    }
  
    else if(!(strncmp(str,"room2 on",8)))
    {
      digitalWrite(Fan, HIGH);
    
      delay(200);
    }
 
    else if(!(strncmp(str,"room2 off",9)))
    {
      digitalWrite(Fan, LOW);
     
      delay(200);
    }
 
    else if(!(strncmp(str,"room3 on",8)))
    {
      digitalWrite(Light, HIGH);

      delay(200);
    }
 
    else if(!(strncmp(str,"room3 off",9)))
    {
      digitalWrite(Light, LOW);
     
      delay(200);
    } 

    else if(!(strncmp(str,"room4 on",8)))
    {
      digitalWrite(Li, HIGH);

      delay(200);
    }
 
    else if(!(strncmp(str,"room4 off",9)))
    {
      digitalWrite(Li, LOW);

      delay(200);
    } 
    
    else if(!(strncmp(str,"all on",6)))
    {
      digitalWrite(Light, HIGH);
      digitalWrite(Fan, HIGH);
      digitalWrite(TV, HIGH);
       digitalWrite(Li, HIGH);
    
      delay(200);
    }
 
    else if(!(strncmp(str,"all off",7)))
    {
      digitalWrite(Light, LOW);
      digitalWrite(Fan, LOW);
      digitalWrite(TV, LOW);
       digitalWrite(Li, LOW);
    
      delay(200);
    }     
}
