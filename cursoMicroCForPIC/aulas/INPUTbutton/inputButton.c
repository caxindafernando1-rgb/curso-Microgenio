


void main() {

     bit estabilizadPortB0, estabilizadPortB1;// com o tipo bit, a variavel inicializa em 0
     TRISB.F0 = 1;
     TRISB.F1 = 1;
     
     TRISD.F6 = 0;
     TRISD.F7 = 0;
     PORTD.F6 = 0x00;
     PORTD.F7= 0x00;
     
     for(;;){
          if((BUTTON(&PORTB, 0, 50, 1)) && (estabilizadPortB0 == 0)){ // Bibilioteca para ler o botão se o botao(na porta b, no pino 0, depoi de 50 ms, tiver o valor 1)
              PORTD.F6 = ~PORTD.F6;
              estabilizadPortB0 = 1;

          }

          if((BUTTON(&PORTB, 1, 50, 0))  && (estabilizadPortB1 == 0)){  // Bibilioteca para ler o botão se o botao(na porta b, no pino 0, depoi de 50 ms, tiver o valor 0)
              PORTD.F7 = ~PORTD.F7;
              estabilizadPortB1 = 1;
          }
          
         if(!(BUTTON(&PORTB, 0, 50, 0))  && (estabilizadPortB0 == 1))
            estabilizadPortB0 = 0;
            
         if(!(BUTTON(&PORTB, 1, 50, 1))  && (estabilizadPortB1 == 1))
            estabilizadPortB1 = 0;
      }
}