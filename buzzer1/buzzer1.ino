int myNumb;
int buzzPin = 8;
int dt = 500;
String msg = "Please input your number";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() == 0) {}
  Serial.println(msg);


  myNumb = Serial.parseInt();
  if (myNumb > 10) {
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }
}
