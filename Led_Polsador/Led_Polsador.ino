/****************************************************************
**                                                             **
**                           TÍTOL:                            **
**                                                             **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 23/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************


//************************* SETUP *******************************

void setup() {               // configura el final de salida
  pinMode(2, OUTPUT); /*Piu 2 Sortida Led*/
  pinMode(4, INPUT); /*Piu 4 Entrada Interruptor*/
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa
 if(digitalRead(4)){
  digitalWrite(2, HIGH); /*Piu 2 nivell alt*/
 }else{
  digitalWrite(2, LOW); /*Piu 2 nivell baix (LED s'apaga)*/
 }
}

//************************* FUNCIONS ****************************
