volatile byte LED1 = 0;
volatile byte LED2 = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);

  pinMode(2, INPUT);
  pinMode(3, INPUT);
  
  
  PCICR |=0b00000111; //enables the interrupt for the ports
  PCMSK2 |= 0b10001100;// enables interrupts on more than one pin.
}

void loop()
{
 
  digitalWrite(13,LED1);
  digitalWrite(12,LED2);
  Serial.println("in loop");
  delay(500);
// Block of code.
}

ISR(PCINT2_vect){
  LED1 = PIND & B00000100;
  LED2 = PIND & B00001000;
  Serial.println("interrupted");
}