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
      Lcd_Out(1, 1, "AN0: ");
      Lcd_Out(2, 1, "AN0: ");

      for(;;){
         unsigned valConvert = 0;
         char txt[6];
         valConvert = ADC_Read(0);//o valConvert(recebe a inicialização do sinal do canal convertido; ADC_Read(0)(converte o sinal do canal 0)
         WordToStr(valConvert, txt);
         Lcd_Out(1, 5, txt);

         valConvert = ADC_Read(1);//o valConvert(recebe a inicialização do sinal do canal convertido; ADC_Read(0)(converte o sinal do canal 0)
         WordToStr(valConvert, txt);
         Lcd_Out(2, 5, txt);
      }
}