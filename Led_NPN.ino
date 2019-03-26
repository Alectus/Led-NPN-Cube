const int pinArray0[] ={2, 3, 4, 5, 6, 7, 8, 9, 10};
const int pinArray1[] ={3, 4, 5, 6, 7, 8, 9, 10};
const int pinArray2[] ={2, 4, 5, 6, 7, 8, 9, 10};
const int pinArray3[] ={2, 3, 5, 6, 7, 8, 9, 10};
const int pinArray4[] ={2, 3, 4, 6, 7, 8, 9, 10};
const int pinArray5[] ={2, 3, 3, 5, 7, 8, 9, 10};
const int pinArray6[] ={2, 3, 4, 5, 6, 8, 9, 10};
const int pinArray7[] ={2, 3, 4, 5, 6, 7, 9, 10};
const int pinArray8[] ={2, 3, 4, 5, 6, 7, 8, 10};
const int pinArray9[] ={2, 3, 4, 5, 6, 7, 8, 9};
const int timer      = 30;
const int t200       = 200;
const int t500       = 500;
int ledState   = 0;
int count      = 0;
long randNumber;

//all pins to output//
void setup()
 {
  randomSeed(analogRead(0));
 {
 for (int i = 2; i <= 13; i++)
 {
  pinMode(i, OUTPUT);
 }
 for (int i = 11; i <= 13; i++)
 {
  digitalWrite(i, LOW);
 }
}}

//Kolom(pinnumber) sets 1 high 8 low//
void Kolom(int number)
 {
 switch (number) 
 {
 case 1:
  digitalWrite(2, HIGH);
  digitalWrite(pinArray1[8], LOW);
 break;
 case 2:
  digitalWrite(3, HIGH);
  digitalWrite(pinArray2[8], LOW);
 break;
 case 3:
  digitalWrite(4, HIGH);
  digitalWrite(pinArray3[8], LOW);
 break;
 case 4:
  digitalWrite(5, HIGH);
  digitalWrite(pinArray4[8], LOW);
 break;
 case 5:
  digitalWrite(6, HIGH);
  digitalWrite(pinArray5[8], LOW);
 break;
 case 6:
  digitalWrite(7, HIGH);
  digitalWrite(pinArray6[8], LOW);
 break;
 case 7:
  digitalWrite(8, HIGH);
  digitalWrite(pinArray7[8], LOW);
 break;
 case 8:
  digitalWrite(9, HIGH);
  digitalWrite(pinArray8[8], LOW);
 break;
 case 9:
  digitalWrite(10, HIGH);
  digitalWrite(pinArray9[8], LOW);
 break;
 }

}
void Layer(int number)
 {
 switch (number) 
 {
 case 1:
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
 break;
 case 2:
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(13, LOW);
 break;
 case 3:
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
}
}
void loop()
{
//random gaan er leds branden
//eerst laag voor laag daarna random
  Layer(1);
 for (int i = 0; i <=250; i++) 
 {
  randNumber = random(1, 9);
  Kolom(randNumber);
  randNumber = random(10,100);
  delay(randNumber);
 }
  Layer(2);
 for (int i = 0; i <=250; i++) 
 {
  randNumber = random(1, 9);
  Kolom(randNumber);
  randNumber = random(10,100);
  delay(randNumber);
 }
  Layer(3);
 for (int i = 0; i <=250; i++) 
 {
  randNumber = random(1, 9);
  Kolom(randNumber);
  randNumber = random(10,100);
  delay(randNumber);
 }
 for (int i = 0; i <=250; i++);
 {
  randNumber = random(1, 9);
  Kolom(randNumber);
  randNumber = random(1, 3);
  Layer(randNumber);
  randNumber = random(10, 100);
  delay(randNumber);
 }
//knight rider effect 
//van onder naar boven en terug
  digitalWrite(pinArray0[9], LOW);
  Layer(1);
 for (count=0;count<8;count++) 
 {
  Kolom(count);
  delay(timer);
  Kolom(count + 1);
  delay(timer);
  Kolom(count);
  delay(timer*2);
 }
  Layer(2);
 for (count=8;count>0;count--) 
 {
  Kolom(count);
  delay(timer);
  Kolom(count - 1);
  delay(timer);
  Kolom(count);
  delay(timer*2);
 }
  Layer(3);
 for (count=0;count<8;count++) 
 {
  Kolom(count);
  delay(timer);
  Kolom(count + 1);
  delay(timer);
  Kolom(count);
  delay(timer*2);
 }
 for (count=8;count>0;count--) 
 {
  Kolom(count);
  delay(timer);
  Kolom(count - 1);
  delay(timer);
  Kolom(count);
  delay(timer*2);
 }
  Layer(2);
 for (count=0;count<8;count++) 
 {
  Kolom(count);
  delay(timer);
  Kolom(count + 1);
  delay(timer);
  Kolom(count);
  delay(timer*2);
 }
  Layer(1);
 for (count=8;count>0;count--) 
 {
  Kolom(count);
  delay(timer);
  Kolom(count - 1);
  delay(timer);
  Kolom(count);
  delay(timer*2);
 }
 //per x-as gaan er steeds 3 leds aan
 //1 voor 1 maar zo snel dat het lijkt
 //of ze constant branden
  Layer(1);
 for (int i = 0; i <=100; i++);
 {
  Kolom(1);
  delay(50);
  Kolom(2);
  delay(50);
  Kolom(3);
  delay(50);
 }
 for (int i = 0; i <=100; i++);
 {
  Kolom(4);
  delay(50);
  Kolom(5);
  delay(50);
  Kolom(6);
  delay(50);
 }
 for (int i = 0; i <=100; i++);
 {
  Kolom(7);
  delay(50);
  Kolom(8);
  delay(50);
  Kolom(9);
  delay(50);
 }
  Layer(2);
 for (int i = 0; i <=100; i++);
 {
  Kolom(1);
  delay(50);
  Kolom(2);
  delay(50);
  Kolom(3);
  delay(50);
 }
 for (int i = 0; i <=100; i++);
 {
  Kolom(4);
  delay(50);
  Kolom(5);
  delay(50);
  Kolom(6);
  delay(50);
 }
 for (int i = 0; i <=100; i++);
 {
  Kolom(7);
  delay(50);
  Kolom(8);
  delay(50);
  Kolom(9);
  delay(50);
 }
  Layer(3);
 for (int i = 0; i <=100; i++);
 {
  Kolom(1);
  delay(50);
  Kolom(2);
  delay(50);
  Kolom(3);
  delay(50);
 }
 for (int i = 0; i <=100; i++);
 {
  Kolom(4);
  delay(50);
  Kolom(5);
  delay(50);
  Kolom(6);
  delay(50);
 }
 for (int i = 0; i <=100; i++);
 {
  Kolom(7);
  delay(50);
  Kolom(8);
  delay(50);
  Kolom(9);
  delay(50);
 }
 }
