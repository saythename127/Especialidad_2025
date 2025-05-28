int bluLed = 9;
int brightness1 =255;
int dt = 500;

void setup() {
  //put your setup code heare, to run once:
pinMode (bluLed, OUTPUT);
}

void loop(){
  //put your main code here, to run reapeatedly
analogWrite (bluLed, brightness1);
delay(dt);
}