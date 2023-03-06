// SEMAFORO 1
int s1_r = 2;      //se define el valor del pin para el led rojo
int s1_a = 4;  //se define el valor del pin para el led amarillo
int s1_v = 7;     //se define el valor del pin para el led verde
// SEMAFORO 2
int s2_r = 8;      //se define el valor del pin para el led rojo
int s2_a = 12;  //se define el valor del pin para el led amarillo
int s2_v = 13;     //se define el valor del pin para el led verde

void setup() {
  //semaforo uno y dos, se declaran los pines de cada semaforo como salid
  pinMode(s1_r,OUTPUT);  
  pinMode(s1_a,OUTPUT);
  pinMode(s1_v,OUTPUT);
  pinMode(s2_r,OUTPUT);  
  pinMode(s2_a,OUTPUT);
  pinMode(s2_v,OUTPUT);     
}

void loop() {
  //SEMAFORO UNO
  //encendido de verde 2 seg y parpadeo de 1 seg
  digitalWrite(s1_v,HIGH); //se enciende led verde
  delay(2000); //esperamos 2 segundos
  digitalWrite(s1_v,LOW);
  delay(250);
  digitalWrite(s1_v, HIGH);
  delay(250);
  digitalWrite(s1_v,LOW);
  delay(250);
  digitalWrite(s1_v, HIGH);
  delay(250);
  digitalWrite(s1_v,LOW);
  //encendido de led amarillo y parpadeo de 1 seg
  digitalWrite(s1_a, HIGH);
  delay(250);
  digitalWrite(s1_a,LOW);
  delay(250);
  digitalWrite(s1_a, HIGH);
  delay(250);
  digitalWrite(s1_a,LOW);
  //encendido de led rojo 2 seg y parpadeo de 1 seg
  digitalWrite(s1_r, HIGH);
  delay(2000);
  digitalWrite(s1_r, LOW);
  delay(250);
  digitalWrite(s1_r,HIGH);
  delay(250);
  digitalWrite(s1_r, LOW);
  delay(250);
  digitalWrite(s1_r,HIGH);
  delay(250);
  digitalWrite(s1_r, LOW);
  delay(250);

//SEMAFORO DOS
  digitalWrite(s2_r,HIGH); //se enciende led roja
  delay(2000); //esperamos 2 segundos
  digitalWrite(s2_r,LOW);
  delay(250);
  digitalWrite(s2_r, HIGH);
  delay(250);
  digitalWrite(s2_r,LOW);
  delay(250);
  digitalWrite(s2_r, HIGH);
  delay(250);
  digitalWrite(s2_r,LOW);
  //encendido de led amarillo y parpadeo de 1 seg
  digitalWrite(s2_a, HIGH);
  delay(250);
  digitalWrite(s2_a,LOW);
  delay(250);
  digitalWrite(s2_a, HIGH);
  delay(250);
  digitalWrite(s2_a,LOW);
  //encendido de led rojo 2 seg y parpadeo de 1 seg
  digitalWrite(s2_v, HIGH);
  delay(2000);
  digitalWrite(s2_v, LOW);
  delay(250);
  digitalWrite(s2_v,HIGH);
  delay(250);
  digitalWrite(s2_v, LOW);
  delay(250);
  digitalWrite(s2_v,HIGH);
  delay(250);
  digitalWrite(s2_v, LOW);
  delay(250); 
}
