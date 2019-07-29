/***************************************************Capitulo 1 -  Blinks **********************************************************
*                                                                                                                                 *
*     En este primer capitulo aprenderemos a hacer el Hola mundo de la programacion de Arduino que es encender y apagar           *
*  un led. Pero en este caso utilizaremos 2 leds                                                                                  *
*                                                                                                                                 *
*  Para lograr esto necesitaremos:                                                                                                *
*                                                                                                                                 *
*  -Placa arduino Uno                                                                                                             *
*  -2 LED                                                                                                                         *
*  -2 Resistencias de 510 ohm (Si no tienen de 510 pueden variar el valor entre 100 ohm a 2.2 K omh)                              *
*  -Protoboard                                                                                                                    *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                                                 *
*                                                                                                              Facebook: ESociety *
*                                                                                                              GitHub: eSociety97 *
*                                                                                                                                 *
*                                                         #NuncaDejenDeCrear                                                      *
***********************************************************************************************************************************/   

int led = 13; // Declaramos nuestra variable que usaremos para nuestro primer led
int led2 = 12;// Declaramos nuestra variable que usaremos para nuestro segundo led

void setup(){
  pinMode(led,OUTPUT); //Declaramos como pin de salida la variable led
  pinMode(led2,OUTPUT); //Declaramos como pin de salida la variable led2
  }
void loop(){
  digitalWrite(led,HIGH); //Escribimos un valor alto en la salida digital led 
  digitalWrite(led2,HIGH); //Escribimos un valor alto en la salida digital led    
  delay(400);  //Damos una pausa por 400 milisegundos
  digitalWrite(led,LOW); //Escribimos un valor bajo en la salida digital led
  digitalWrite(led2,LOW); //Escribimos un valor bajo en la salida digital led
  delay(400); //Damos una pausa por 400 milisegundos 
}  
