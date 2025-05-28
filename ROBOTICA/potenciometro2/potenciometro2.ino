float vOut;
float vRead;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(vRead, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
vOut = analogRead(vRead);
Serial.println(VOut);
delay(dt);

}
