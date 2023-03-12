int lpgA0 = A0;
float sensorvalue;
void setup(){
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(lpgA0, INPUT);
    Serial.begin(9600);
    Serial.println("Gas Sensor is warming up");
    delay(20000);
}

void loop(){
    sensorvalue = analogRead(lpgA0);
    Serial.println(sensorvalue);
    if(sensorvalue>600){
        Serial.println("LPG Gas is detected);
        digitalWrite(LED_BUILTIN, HIGH);
    }
    else{
        Serial.println("LPG Gas Not detected");
        digitalWrite(LED_BUILTIN, LOW);
    }
    delay(2000);
}