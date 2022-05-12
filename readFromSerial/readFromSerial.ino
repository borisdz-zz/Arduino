int numBlinks;
int red = 12;
int dt = 500;
String msg = "How many blinks do you want?";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(red, OUTPUT);
}

void loop() {

  Serial.println(msg);
  while (!Serial.available()) {}

  numBlinks = Serial.parseInt();

  for (int i = 0; i < numBlinks; i++) {
    digitalWrite(red, HIGH);
    delay(dt);
    digitalWrite(red, LOW);
    delay(dt);
  }

}
