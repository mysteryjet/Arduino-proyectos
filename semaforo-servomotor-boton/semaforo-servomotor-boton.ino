#include <Servo.h>;
 // pushbutton pin
 const int boton = 8;
 // servo pin
 const int servoPin = 3;
 Servo servo;
 // leds del semafoto
 int ledrojo = 2;
 int ledama = 4;
 int ledverde = 7;
 // variable para guardar el estado del botón
 int estado_boton = 0;
//crear variable para alamacenar on contador y establacerlo en 0
int counter = 0;

void setup()
{
  servo.attach (servoPin);
  //pines correspondientes al semaforo
  pinMode(ledrojo,OUTPUT);
  pinMode(ledama,OUTPUT);
  pinMode(ledverde,OUTPUT);
  // establecer el pin del botón para ser un input:
  pinMode(boton, INPUT);
}

void loop()
{
//lee el estado digital del boton con la función digitalRead() y almacena el           //valor en  variable estado_boton
  estado_boton = digitalRead(boton);
  //se enciende el led verde
  digitalWrite(ledverde,HIGH);
  digitalWrite(ledrojo,LOW);
   //if the button is pressed increment counter and wait a tiny bit to give us some          //time to release the button
  if (estado_boton == LOW) // 
  {
	digitalWrite(ledverde,LOW);//comienza parpadeo de luz verde en semáforo 1
	delay(250); //esperamos 0.25 segundos
	digitalWrite(ledverde, HIGH); //parpadeo de luz verde en semáforo 1
	delay(250); //esperamos 0.25 segundos
	digitalWrite(ledverde,LOW); //parpadeo de luz verde en semáforo 1
	delay(250); //esperamos 0.25 segundos
	digitalWrite(ledverde, HIGH); //parpadeo de luz verde en semáforo 1
	delay(250); //esperamos 0.25 segundos
	digitalWrite(ledverde,LOW); //apagado de luz verde en semáforo 1
    //encendido de led amarillo en semáforo 1
	digitalWrite(ledama, HIGH);
	delay(250);
	digitalWrite(ledama,LOW);
	delay(250);
	digitalWrite(ledama, HIGH);
	delay(250);
	digitalWrite(ledama,LOW);
	delay(250);
    digitalWrite(ledrojo,HIGH);
    delay(250);
    digitalWrite(ledrojo,LOW);
    delay(250);
    digitalWrite(ledrojo,HIGH);
    delay(250);
    digitalWrite(ledrojo,LOW);
    delay(250);
    digitalWrite(ledrojo,HIGH);
    
    counter++;
    delay(150);
  }
    if(counter == 0)
    servo.write (20);  // zero degrees
  else if(counter == 1)
    servo.write(90);
  else if(counter == 2)
    servo.write (150); 
  else if(counter == 3)  
    servo.write (180);
  //else reset the counter to 0 which resets thr servo to 0 degrees
  else
   counter = 0;
}
