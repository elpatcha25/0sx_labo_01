const int NUMERO_ETUDIANT = 2407822;
const int PIN_HOLE = 13;
const int CLIGNOTE= 2;
const int MAX =255;
const int VARMAX=2048;
const int COUNT=256;
const int STATEDELAY= VARMAX/COUNT;


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_HOLE, OUTPUT);//indique avec le  output ou input si l'information est sortante ou rentrant respectivement  
  Serial.begin(9600);//sa initialise les series de communication
}
void allumer() {

  Serial.println("Allume -2407822");
  
  digitalWrite(PIN_HOLE, HIGH);//permet d'allumer la LED
  delay(2000);


}
void clignotement() {
Serial.println("Clignotement -2407822");
for(int i=0; i<CLIGNOTE; i++){
   digitalWrite(PIN_HOLE, HIGH);//permet d'allumer la LED
  delay(250);
  digitalWrite(PIN_HOLE, LOW);//permet d'eteindre la LED 
  delay(250);
}

}
void variation() {
  Serial.println("Variation -2407822");
for(int i=0; i< MAX; i++ ){
  analogWrite(PIN_HOLE, i);//permet d'augmenter ou diminuer l'intensité de la lumiere 
  delay(STATEDELAY);//nombre de milliseconde pour ma variation
}

}
void eteint() {
  Serial.println("eteindre -2407822");
  digitalWrite(PIN_HOLE, LOW);//permet d'eteindre la LED 
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  allumer();
  clignotement();
  variation();
  eteint();
}