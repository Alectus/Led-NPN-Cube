// Code geschreven door Jeroen Vrij.
// Zelfde schema als bij Led_NPN_End

int count = 0;
long randNumber;
long randNumber1;
long randNumber2;
long randNumber3;
int t400 = 400;     // <<< toegevoegd door kit
int t200 = 200;     // <<< toegevoegd door kit

  

void setup()
{ 
 for (int i = 0; i <= 13; i++) 
 {
  pinMode(i, OUTPUT);
 }
 for (int i = 11; i <= 13; i++) 
 {
  digitalWrite(i, HIGH);
 }
  randomSeed(analogRead(0));
}
void loop()
{ 
// randNumber = random(2, 10);  <<< alle 10's veranderd tot 11 want random max is max - 1.
// hierdoor kwam led kolom 10 niet bij.

  for (int i = 0; i <= 20; i++) 
 {
  randNumber = random(2, 11);         
  digitalWrite(randNumber, HIGH);
  digitalWrite(11,LOW);
  delay(t400);
  digitalWrite(12, LOW);
  digitalWrite(11,HIGH);
  delay(t400);
  digitalWrite(13, LOW);
  digitalWrite(12,HIGH);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  randNumber = random(2, 11);
  digitalWrite(randNumber, HIGH);
  delay(t200);
  digitalWrite(randNumber, LOW);
  }
 }
