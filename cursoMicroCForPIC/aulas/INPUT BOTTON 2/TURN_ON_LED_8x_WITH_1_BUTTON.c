
#define bot1 BUTTON(&PORTB, 0, 20, 0)
#define bot2 BUTTON(&PORTB, 1, 20, 0)
#define leds PORTD

void main() {
     bit flegB0, flegB2;
     bit estado_botao1, estado_botao2;
     
    unsigned char contarPULL = 0;
     TRISB.f0 = 1;
     TRISB.f1 = 1;

     TRISD = 0;
     PORTD = 0x00;
     

     for(;;){
         estado_botao1 = bot1;
         estado_botao2 = bot2;

        if(estado_botao1 && flegB0 ==  0){
          flegB0 = 1;
        }
        if(!estado_botao1 && flegB0 == 1){
          flegB0 = 0;
          if(contarPULL < 8)
             contarPULL++;
        }
        
        if(estado_botao2 && flegB2 == 0){
          flegB2 = 1;
        }
        if(!estado_botao2 && flegB2 == 1){
          flegB2 = 0;
          if(contarPULL >0)
          contarPULL--;
        }
        
        switch(contarPULL){
          case 1:
           leds = 0b00000001;
          break;
           case(2):
           leds = 0b00000011;
          break;
           case(3):
           leds = 0b00000111;
          break;
           case(4):
           leds = 0b00001111;
          break;
           case(5):
           leds = 0b00011111;
          break;
           case(6):
           leds = 0b00111111;
          break;
           case(7):
           leds = 0b01111111;
          break;
           case(8):
           leds = 0b11111111;
          break;
        }
     }
}