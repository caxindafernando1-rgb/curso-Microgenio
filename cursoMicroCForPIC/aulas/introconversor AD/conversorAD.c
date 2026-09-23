



void main() {
      ADCON0 = 0b00000000;
      ADCON1 = 0b01001110;
      
      TRISC.f0 = 1;
      TRISC = 0;
      TRISD = 0;
      
      PORTC = 0;
      PORTD = 0;
      
      for(;;){
              ADON_bit = 1; //liga o conversor
              delay_us(20);  //espera 2 segundos
              GO_NOT_DONE_bit = 1; //inicia conversão
              while( GO_NOT_DONE_bit == 1);//enquanto a conversão decorre...
              PORTC = ADRESH;//RECEBE A PARTE ALTA
              PORTD = ADRESL;//RECEBE A PARTE BAIXA
              ADON_bit = 0;// desliga o conversor
              delay_us(20); // espera 2 segundos
              
      }
}