// C++ code
//

// declaração de variaveis
int pinBuzzer =8;
int PinSensor =7;
int pinLed =9;
int valorSensor =0;//iniciar desligado
int frequencia =250; //frequencia da sirene quando ligada
int tempobuzzerligado =5000; //"milisegundos"
int atrasododisparo =10000; // tempo que o alarme ativa apos o disparo

void setup()
{
  Serial.begin(9600); //iniciando o serial monitor
  
  //definindo pinos de entrada e saida
  
  pinMode(pinBuzzer,OUTPUT);
  pinMode(PinSensor,INPUT);
  pinMode(pinLed,OUTPUT);
  int atrasododisparo =10000;
  
}

void loop()
{
  //Lendo o valor do sensor PIR. Este sensor pode assumir 2 valores
  // 1 quando detecta algum movimento e 0 quando não detecta
  
  delay(atrasododisparo); //ativa atraso de ativação
  
  valorSensor = digitalread(pinSensor); //detecta high ou low
  
  Serial.print("valor do sensor:");
  Serial.println(valorSensor);
  
  //verificando se ocorrou detecção de movimentos
  if(valorSensor ==1){
    ligarAlarme();
  }else{
    deligarAlarme();
  }
  
  atrasodisparo =0; //cancelando atraso de ativação
  
  //ligar o LED
  digitalwrite(pinLed,HIGH);
  delay(1000);
  digitalwrite(pinLed,LOW);
  delay(1000);
  
}
void ligarAlarme(){

  //ligando o led
  digitalWrite(pinLed,HIGH);
  
  //ligando o buzzer com uma frequencia de 1500 hz
  tone(pinBuzzer,frequencia);
  
  delay(tempobuzzerligado);
  
  desligarAlarme();
}

void desligarAlarme(){

  //desligando o Led
  digitalWrite(pinLed,LOW);
  
  //desligando o Buzzer
  noTone(pinBuzzer);
}