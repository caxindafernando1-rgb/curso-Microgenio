#line 1 "C:/Users/Fernandes Caxinda/Documents/GitHub/curso-Microgenio/cursoMicroCForPIC/aulas/conversor AD/conversorAD.c"




void main() {
 ADCON0 = 0b00000000;
 ADCON1 = 0b01001110;

 TRISC.f0 = 1;
 TRISC = 0;
 TRISD = 0;

 PORTC = 0;
 PORTD = 0;

 for(;;){
 ADON_bit = 1;
 delay_us(20);
 GO_NOT_DONE_bit = 1;
 while( GO_NOT_DONE_bit == 1);
 PORTC = ADRESH;
 PORTD = ADRESL;
 ADON_bit = 0;
 delay_us(20);

 }
}
