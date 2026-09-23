// LCD module connections
sbit LCD_RS at RB0_bit;
sbit LCD_EN at RB1_bit;
sbit LCD_D4 at RB2_bit;
sbit LCD_D5 at RB3_bit;
sbit LCD_D6 at RB4_bit;
sbit LCD_D7 at RB5_bit;

sbit LCD_RS_Direction at TRISB0_bit;
sbit LCD_EN_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB4_bit;
sbit LCD_D7_Direction at TRISB5_bit;


void main() {


      ADCON0 = 0b00000000;
      ADCON1 = 0b11000100;

      TRISA0_bit = 1;
      TRISA1_bit = 1;
      TRISC = 0;
      TRISD = 0;

      PORTD = 0;
      PORTC = 0;

      Lcd_Init();
      Lcd_Cmd(_LCD_CURSOR_OFF);
      Lcd_Out(1, 1, "AN1: ");
      Lcd_Out(2, 1, "AN0: ");

      for(;;){
      
         unsigned valConvert = 0;
         char txt[6];

         ADCON0.CHS2 = 0;
         ADCON0.CHS1 = 0;
         ADCON0.CHS0 = 0;
         ADON_bit = 1;
         delay_us(20);
         GO_NOT_DONE_bit = 1;
         while(GO_NOT_DONE == 1);
         valConvert = (ADRESH<<8) + ADRESL;//afastar 8 posições
         ADON_bit = 0;
         delay_us(20);
         WordToStr(valConvert, txt);
         Lcd_Out(1, 5, txt);


         ADCON0.CHS2 = 0;
         ADCON0.CHS1 = 0;
         ADCON0.CHS0 = 1;
         ADON_bit = 1;
         delay_us(20);
         GO_NOT_DONE_bit = 1;
         while(GO_NOT_DONE == 1);
         valConvert = (ADRESH<<8) + ADRESL;//afastar 8 posições
         ADON_bit = 0;
         delay_us(20);
         WordToStr(valConvert, txt);
         Lcd_Out(2, 5, txt);
      }
}