// Lcd pinout settings
sbit LCD_RS at RD2_bit;
sbit LCD_EN at RD3_bit;
sbit LCD_D7 at RD7_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D4 at RD4_bit;

// Pin direction
sbit LCD_RS_Direction at TRISD2_bit;
sbit LCD_EN_Direction at TRISD3_bit;
sbit LCD_D7_Direction at TRISD7_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D4_Direction at TRISD4_bit;


#define led1 PORTC.F0

#define butt1 BUTTON(&PORTB, 0, 20, 0)

bit flagB1;

void main() {
     char txt1[] = {"ESTADO DA LED: "};
     char txt2[] = {"LED ON  "};
       char txt3[] = {"LED OFF "};

    unsigned short int contar = 0;
    bit b1;

     TRISB0_bit = 1;
     TRISC.F0 = 0 ;
     led1 = 0;

         Lcd_Init();
         Lcd_Out(1, 2, "inicializando...");
         delay_ms(3000);
         Lcd_Cmd(_LCD_CLEAR);
         for(;;){
             b1 = butt1;

           if(b1 && (flagB1 == 0) ){
              flagB1 = 1;
           }
           if(!b1 && flagB1 == 1){
               if(contar < 2) contar++;

           flagB1 = 0;
           }
           
           switch(contar){
           case 1:
                led1 = 1;
                Lcd_Out(1, 3, txt1);
                Lcd_Out(2, 5, txt2);
                break;
           case 2:
                led1 = 0;
                Lcd_Cmd(_LCD_CLEAR);
                 Lcd_Out(1, 3, txt1);
                Lcd_Out(2, 5,  txt3);
                contar = 0;
                break;
           }

         }
}