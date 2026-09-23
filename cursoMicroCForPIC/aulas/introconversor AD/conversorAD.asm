
_main:

;conversorAD.c,5 :: 		void main() {
;conversorAD.c,6 :: 		ADCON0 = 0b00000000;
	CLRF       ADCON0+0
;conversorAD.c,7 :: 		ADCON1 = 0b01001110;
	MOVLW      78
	MOVWF      ADCON1+0
;conversorAD.c,9 :: 		TRISC.f0 = 1;
	BSF        TRISC+0, 0
;conversorAD.c,10 :: 		TRISC = 0;
	CLRF       TRISC+0
;conversorAD.c,11 :: 		TRISD = 0;
	CLRF       TRISD+0
;conversorAD.c,13 :: 		PORTC = 0;
	CLRF       PORTC+0
;conversorAD.c,14 :: 		PORTD = 0;
	CLRF       PORTD+0
;conversorAD.c,16 :: 		for(;;){
L_main0:
;conversorAD.c,17 :: 		ADON_bit = 1; //liga o conversor
	BSF        ADON_bit+0, BitPos(ADON_bit+0)
;conversorAD.c,18 :: 		delay_us(20);  //espera 2 segundos
	MOVLW      13
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
;conversorAD.c,19 :: 		GO_NOT_DONE_bit = 1; //inicia conversão
	BSF        GO_NOT_DONE_bit+0, BitPos(GO_NOT_DONE_bit+0)
;conversorAD.c,20 :: 		while( GO_NOT_DONE_bit == 1);//enquanto a conversão decorre...
L_main4:
	BTFSS      GO_NOT_DONE_bit+0, BitPos(GO_NOT_DONE_bit+0)
	GOTO       L_main5
	GOTO       L_main4
L_main5:
;conversorAD.c,21 :: 		PORTC = ADRESH;//RECEBE A PARTE ALTA
	MOVF       ADRESH+0, 0
	MOVWF      PORTC+0
;conversorAD.c,22 :: 		PORTD = ADRESL;//RECEBE A PARTE BAIXA
	MOVF       ADRESL+0, 0
	MOVWF      PORTD+0
;conversorAD.c,23 :: 		ADON_bit = 0;// desliga o conversor
	BCF        ADON_bit+0, BitPos(ADON_bit+0)
;conversorAD.c,24 :: 		delay_us(20); // espera 2 segundos
	MOVLW      13
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
;conversorAD.c,26 :: 		}
	GOTO       L_main0
;conversorAD.c,27 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
