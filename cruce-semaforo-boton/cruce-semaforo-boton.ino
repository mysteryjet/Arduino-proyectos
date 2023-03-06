// SEMAFORO 1
int s1_r = 2; //se define el valor del pin para el led rojo
int s1_a = 4; //se define el valor del pin para el led amarillo
int s1_v = 7; //se define el valor del pin para el led verde
// SEMAFORO 2
int s2_r = 8; //se define el valor del pin para el led rojo
int s2_a = 12; //se define el valor del pin para el led amarillo
int s2_v = 13; //se define el valor del pin para el led verde
// boton
int boton = 3; //se define el valor del pin para el boton
int estado_boton = 0; // variable para guardar el estado del boton

void setup() {
//pines correspondientes al semáforo uno y dos, se declaran los pines de 
//cada semáforo como salid
pinMode(s1_r,OUTPUT); //led rojo del semaforo 1
pinMode(s1_a,OUTPUT); //led amarillo del semaforo 1
pinMode(s1_v,OUTPUT);//led verde del semaforo 1
pinMode(s2_r,OUTPUT); //led rojo del semaforo 2
pinMode(s2_a,OUTPUT);//led amarillo del semaforo 2
pinMode(s2_v,OUTPUT);//led verde del semaforo 2
pinMode(boton, INPUT); // botón
}
void loop() {
  estado_boton = digitalRead(boton);//aqui se guardará si el estado del botón, si se presiona o se deja de presionar
  digitalWrite(s1_v,HIGH); //se enciende led verde en semáforo 1
  digitalWrite(s2_r, HIGH); // se enciende led rojo en semaforo 2


if (estado_boton == HIGH){// si el botón está presionado
  digitalWrite(s1_v,LOW);//comienza parpadeo de luz verde en semáforo 1
  digitalWrite(s2_r, HIGH); //comienza parpedo de luz roja en semaforo 2
  delay(250); //esperamos 0.25 segundos
  digitalWrite(s1_v, HIGH); //parpadeo de luz verde en semáforo 1
  digitalWrite(s2_r, LOW); //parpadeo de luz roja en semaforo 2
  delay(250); //esperamos 0.25 segundos
  digitalWrite(s1_v,LOW); //parpadeo de luz verde en semáforo 1
  digitalWrite(s2_r,HIGH);//parpadeo de luz roja en semaforo 2
  delay(250); //esperamos 0.25 segundos
  digitalWrite(s1_v, HIGH); //parpadeo de luz verde en semáforo 1
  digitalWrite(s2_r,LOW); // parpadeo de luz roja en semaforo 2
  delay(250); //esperamos 0.25 segundos
  digitalWrite(s1_v,LOW); //apagado de luz verde en semáforo 1
  //encendido de led amarillo en semáforo 1
  digitalWrite(s1_a, HIGH);//se enciende luz amarilla en semáforo 1
  digitalWrite(s2_a, HIGH);//se enciende luz amarilla en semáforo 2
  delay(250); // esperamos 0.25 segundos
  digitalWrite(s1_a,LOW); //se apaga luz amarilla en semáforo 1
  digitalWrite(s2_a, LOW); // se apaga luz amarilla en semáforo 2
  delay(250); // esperamos 0.25 segundos
  digitalWrite(s1_a, HIGH); //se enciende luz amarilla en semáforo 1
  digitalWrite(s2_a, HIGH);//se enciende luz amarilla en semáforo 2
  delay(250);// esperamos 0.25 segundos
  digitalWrite(s1_a,LOW);//se apaga luz amarilla en semáforo 1
  digitalWrite(s2_a, LOW);// se apaga luz amarilla en semáforo 2
  delay(250);// esperamos 0.25 segundos
  // encendido de led rojo en semaforo 1
  digitalWrite(s1_r,HIGH); //se enciende led rojo en semáforo 1
  digitalWrite(s2_v, HIGH); // se enciende led verde en semaforo 2
  ///////
  while (digitalRead(boton)== HIGH){//esto si se deja de presionar el botón

  }
  digitalWrite(s1_r, LOW);//semaforo 1 rojo apaga
  digitalWrite(s2_v, LOW);//semaforo 2 verde apaga
  delay(250);// esperamos 0.25 segundos
  digitalWrite(s1_r, HIGH);//semaforo 1 rojo prende
  digitalWrite(s2_v, HIGH);//semaforo 2 verde prende
  delay(250);// esperamos 0.25 segundos
  digitalWrite(s1_r, LOW);//semaforo 1 rojo apaga
  digitalWrite(s2_v, LOW);//semaforo 2 verde apaga
  delay(250);// esperamos 0.25 segundos
  digitalWrite(s1_r, HIGH);//semaforo 1 rojo prende
  digitalWrite(s2_v,HIGH);// semaforo 2 verde prende
  delay(250);// esperamos 0.25 segundos
  digitalWrite(s1_v, HIGH);// se enciende semaforo 1 verde
  digitalWrite(s1_r,LOW);// se apaga semaforo 1 rojo
  digitalWrite(s2_r, HIGH);//se enciende semaforo 2 rojo
  digitalWrite(s2_v, LOW);//se apaga semaforo 2 verde
  }
}
