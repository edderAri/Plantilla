/****************************************************************
**                                                             **
**                           TÍTOL: Led                        **      
**                                                             **
**                                                             **
**  NOM: EDDER GARCIA PINO                     DATA 23/01/2017 **
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************


//************************* SETUP *******************************

void setup() {               // configura el final de salida
 pinMode(2, OUTPUT); /*Piu 2 Sortida*/
}

//************************** LOOP *******************************

void loop() {                // inicia el bucle del programa
 digitalWrite(2, HIGH); /*Piu 2 nivell alt*/
 delay(500); /*Delay atura 500 milisegonsa o mig segon*/
 digitalWrite(2, LOW); /*Piu 2 nivell baix (LED s'apaga)*/
 delay(500); /*Pausa mig segon*/
}

//************************* FUNCIONS ****************************
