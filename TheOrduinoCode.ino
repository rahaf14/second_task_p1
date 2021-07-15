// https://www.tinkercad.com/things/5KW8JeYQMtn-daring-esboo-jofo/editel
ISR(PCINT0_vect){
  PORTD ^= 0b00110000;
}
ISR(PCINT2_vect){
  PORTD ^= 0b00001100;
}
int main(void)
{
  DDRD = 0b00111100;
  PORTD = 0b00011000;
  PCICR = 0b00000101;
  PCMSK2 = 0b10000000;
  PCMSK0 = 0b00000001;
  sei();
  
  while(1){
  }
}
