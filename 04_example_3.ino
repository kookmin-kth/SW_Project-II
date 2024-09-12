#define PIN_LED 13
bool toggle;

void setup(){
  pinMode(PIN_LED, OUTPUT);    
  toggle = false;
  digitalWrite(PIN_LED, toggle);
}

void loop(){
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle);
  delay(1000);
}

bool toggle_state(bool toggle){
  return !toggle;
}
