#define LED_PIN 9
#define BUTTON_PIN 2

byte lastButtonState;
byte ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  lastButtonState = digitalRead(BUTTON_PIN);
}

void loop() {
  byte buttonState = digitalRead(BUTTON_PIN);
  if (buttonState != lastButtonState) {
    lastButtonState = buttonState;
    if (buttonState == LOW){ //liberado
      if (ledState == HIGH){
        delay(50);
        ledState = LOW;        
      }
      else {
        delay(50);
        ledState = HIGH;
      }
      digitalWrite(LED_PIN, ledState);    
    }
  }
}
