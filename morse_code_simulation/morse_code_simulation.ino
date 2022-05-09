int blueLED=8;
float pi=3.14;
int dot=100;
int dash=500;

void setup() {
  // put your setup code here, to run once:
pinMode(blueLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
//3 DOTS:
for(int i=0;i<3;i++){
  digitalWrite(blueLED, HIGH);
  delay(dot);
  digitalWrite(blueLED,LOW);
  delay(dot);
}
delay(200);
//3 DASHES:
for(int i=0;i<3;i++){
  digitalWrite(blueLED, HIGH);
  delay(dash);
  digitalWrite(blueLED,LOW);
  delay(dash);
}
delay(200);
//3 DOTS:
for(int i=0;i<3;i++){
  digitalWrite(blueLED, HIGH);
  delay(dot);
  digitalWrite(blueLED,LOW);
  delay(dot);
}
delay(1000);
}
