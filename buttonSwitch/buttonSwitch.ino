int red=8;
int ledState=0;
int buttonPin=12;
int buttonRead;
int dt=100;

void setup() {
Serial.begin(9600);
pinMode(red,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {

buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead);
delay(dt);
if(!buttonRead && ledState == 0){
  digitalWrite(red,HIGH);
  ledState=1;
}
if(!buttonRead && ledState == 1){
  digitalWrite(red,LOW);
  ledState=0;
}
}
