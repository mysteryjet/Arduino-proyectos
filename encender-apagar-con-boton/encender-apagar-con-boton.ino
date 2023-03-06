#include <GFButton.h>   // Añadir biblioteca


// Crear variables para el manejo de los pines
int pinLED = 9;
int pinBoton = 2;

// Crear objeto para el manejo del pin de boton de entrada
GFButton boton1(pinBoton);


void setup() {
  // Configuración de los pines de entrada y salida
  pinMode(pinLED,OUTPUT); // Salida digital para el LED
}

void loop() {
  // Leer el estado del botón y encender o apagar el LED
  if (not boton1.isPressed()) { // Revisar si es presionado, la respuesta es invertida ya que la librería fue creada con pull-up
    digitalWrite(pinLED,HIGH);
  }
  else {
    digitalWrite(pinLED,LOW);
  }
}