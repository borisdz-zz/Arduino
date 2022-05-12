int potPin=A1;
int gPin=6;
int potVal;
float ledVal;
int dt=500;

void setup() {

pinMode(potPin,INPUT);
pinMode(gPin,OUTPUT);
Serial.begin(9600);

}

void loop() {

potVal=analogRead(potPin);
ledVal=(255./1023.)*potVal;
analogWrite(gPin,ledVal);

Serial.println(ledVal);
delay(dt);
}
