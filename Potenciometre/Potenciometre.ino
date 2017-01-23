/****************************************************************
**                                                             **
**                           TÍTOL: Potenciometre              **      
**                                                             **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 23/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int sensorValue = 0; /*Variable valor potenciometre*/

//************************* SETUP *******************************

void setup() {               // configura el final de salida
 pinMode(3, OUTPUT);
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa
 sensorValue = analogRead(A0);
 analogWrite(3, sensorValue/4);
}

//************************* FUNCIONS ****************************
