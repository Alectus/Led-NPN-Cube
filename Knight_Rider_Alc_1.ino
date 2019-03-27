// Code geschreven door Alectus.
// Zelfde schema kan gebruikt worden.
// Drie Patronen :
// Rij 1 = pin 13 van links naar rechts en terug 1x , daarna rij 2 hetzelfde op pin 12 en idem rij 3 op pin 11. 
// langere pauze
// Rij 1 en 2 en 3 heen en terug tegelijk, 3x
// langere pauze
// Rij 1 en 2 en 3 blinken (alles aan en uit) 3x
// langere pauze

// led beeld bij patroon 2 en 3 zijn nogal dim, voedingsrail op 10V gezet maar maakt niet zoveel uit
// hoe dat in het echt uitpakt weet ik niet maar 10V is waarschijnlijk teveel voor deze transistors BC547B zijn dat geloof ik.
// de weerstanden naar de leds staan op 100Ohm (niet in beeld op schema)

int count = 0;
int t100 = 100;         // deze is voor patroon 1 , de leds zijn dan nog goed helder
int t1000 = 1000;      //  t000 voor blink
int extraLang = 3000;  // pauze tussen de drie patronen exta lang

void setup()
{ 
 for (int i = 0; i <= 13; i++) 
 {
  pinMode(i, OUTPUT);
 }
 for (int i = 11; i <= 13; i++) 
 {
  digitalWrite(i, LOW);           
 }
}
// einde setup ************************************************************

void loop() {   // VL VL VL VL VL VL VL VL VL VL VL VL VL VL VL

// Patroon 1 : Alle drie de rijen apart heen en terug

for (int i = 13 ; i > 10 ; i-- ) {          // Hoogste lus om de drie rijen om de beurt in beweging te krijgen.

      digitalWrite(i, HIGH);                //  andere twee rijen 12 en 11 waren al Low in set-up

 for (count = 2 ; count < 11 ; count++ ) {   // binnen lus 1 voor links naar rechts
  digitalWrite(count, HIGH);
  delay(t100);
  digitalWrite(count , LOW);
  delay(t100);
 }
 for (count = 10 ; count > 1 ; count-- ) {    // binnen lus 2 voor rechts naar links
  digitalWrite(count, HIGH);
  delay(t100);
  digitalWrite(count , LOW);
  delay(t100);
 }
 digitalWrite(i, LOW);            // de twee binnenste lussen zijn uitgevoerd, zet de rij i weer op 0
}                                 // en maak de volgende rij hoog

//  Einde patroon 1       ***********************************************

delay (extraLang);

// *************************************************************************************

// Patroon 2 : Alle drie de rijen samen heen en terug, count zou nu twee moeten zijn maar niet zo belangrijk, kan opnieuw ingesteld worden.

digitalWrite(13, HIGH);  // zet alle drie de rijen op actief.
digitalWrite(12, HIGH);
digitalWrite(11, HIGH);   

// deze keer geen hoogste lus omdat alle drie de rijen tegelijk actief zijn

for (count = 2 ; count < 11 ; count++ ) {   // in principe hetzelfde als de vorige maar nu per kolom 3 leds tegelijk ipv 1 led per kolom.
  digitalWrite(count, HIGH);
  delay(t100);                              // delays wat langer gezet als bij het vorige patroon want per drie leds tegelijk blijven die te dim.
  digitalWrite(count , LOW);
  delay(t100);
 }
 for (count = 10 ; count > 1 ; count-- ) {    
  digitalWrite(count, HIGH);
  delay(t100);
  digitalWrite(count , LOW);
  delay(t100);
 }
// De leds zijn weer terug in start positie
   
 
 //  Einde patroon 2       ***********************************************************

delay (extraLang);

// pin 11 , 12, 13 zijn nog steeds alle drie High dus dat kan mooi gelijk meegenomen worden naar het laatste patroon

//   Patroon 3 : Alle leds tegelijk 3x blinken. ***************************************

for ( int i = 1 ; i < 4 ; i++) {  // 3x alles blinken , dit is de hoogste lus

for ( count = 2 ; count < 11 ; count++) { // lus om alle led pinnen hoog te zetten
  digitalWrite(count, HIGH);
}
delay (t1000); // delay iets langer gezet ander blinkt die wel erg snel

for ( count = 10 ; count > 1 ; count--) { // lus om alle led pinnen laag te zetten
  digitalWrite(count, LOW);
}
delay (t1000);

} // eind haakje van hoogste lus

//  Einde patroon 3       ***********************************************************

delay (extraLang);

// Nu wil het programma weer terug naar begin van void loop en daarom niet vergeten de pinnen 11 ,12, 13 weer laag te zetten.

for (int i = 11; i <= 13; i++) 
 {
  digitalWrite(i, LOW);           
 }

}  // eindhaakje van void loop *******************************************************
