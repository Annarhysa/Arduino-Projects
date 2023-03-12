void setup(){
    pinMode(LED_BUILTIN, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    int value = analogRead(A0);
    Serial.println(value);
    if(value<27){
        Serial.println("Water droplets not detected");
        digitalWrite(LED_BUILTIN, LOW);
    }
    else{
        Serial.println("Water droplets detected");
        digitalWrite(LED_BUILTIN, HIGH);
    }
    delay(1000);
}
