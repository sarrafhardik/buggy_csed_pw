void forward() {
  digitalWrite(5,HIGH); digitalWrite(6,LOW);
  digitalWrite(7,LOW); digitalWrite(8,HIGH);
  }
void stopp() {
  digitalWrite(5,LOW); digitalWrite(6,LOW);
  digitalWrite(7,LOW); digitalWrite(8,LOW);
  }
void right(){
  digitalWrite(5,LOW); digitalWrite(6,LOW);
  digitalWrite(7,LOW); digitalWrite(8,HIGH);
  }
void left(){
  digitalWrite(5,HIGH); digitalWrite(6,LOW);
  digitalWrite(7,LOW); digitalWrite(8,LOW);
  }

int ultraRead() {
  digitalWrite(trigPin, LOW); delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  return(pulseIn(echoPin, HIGH)*0.017);
  }

void pathFinder(){
  int ls = digitalRead(A0);
  int rs = digitalRead(A1);
  
  if(ultraRead()<=20) { stopp(); delay(1000);}
  
  if(ls==1 && rs==1)      { forward();}
  else if(ls==0 && rs==0) { forward();} 
  else if(ls==0 && rs==1) { left();}
  else if(ls==1 && rs==0) { right();}
  else                    { stopp();}
  }

void parking(){
  int ls = digitalRead(A0);
  int rs = digitalRead(A1);
  
  if(ultraRead()<=20) { stopp(); delay(2000);}
  if(ls==1 && rs==1)      { forward();}
  else if(ls==0 && rs==0) { stopp;} 
  else if(ls==0 && rs==1) { left();}
  else if(ls==1 && rs==0) { right();}
  else                    { stopp();}
  }
