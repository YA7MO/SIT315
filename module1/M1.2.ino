int  LED = 5;
int btn = 2;

int ledState = LOW;

void setup()
{
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(btn), toggler, FALLING);
  pinMode(LED,OUTPUT);
  pinMode(btn,INPUT);
  
}

void loop()
{
  
// block of code
  delay(5000);
}

void toggler(){
  Serial.println("clicked");
  ledState = !ledState;
  digitalWrite(LED,ledState);
}