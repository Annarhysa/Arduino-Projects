int state = 0;
void setup{
    pinMode(LED_BUILTIN, OUTPUT);
    digitalWrite(LED_BUILTIN, LOW);
    Serial.begin(9600);
}

void loop(){
    if(state == '0'){
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("LED Off");
        state = 0;
    }
    else if(state = '1'){
        digitalWrite(LED_BUILTIN, HIGH);
        Serial.println("LED On");
        state = 0;
    }
}