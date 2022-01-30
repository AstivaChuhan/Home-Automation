#include<SoftwareSerial.h>
SoftwareSerial mybt(10,11);          
const int relay1=5;                         
const int relay2=6;
const int relay3=4;
const int relay4=3;        
                               //If you wish to add more relays, simply increase the relay number and then enter  the pin number that you connected.
char t;

void setup()
{
  Serial.begin(9600);
  mybt.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  
}
void loop()
{
  if(mybt.available())
  {
    t=mybt.read();
    
   Serial.println(t);
  }
   
    if (t=='1')
{
    digitalWrite(relay1,HIGH);
 
    
    }
    else if(t=='2')
    {
      digitalWrite(relay1,LOW);
    
    
    }
    else if(t=='3')
    {
    digitalWrite(relay2,HIGH);

    
    }
    else if(t=='4')
    {
    digitalWrite(relay2,LOW);

    
    }
     else if(t=='5')
    {
    digitalWrite(relay3,HIGH);

    
    }
     else if(t=='6')
    {
    digitalWrite(relay3,LOW);

    
    }
     else if(t=='7')
    {
    digitalWrite(relay4,HIGH);

    
    }
     else if(t=='8')
    {
    digitalWrite(relay4,LOW);

    
    }
     else if(t=='9')
    {
    digitalWrite(relay1,HIGH);
    digitalWrite(relay2,HIGH);
    digitalWrite(relay3,HIGH);
    digitalWrite(relay4,HIGH);

    
    }
     else if(t=='0')
    {
    digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
    digitalWrite(relay3,LOW);
    digitalWrite(relay4,LOW);

    
    }
    else
      {
        digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
     digitalWrite(relay1,LOW);
    digitalWrite(relay2,LOW);
    
      }
      }
