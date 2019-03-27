const int pinArray0[] ={2, 3, 4, 5, 6, 7, 8, 9, 10};
const int pinArray1[] ={3, 4, 5, 6, 7, 8, 9, 10};
const int pinArray2[] ={2, 4, 5, 6, 7, 8, 9, 10};
const int pinArray3[] ={2, 3, 5, 6, 7, 8, 9, 10};
const int pinArray4[] ={2, 3, 4, 6, 7, 8, 9, 10};
const int pinArray5[] ={2, 3, 4, 5, 7, 8, 9, 10};
const int pinArray6[] ={2, 3, 4, 5, 6, 8, 9, 10};
const int pinArray7[] ={2, 3, 4, 5, 6, 7, 9, 10};
const int pinArray8[] ={2, 3, 4, 5, 6, 7, 8, 10};
const int pinArray9[] ={2, 3, 4, 5, 6, 7, 8, 9};
const int timer      = 50;    // const int timer      = 30;  <<<  timer op 50 gezet
const int t200       = 200;   // <<< deze wordt nergens gebruikt
const int t500       = 500;   // <<< deze wordt nergens gebruikt
int ledState   = 0;           // <<< deze wordt nergens gebruikt
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
void Kolom(long number)      // void Kolom(int number)   veranderd naar long maar merk weinig verschil
 {
 switch (number) 
 {
 case 1:
  digitalWrite(2, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd 
  digitalWrite(pinArray1[i], LOW);  //  digitalWrite(pinArray1[8], LOW);
 break;
 case 2:
  digitalWrite(3, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray2[i], LOW);   // digitalWrite(pinArray2[8], LOW);
 break;
 case 3:
  digitalWrite(4, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray3[i], LOW);   // digitalWrite(pinArray3[8], LOW);
 break;
 case 4:
  digitalWrite(5, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray4[i], LOW);    /// digitalWrite(pinArray4[8], LOW);
 break;
 case 5:
  digitalWrite(6, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray5[i], LOW);  //   digitalWrite(pinArray5[8], LOW);
 break;
 case 6:
  digitalWrite(7, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray6[i], LOW);  // digitalWrite(pinArray6[8], LOW);
 break;
 case 7:
  digitalWrite(8, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray7[i], LOW);  //   digitalWrite(pinArray7[8], LOW);
 break;
 case 8:
  digitalWrite(9, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray8[i], LOW);  //  digitalWrite(pinArray8[8], LOW);
 break;
 case 9:
  digitalWrite(10, HIGH);
  for (int i = 0 ; i < 8 ; i++ )    // toegevoegd
  digitalWrite(pinArray9[i], LOW);   //  digitalWrite(pinArray9[8], LOW);
 break;
 }
}
void Layer(long number)      // void Layer(int number) veranderd naar long maar merk weinig verschil
 {
 switch (number) 
 {
 case 1:
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
 break;
 case 2:
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);  
  digitalWrite(13, LOW);
 break;
 case 3:
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
 break;    // ****************** <<<< ********** kit toegevoegd ************************
  }
 }

void loop(){   // VL VL VL VL  VL VL VL VL  VL VL VL VL  VL VL VL VL
  
//random gaan er leds branden
//eerst laag voor laag daarna random
// **********************      *******  kit toegevoegd  ********** blink 3x met twee leds K1,L1 en K2,L1

  for ( int i = 1 ; i < 4 ; i++ ) {
Kolom(1); Layer(1);
delay (500);
Kolom(2); Layer(1);
delay (500);
}
// einde blink blokje ****************************************************
//

Layer(1);
    for (int i = 1; i <= 27 ; i++){   // for (int i = 0; i <= 250; i++) {   //  i op 27 gezet ivm testen
randNumber = random(1, 10);           //     randNumber = random(1, 9);
Kolom(randNumber);                    //     Kolom(randNumber);
                                      //     randNumber = random(10,100);   // Delay vast gezet op 100 en deze regel verwijderd ivm testen
delay(100);                           //     delay(randNumber);             // Delay vast gezet op 100 ivm testen
 }
Layer(2);
  for (int i = 1; i <= 27 ; i++) {    // for (int i = 0; i <= 250; i++) {   //  i op 27 gezet ivm testen
randNumber = random(1, 10);           //     randNumber = random(1, 9);
Kolom(randNumber);                    //     Kolom(randNumber);
                                      //     randNumber = random(10,100);   // Delay vast gezet op 100 en deze regel verwijderd ivm testen
delay(100);                           //     delay(randNumber);             // Delay vast gezet op 100 ivm testen
  }
Layer(3);
  for (int i = 1; i <= 27 ; i++) {    // for (int i = 0; i <= 250; i++) {   //  i op 27 gezet ivm testen
randNumber = random(1, 10);           //     randNumber = random(1, 9);
Kolom(randNumber);                    //     Kolom(randNumber);
                                      //     randNumber = random(10,100);   // Delay vast gezet op 100 en deze regel verwijderd ivm testen
delay(100);                           //     delay(randNumber);             // Delay vast gezet op 100 ivm testen
  }
// Einde random per rij codeblokje ****************************************
//
// **********************      *******  kit toegevoegd  ********** blink 3x met twee leds K8,L3 en K9,L3

  for ( int i = 1 ; i < 4 ; i++ ) {   
Kolom(8); Layer(3);
delay (500);
Kolom(9); Layer(3);
delay (500);
  }
// einde blink blokje ****************************************************
// 

 for ( int i = 1 ; i <= 50 ; i++ ) {    // for (int i = 0; i <= 250; i++);  //  i op 50 gezet ivm testen
randNumber = random(1, 10);           // randNumber = random(1, 9);
Kolom(randNumber);                    //  Kolom(randNumber);
randNumber = random(1, 4);            //  randNumber = random(1, 3);
Layer(randNumber);                    //  Layer(randNumber);
                                      //  randNumber = random(10 , 100);  // Delay vast gezet op 100 en deze regel verwijderd ivm testen
delay(100);                           //  delay(randNumber);              // Delay vast gezet op 100 ivm testen
}
// Einde randomblokje *****************************************************
// 
// **********************      *******  kit toegevoegd  ********** blink 3x met twee leds K5,L2 en K6,L2

  for ( int i = 1 ; i < 4 ; i++ ) {   
Kolom(5); Layer(2);
delay (500);
Kolom(6); Layer(2);
delay (500);
  }
// einde blink blokje ****************************************************
//  

// Het codeblok hieronder tot aan eind void loop haakje heeft kit ongewijzigd gelaten 
//knight rider effect 
//van onder naar boven en terug

  digitalWrite(pinArray0[9], LOW);
  Layer(1);
 for (count=0;count<9;count++) 
 {
  digitalWrite(pinArray0[count], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count+1], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count], LOW);
  delay(timer*2);
 }
  Layer(2);
 for (count=9;count>0;count--) 
 {
  digitalWrite(pinArray0[count], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count-1], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count], LOW);
  delay(timer*2);
 }
  Layer(3);
 for (count=0;count<9;count++) 
 {
  digitalWrite(pinArray0[count], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count+1], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count], LOW);
  delay(timer*2);
 }
 for (count=9;count>0;count--) 
 {
  digitalWrite(pinArray0[count], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count-1], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count], LOW);
  delay(timer*2);
 }
  Layer(2);
 for (count=0;count<9;count++) 
 {
  digitalWrite(pinArray0[count], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count+1], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count], LOW);
  delay(timer*2);
 }
  Layer(1);
 for (count=9;count>0;count--) 
 {
  digitalWrite(pinArray0[count], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count-1], HIGH);
  delay(timer);
  digitalWrite(pinArray0[count], LOW);
  delay(timer*2);
 }
  Layer(1);
 for (int i = 0; i <= 100; i++);
 {
  Kolom(1);
  delay(50);
  Kolom(2);
  delay(50);
  Kolom(3);
  delay(50);
 }
 for (int i = 0; i <= 100; i++);
 {
  Kolom(4);
  delay(50);
  Kolom(5);
  delay(50);
  Kolom(6);
  delay(50);
 }
 for (int i = 0; i <= 100; i++);
 {
  Kolom(7);
  delay(50);
  Kolom(8);
  delay(50);
  Kolom(9);
  delay(50);
 }
  Layer(2);
 for (int i = 0; i <= 100; i++);
 {
  Kolom(1);
  delay(50);
  Kolom(2);
  delay(50);
  Kolom(3);
  delay(50);
 }
 for (int i = 0; i <= 100; i++);
 {
  Kolom(4);
  delay(50);
  Kolom(5);
  delay(50);
  Kolom(6);
  delay(50);
 }
 for (int i = 0; i <= 100; i++);
 {
  Kolom(7);
  delay(50);
  Kolom(8);
  delay(50);
  Kolom(9);
  delay(50);
 }
  Layer(3);
 for (int i = 0; i <= 100; i++);
 {
  Kolom(1);
  delay(50);
  Kolom(2);
  delay(50);
  Kolom(3);
  delay(50);
 }
 for (int i = 0; i <= 100; i++);
 {
  Kolom(4);
  delay(50);
  Kolom(5);
  delay(50);
  Kolom(6);
  delay(50);
 }
 for (int i = 0; i <= 100; i++);
 {
  Kolom(7);
  delay(50);
  Kolom(8);
  delay(50);
  Kolom(9);
  delay(50);
 }
 }  // void loop eind haakje  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
