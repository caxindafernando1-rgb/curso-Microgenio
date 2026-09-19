#line 1 "C:/Users/Fernandes Caxinda/Documents/GitHub/curso-Microgenio/cursoMicroCForPIC/aulas/INPUT BOTTON 2/TURN_ON_LED_8x_WITH_1_BUTTON.c"




void main() {
 bit flegB0;

 unsigned char contarPULL = 0;
 TRISB.f0 = 1;


 TRISD = 0;
 PORTD = 0x00;

 for(;;){

 if( BUTTON(&PORTB, 0, 20, 0)  && flegB0 == 0){
 flegB0 = 1;
 }
 if(! BUTTON(&PORTB, 0, 20, 0)  && flegB0 == 1){
 flegB0 = 0;
 contarPULL++;
 }

 switch(contarPULL){
 case 1:
  PORTD  = 0b00000001;
 break;
 case(2):
  PORTD  = 0b00000011;
 break;
 case(3):
  PORTD  = 0b00000111;
 break;
 case(4):
  PORTD  = 0b00001111;
 break;
 case(5):
  PORTD  = 0b00011111;
 break;
 case(6):
  PORTD  = 0b00111111;
 break;
 case(7):
  PORTD  = 0b01111111;
 break;
 case(8):
  PORTD  = 0b111111111;
 break;
 default:
  PORTD  = 0b00000000;
 contarPULL = 0;

 break;



 }


 }
}
