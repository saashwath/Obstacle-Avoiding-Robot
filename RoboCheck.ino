#define trig 5
#define echo 6
void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
Serial.begin(9400);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() 
{
  int duration,distance;
  digitalWrite(trig,HIGH);
  delay(1000);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  int thisPitch=map(distance,0,200,2099,10);
  delay(400);
  if(distance>5)
  {
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  analogWrite(3,253);
  analogWrite(2,254);
  delay(500);
  noTone(4);
}
else 
{

  digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
}}
