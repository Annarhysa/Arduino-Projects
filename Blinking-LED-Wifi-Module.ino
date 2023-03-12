#define BLYNK_PRINT serial
#include<ESP0266Wifi.h>
#include<BlynkSimpleEsp0266.h>
//define the relay pin 
#define relay1 5 //D1
#define relay2 2 //D4

#define BLYNK_AUTH_TOKEN "OyZVlmu_13WwbyQEWnI77uPAC-P5pLTJ"

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Anna"; //Wifi Name
char pass[] = "hello123" //wifi password

// Get the button values
BLYNK_WRITE(V0){
    bool value1 = param.asInt(); //check their value and turn the relay1 ON and OFF
    if(value1 == 1){
        digitalWrite(relay1, LOW);
    }
    else{
        digitalWrite(relay1, HIGH);
    }
}

// Get the button values

BLYNK_WRITE(V1){
    bool value2 = param.asInt(); //check their value and turn the relay1 ON and OFF
    if(value2 ==1){
        digitalWrite(relay2, LOW);
    }
    else{
        digitalWrite(relay2, HIGH);
    }
}

void setup(){
    pinMode(relay1, OUTPUT);
    pinMode(relay2, OUTPUT);
    digitalWrite(relay1, HIGH);
    digitalWrite(relay2, HIGH);

    //initalize the BLYNK library

    Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop(){
    Blynk.run()
}