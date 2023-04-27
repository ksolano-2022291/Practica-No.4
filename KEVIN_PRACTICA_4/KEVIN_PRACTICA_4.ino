/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:  EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: sensor ultrasonico
   alumno:Kevin Audiel Solano Torres
   Fecha: 26 de abril
*/
#define LED 10
#define SEGMENTOA 3
#define SEGMENTOB 4
#define SEGMENTOC 5
#define SEGMENTOD 6
#define SEGMENTOE 7
#define SEGMENTOF 8
#define SEGMENTOG 9
int conta=0;
int sumador;
const int trigPin = 11;
const int echoPin = 12;

// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
  pinMode(LED,OUTPUT);
  pinMode(SEGMENTOA,OUTPUT);
  pinMode(SEGMENTOB,OUTPUT);
  pinMode(SEGMENTOC,OUTPUT);
  pinMode(SEGMENTOD,OUTPUT);
  pinMode(SEGMENTOE,OUTPUT);
  pinMode(SEGMENTOF,OUTPUT);
  pinMode(SEGMENTOG,OUTPUT);
  
 
  
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance
  distance= duration*0.034/2;

  // Prints the distance on the Serial Monitor
  Serial.print(String(distance));
  Serial.println(" cm");

  delay(400);
  
  
    if(distance>=6 && distance <=10) 
  {
    digitalWrite(LED, HIGH);
    conta++;
     Serial.println("contador");
     delay(1000);
    } 
  else   
  {
    digitalWrite(LED, LOW);
    }
  
  switch(conta){
    
    case(0):{
      digitalWrite(SEGMENTOA,HIGH);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,HIGH);
       digitalWrite(SEGMENTOE,HIGH);
       digitalWrite(SEGMENTOF,HIGH);
       digitalWrite(SEGMENTOG,LOW);
       if(conta==0){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
  
     case(1):{
      digitalWrite(SEGMENTOA,LOW);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,LOW);
       digitalWrite(SEGMENTOE,LOW);
       digitalWrite(SEGMENTOF,LOW);
       digitalWrite(SEGMENTOG,LOW);
       if(conta==1){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    
     case(2):{
      digitalWrite(SEGMENTOA,HIGH);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,LOW);
       digitalWrite(SEGMENTOD,HIGH);
       digitalWrite(SEGMENTOE,HIGH);
       digitalWrite(SEGMENTOF,LOW);
       digitalWrite(SEGMENTOG,HIGH);
       if(conta==2){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    
     case(3):{
      digitalWrite(SEGMENTOA,HIGH);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,HIGH);
       digitalWrite(SEGMENTOE,LOW);
       digitalWrite(SEGMENTOF,LOW);
       digitalWrite(SEGMENTOG,HIGH);
       if(conta==3){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    case(4):{
      digitalWrite(SEGMENTOA,LOW);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,LOW);
       digitalWrite(SEGMENTOE,LOW);
       digitalWrite(SEGMENTOF,HIGH);
       digitalWrite(SEGMENTOG,HIGH);
       if(conta==4){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    
    case(5):{
      digitalWrite(SEGMENTOA,HIGH);
       digitalWrite(SEGMENTOB,LOW);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,HIGH);
       digitalWrite(SEGMENTOE,LOW);
       digitalWrite(SEGMENTOF,HIGH);
       digitalWrite(SEGMENTOG,HIGH);
       if(conta==5){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    
    case(6):{
      digitalWrite(SEGMENTOA,LOW);
       digitalWrite(SEGMENTOB,LOW);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,HIGH);
       digitalWrite(SEGMENTOE,HIGH);
       digitalWrite(SEGMENTOF,HIGH);
       digitalWrite(SEGMENTOG,HIGH);
       if(conta==6){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    
    case(7):{
      digitalWrite(SEGMENTOA,HIGH);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,LOW);
       digitalWrite(SEGMENTOE,LOW);
       digitalWrite(SEGMENTOF,LOW);
       digitalWrite(SEGMENTOG,LOW);
       if(conta==7){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    
    case(8):{
      digitalWrite(SEGMENTOA,HIGH);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,HIGH);
       digitalWrite(SEGMENTOE,HIGH);
       digitalWrite(SEGMENTOF,HIGH);
       digitalWrite(SEGMENTOG,HIGH);
       if(conta==8){
        digitalWrite(LED,HIGH);
       }
      break;     
    }
    
    case(9):{
      digitalWrite(SEGMENTOA,HIGH);
       digitalWrite(SEGMENTOB,HIGH);
       digitalWrite(SEGMENTOC,HIGH);
       digitalWrite(SEGMENTOD,LOW);
       digitalWrite(SEGMENTOE,LOW);
       digitalWrite(SEGMENTOF,HIGH);
       digitalWrite(SEGMENTOG,HIGH);
       if(conta==9){
        digitalWrite(LED,LOW);
       }
      break;     
    }

    
    
    
    
  }
}

  
