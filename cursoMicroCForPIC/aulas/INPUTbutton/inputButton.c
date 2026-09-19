

#define   bot1 BUTTON(&PORTB, 0, 50, 1)
#define bot2 BUTTON(&PORTB, 1, 50, 0)
#define led1 PORTD.F6
#define led2 PORTD.F7

void main() {

     bit flegB1, flegB2;
     TRISB.F0 = 1;
     TRISB.F1 = 1;
     
     TRISD.F6 = 0;
     TRISD.F7 = 0;
     led1 = 0x00;
     led2 = 0x00;
     
     
     for(;;){
       if(bot1 && (flegB1 == 0)){
               //se colocar aqui a parte da inversão, o led acende quando o botão for pressionado
              flegB1 = 1;
       }
       if(!bot1 && (flegB1 == 1)){
             led1 = ~led1;//invesão do estado
             flegB1 = 0;
       }
       
       if(bot2 && (flegB2 == 0)){
                //se colocar aqui a parte da invesão do estado, o led acende quando o botão for pressionado
             flegB2 = 1;
       }
       if(!bot2 && (flegB2 == 1)){
             led2 = ~led2;  //invesão do estado
             flegB2 = 0;
       }
       
     }
}