// AQUI Associa o LED vermelho à porta digital 2 do Arduino
#define LED_VERMELHO 2
// AQUI Associa o LED amarelo à porta digital 3 do Arduino
#define LED_AMARELO 3
// AQUI Associa o LED verde à porta digital 4 do Arduino
#define LED_VERDE 4

// AQUI DEFINE O TEMPO EM SEGUNDOS 
#define UM_SEGUNDO 1000 // Define um segundo
#define MEIO_SEGUNDO 500 // Define meio segundo 
#define SETE_SEGUNDO 7000 // Usado para o LED vermelho ficar aceso por 7 segundos 
#define DOIS_SEGUNDO 2000 // Usado para o LED amarelo ficar aceso por 2 segundos 
#define SEIS_SEGUNDO 6000 // Uusado para o LED verde ficar aceso por 6 segundos  


void setup() {

// INICIA O MONITOR SERIAL 
  Serial.begin(9600);

// DEFINE AS PORTAS DIGITAIS DO ARDUINO SAIDA 2,3,4    
  pinMode(LED_VERMELHO,OUTPUT);
  pinMode(LED_AMARELO,OUTPUT);
  pinMode(LED_VERDE,OUTPUT);

}

void loop(){

// AQUI CHAMA A FUNÇÃO piscaLed

Serial.println("SEMÁFORO VERDE ACESO PORTA = " + String(LED_VERDE));
piscaLed(LED_VERDE,SEIS_SEGUNDO);

Serial.println("SEMÁFORO AMARELO ACESO PORTA = " + String(LED_AMARELO));
piscaLed(LED_AMARELO,DOIS_SEGUNDO);

Serial.println("SEMÁFORO VERMELHO ACESO PORTA = " + String(LED_VERMELHO));
piscaLed(LED_VERMELHO,SETE_SEGUNDO);

}

void piscaLed(int portaLed,int tempoAceso){

  digitalWrite(portaLed,HIGH); // aqui liga o led definido
  delay(tempoAceso); // aqui define quanto tempo o led vai ficar acesso 
  digitalWrite(portaLed,LOW); // aqui desliga o led definido   
  delay (MEIO_SEGUNDO); // pausa por meio segundo para o proximo led 
  }


  



  
