String command ;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);

  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {

  command = Serial.readStringUntil('\n');

    if (command == "on") {
    
      digitalWrite(LED_BUILTIN, LOW);

      Serial.write("Led on");
    }

    else if (command == "off") {

      digitalWrite(LED_BUILTIN, HIGH);

      Serial.write("Led off");
    }

    else{

      Serial.write("Invaild command");

    }
    
  }
}
