int PIR = 7;
int LED = 13; 
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIR,INPUT);
}

void loop()
{
  
  if(digitalRead(PIR) == HIGH){
    Serial.print("Motion Detected ");
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(LED,LOW);
    
  }
  
}