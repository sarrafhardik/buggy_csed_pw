//////////////////////////////////
//Bronze challenge              //
//ECE4_Labgroup1                //
//                              //
//HardikSarraf    102006096     //
//KritiJain       102006097     //
//Aadyajalota     102006098     //
//vanshikaSharma  102006099     //
//////////////////////////////////

const int trigPin = 13, echoPin = 12, gdp = A2;
static int count = 0,timee = 0;
static long unsigned int t1, t2;
char event = 'a';

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(gdp,INPUT);
  Serial.begin(9600); 

  //startt();
}

void loop() {
  gantry();
  //nfigb();
  pathFinder();
}
