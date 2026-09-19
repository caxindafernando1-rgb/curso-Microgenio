// Configuração dos pinos do LCD (Ajustado para o padrão RD4->D4, RD5->D5...)
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

void main() {


    Lcd_Init();
    for(;;){
        Lcd_Chr(1, 4, 'V');
        Lcd_Out(2, 3, "capa");
        delay_ms(1000);
        Lcd_Cmd(_LCD_CLEAR);
         Lcd_out( 1, 1, "ENG.");
        Lcd_out(2, 1, "_FERNANDO Caxinda_");
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        delay_ms(1000);
        Lcd_Cmd(_LCD_SHIFT_LEFT);
        delay_ms(500);
        Lcd_out( 1, 1, "ENG.");
        Lcd_out(2, 1, "_FERNANDO Caxinda_");
    }
    
    
}