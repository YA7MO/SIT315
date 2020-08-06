int LED1 = 13;
int LED2 = 12;
int PIR1 = 2;
int PIR2 = 3;

int ledState = LOW;

void setup()
{
  Serial.begin(9600);
  
  attachInterrupt(digitalPinToInterrupt(PIR1), blue, FALLING);
  attachInterrupt(digitalPinToInterrupt(PIR2), red, RISING);
  
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(PIR1,INPUT);
  pinMode(PIR2,INPUT);
  
}

void loop()
{
 // block of code
  
}

void blue(){
  Serial.println("PIR1");
  ledState = !ledState;
  digitalWrite(LED1,ledState);
}

void red(){
  Serial.println("PIR2");
  ledState = !ledState;
  digitalWrite(LED2,ledState);
}
