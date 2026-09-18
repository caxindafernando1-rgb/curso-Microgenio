
void main() {
     TRISD = 0X00;// saidas
     PORTD = 0xff;// metade 1 metada em 0

     for(;;) // loop infinito;
     {
      PORTD = 0b00000000;
      delay_ms(100);
      PORTD = 0b00000001;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b00000010;
      delay_ms(100);
       PORTD = 0b00000000;
      PORTD = 0b00000100;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b00001000;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b00010000;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b00100000;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b01000000;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b10000000;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b01010010;
      delay_ms(100);
      PORTD = 0b10101101;
      delay_ms(100);
      PORTD = 0b00000001;
      delay_ms(50);
      PORTD = 0b1000000;
      delay_ms(50);
      PORTD = 0b00000001;
      delay_ms(50);
      PORTD = 0b1000000;
      delay_ms(50);
      PORTD = 0b00000000;
      PORTD = 0b01010010;
      delay_ms(100);
      PORTD = 0b10101101;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b01010010;
      delay_ms(100);
      PORTD = 0b10101101;
      delay_ms(100);
      PORTD = 0b00000000;
      PORTD = 0b01010010;
      delay_ms(100);
      PORTD = 0b10101101;
      delay_ms(100);
     }
}
