int blueled = 9;
int brightness1 = 255;
int brightness2 = 200;
int brightness3 = 80;
int brightness4 = 40;
int brightness5 = 10;
int brightness6 = 40;
int brightness7 = 80;
int brightness8 = 200;
int brightness9 = 255;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(blueled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(blueled, brightness1);
delay(dt);
analogWrite(blueled, brightness2);
delay(dt);
analogWrite(blueled, brightness3);
delay(dt);
analogWrite(blueled, brightness4);
delay(dt);
analogWrite(blueled, brightness5);
delay(dt);
analogWrite(blueled, brightness6);
delay(dt);
analogWrite(blueled, brightness7);
delay(dt);
analogWrite(blueled, brightness8);
delay(dt);
analogWrite(blueled, brightness9);
delay(dt);
}
