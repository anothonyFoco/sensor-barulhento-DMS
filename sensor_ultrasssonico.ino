#define trigPin 3
#define echoPin 2
#define buzzerPin 4
int cm;

void setup (){
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
  
  Serial.begin(9600);
  
}

 void loop () {
  lerDistancia();

 if(cm < 20)
 {digitalWrite(buzzerPin,HIGH);
delay(100);
digitalWrite(buzzerPin,LOW);
delay(100);
 }else{
  digitalWrite(buzzerPin,LOW);
 }

  Serial.println(cm);

  
 }
void lerDistancia(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  int distancia = pulseIn(echoPin,HIGH);
  
  cm = distancia / 58 ;
}
