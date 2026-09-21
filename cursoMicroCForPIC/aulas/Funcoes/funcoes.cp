#line 1 "C:/Users/Fernandes Caxinda/Documents/GitHub/curso-Microgenio/cursoMicroCForPIC/aulas/Funcoes/funcoes.c"

sbit LCD_RS at RD2_bit;
sbit LCD_EN at RD3_bit;
sbit LCD_D4 at RD4_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D7 at RD7_bit;

sbit LCD_RS_Direction at TRISD2_bit;
sbit LCD_EN_Direction at TRISD3_bit;
sbit LCD_D4_Direction at TRISD4_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D7_Direction at TRISD7_bit;



bit flagB1;


void inverter(){
  PORTB.f7  = ~ PORTB.f7 ;
}

void escrever(){
 Lcd_Cmd(_LCD_CLEAR);
 lcd_out(1, 3, " PIC16F877A ");
 Lcd_Out(2, 1, "B1: ");
}

void main() {
 unsigned char cont = 0;
 char txt[4];


 bit b1;
  PORTB.f7  = 1;

 TRISB.f0 = 1;
 TRISB7_bit = 0;


 Lcd_Init();
 Lcd_Cmd(_LCD_CURSOR_OFF);
 escrever();

 for(;;){
 b1 = Button(&PORTB, 0, 20, 0);

 if(b1 && flagB1 == 0){
 flagB1 = 1;
 }
 if(!b1 && flagB1 == 1){
 inverter();
 flagB1 = 0;
 cont += 1;
 }
 ByteToStr(cont, txt);
 Lcd_Out(2, 5, txt );

 }
}
