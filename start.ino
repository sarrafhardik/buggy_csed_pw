void startt(){
  while(event != 's'){
    if(Serial.available()){
      event = Serial.read();
      }
    stopp();
    }
  }
