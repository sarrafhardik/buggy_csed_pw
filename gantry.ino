void gantry() {
  
if (digitalRead(gdp)==HIGH) {
unsigned long d = pulseIn(gdp,HIGH);

if (d>500 and d<1500){
  Serial.println("Gantry 1");
  stopp(); delay(1000);
  }
  
else if (d>2000 and d< 3000) {
  Serial.println("Gantry 2");
  stopp(); delay(1000);
  }
  
else if (d>3000 and d<4000) {
  Serial.println("Gantry 3");
  stopp(); delay(1000);
  count = count + 1;
  } 
else {
  Serial.println("Unknown Gantry");
  }
}
}
