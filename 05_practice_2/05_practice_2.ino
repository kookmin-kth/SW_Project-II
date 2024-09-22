bool toggle;

void setup(){
  pinMode(7, OUTPUT);    
  toggle = true;
  digitalWrite(7, toggle);
}

void loop(){
  toggle = toggle_state(toggle);
  digitalWrite(7, toggle);
  delay(1000);
  for(int i=0; i<11; i++){
    toggle = toggle_state(toggle);
    digitalWrite(7, toggle);
    delay(100);
  }
  
  while(1){
    
  }
  
}

bool toggle_state(bool toggle){
  return !toggle;
}
