int myPin=A2;
int redPin=9;
int readVal;
float v2;
int dt=250;

void setup() {
Serial.begin(9600);
pinMode(redPin, OUTPUT);
}

void loop() {
readVal=analogRead(myPin);
v2=(5./1023.)*readVal;

Serial.print("Potentiometer voltage is: ");
Serial.println(v2);
if(v2<4.0){
  digitalWrite(redPin,LOW);
}else{
  digitalWrite(redPin,HIGH);
}

delay(dt);
}
