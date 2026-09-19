#line 1 "C:/Users/Fernandes Caxinda/Documents/GitHub/curso-Microgenio/cursoMicroCForPIC/aulas/INPUTbutton/inputButton.c"







void main() {

 bit flegB1, flegB2;
 TRISB.F0 = 1;
 TRISB.F1 = 1;

 TRISD.F6 = 0;
 TRISD.F7 = 0;
  PORTD.F6  = 0x00;
  PORTD.F7  = 0x00;


 for(;;){
 if( BUTTON(&PORTB, 0, 50, 1)  && (flegB1 == 0)){

 flegB1 = 1;
 }
 if(! BUTTON(&PORTB, 0, 50, 1)  && (flegB1 == 1)){
  PORTD.F6  = ~ PORTD.F6 ;
 flegB1 = 0;
 }

 if( BUTTON(&PORTB, 1, 50, 0)  && (flegB2 == 0)){

 flegB2 = 1;
 }
 if(! BUTTON(&PORTB, 1, 50, 0)  && (flegB2 == 1)){
  PORTD.F7  = ~ PORTD.F7 ;
 flegB2 = 0;
 }

 }
}
