# Home Automation By using Bluetooth, GSM, and Wi-Fi

Our television sets and other electronic equipment now have remote controls, which have made our lives a lot easier. Have you ever considered home automation, which allows you to use a remote control to manage tube lights, fans, and other electrical equipment in your home? Yes, without a doubt! But, are the solutions available cost-effective? If the answer is no, we've come up with a solution. We've developed a new Arduino-based home automation system that uses Bluetooth,GSM,and Wi-Fi. This technology is extremely cost-effective, and it allows the user to control any electrical item without the usage of a remote control. This project allows the user to use his or her smartphone to control all of his or her electronic equipment. Time is really valuable.
Everyone wants to save as much time as possible. To save time, new technologies are being introduced. We're introducing a Bluetooth-based Home Automation solution to save customers time. You can use this technology to operate your household appliances from your smartphone. Within the range of Bluetooth, Wi-Fi, and GSM, you may turn on and off your household appliances.


## FAQ

#### Question 1
Why did the Wi-Fi code compile but not work?
Answer

Check to see if you've changed these lines of code.
Wi-Fi_SSID 
Wi-Fi password
AIO_USERNAME    
AIO_KEY     

#### Question 2
How to add more relay in the project?
Answer 

1)
In GSM code follow these step
Add these line respectively

#define ## 7       // 7 = next number  //## = name of device 

pinMode(##, OUTPUT);  //## = name of device  //## = name of device 

digitalWrite(##, HIGH);   //## = name of device 

digitalWrite(##, LOW);   //## = name of device  

2)
In Bluetooth code follow these step
Add these line respectively

const int relay5=8;   // 5 = next number of relay 8 = pin number 

pinMode(relay5,OUTPUT);  // 5 = next number of relay

 {
    digitalWrite(relay5,LOW);   // 5 = next number of relay
    }

 digitalWrite(relay5,HIGH);  // 5 = next number of relay
 
 digitalWrite(relay5,LOW);  // 5 = next number of relay


#### Question 3
App to use to control project ?
Answer 

I created an app that you may use in your project, and it has been thoroughly tested in a real-world setting.
you can download it from this repository or you can use any app of your choice.

 #### Question 4
App to use to app ?
 follow these simple step

o Turn on mobile Bluetooth

o Open Automation App
o Click on the connected button

o Now a new pop up screen is open, selected on your Bluetooth module name

o Now app automatically shows Circuit is connected (App pair with your Bluetooth)

o Now you are good to go and control the home appliance

