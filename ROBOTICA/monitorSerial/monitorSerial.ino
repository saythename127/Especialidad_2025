int i = 0;
int wait = 500;
int x = 3;
int y = 4;
String operador = " + ";
String igual = " = ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int z = x + y;

Serial.print(x);
Serial.print(" + ");
Serial.print(y);
Serial.print(igual);
Serial.println(z);
delay(wait);
}
