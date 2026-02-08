
#define TRIG A0
#define ECHO A1 

long duration;
int distance;
 
void setup()
{

  Serial.begin(9600); 
    
  pinMode(TRIG, OUTPUT);  

  pinMode(ECHO, INPUT);   
}
 
void loop() 
{

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  duration = pulseIn(ECHO, HIGH);

  distance= duration*0.034/2;
  
  Serial.println(distance);
  
  if(distance < 0.10){
    stopMotors()
    break
  }
}
