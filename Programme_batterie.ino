int bBat=A0;
float Btest;
int pct;

void setup() {
  // put your setup code here, to run once:
pinMode(bBat,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
Btest=analogRead(bBat);
pct=(Btest/1024)*100;
Serial.println(Btest);
Serial.println("Le niveau de batterie est :");
Serial.print(pct);
Serial.println("%");
delay(2000);

}
