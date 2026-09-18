
_main:

;DefinirSaidasEntras.c,2 :: 		void main() {
;DefinirSaidasEntras.c,3 :: 		TRISD = 0X00;// saidas
	CLRF       TRISD+0
;DefinirSaidasEntras.c,4 :: 		PORTD = 0xff;// metade 1 metada em 0
	MOVLW      255
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,6 :: 		for(;;) // loop infinito;
L_main0:
;DefinirSaidasEntras.c,8 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,9 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
;DefinirSaidasEntras.c,10 :: 		PORTD = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,11 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main4:
	DECFSZ     R13+0, 1
	GOTO       L_main4
	DECFSZ     R12+0, 1
	GOTO       L_main4
	DECFSZ     R11+0, 1
	GOTO       L_main4
	NOP
;DefinirSaidasEntras.c,12 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,13 :: 		PORTD = 0b00000010;
	MOVLW      2
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,14 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main5:
	DECFSZ     R13+0, 1
	GOTO       L_main5
	DECFSZ     R12+0, 1
	GOTO       L_main5
	DECFSZ     R11+0, 1
	GOTO       L_main5
	NOP
;DefinirSaidasEntras.c,15 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,16 :: 		PORTD = 0b00000100;
	MOVLW      4
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,17 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
	DECFSZ     R12+0, 1
	GOTO       L_main6
	DECFSZ     R11+0, 1
	GOTO       L_main6
	NOP
;DefinirSaidasEntras.c,18 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,19 :: 		PORTD = 0b00001000;
	MOVLW      8
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,20 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main7:
	DECFSZ     R13+0, 1
	GOTO       L_main7
	DECFSZ     R12+0, 1
	GOTO       L_main7
	DECFSZ     R11+0, 1
	GOTO       L_main7
	NOP
;DefinirSaidasEntras.c,21 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,22 :: 		PORTD = 0b00010000;
	MOVLW      16
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,23 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main8:
	DECFSZ     R13+0, 1
	GOTO       L_main8
	DECFSZ     R12+0, 1
	GOTO       L_main8
	DECFSZ     R11+0, 1
	GOTO       L_main8
	NOP
;DefinirSaidasEntras.c,24 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,25 :: 		PORTD = 0b00100000;
	MOVLW      32
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,26 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main9:
	DECFSZ     R13+0, 1
	GOTO       L_main9
	DECFSZ     R12+0, 1
	GOTO       L_main9
	DECFSZ     R11+0, 1
	GOTO       L_main9
	NOP
;DefinirSaidasEntras.c,27 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,28 :: 		PORTD = 0b01000000;
	MOVLW      64
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,29 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main10:
	DECFSZ     R13+0, 1
	GOTO       L_main10
	DECFSZ     R12+0, 1
	GOTO       L_main10
	DECFSZ     R11+0, 1
	GOTO       L_main10
	NOP
;DefinirSaidasEntras.c,30 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,31 :: 		PORTD = 0b10000000;
	MOVLW      128
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,32 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main11:
	DECFSZ     R13+0, 1
	GOTO       L_main11
	DECFSZ     R12+0, 1
	GOTO       L_main11
	DECFSZ     R11+0, 1
	GOTO       L_main11
	NOP
;DefinirSaidasEntras.c,33 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefinirSaidasEntras.c,34 :: 		PORTD = 0b01010010;
	MOVLW      82
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,35 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main12:
	DECFSZ     R13+0, 1
	GOTO       L_main12
	DECFSZ     R12+0, 1
	GOTO       L_main12
	DECFSZ     R11+0, 1
	GOTO       L_main12
	NOP
;DefinirSaidasEntras.c,36 :: 		PORTD = 0b10101101;
	MOVLW      173
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,37 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main13:
	DECFSZ     R13+0, 1
	GOTO       L_main13
	DECFSZ     R12+0, 1
	GOTO       L_main13
	DECFSZ     R11+0, 1
	GOTO       L_main13
	NOP
;DefinirSaidasEntras.c,38 :: 		PORTD = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,39 :: 		delay_ms(50);
	MOVLW      130
	MOVWF      R12+0
	MOVLW      221
	MOVWF      R13+0
L_main14:
	DECFSZ     R13+0, 1
	GOTO       L_main14
	DECFSZ     R12+0, 1
	GOTO       L_main14
	NOP
	NOP
;DefinirSaidasEntras.c,40 :: 		PORTD = 0b1000000;
	MOVLW      64
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,41 :: 		delay_ms(50);
	MOVLW      130
	MOVWF      R12+0
	MOVLW      221
	MOVWF      R13+0
L_main15:
	DECFSZ     R13+0, 1
	GOTO       L_main15
	DECFSZ     R12+0, 1
	GOTO       L_main15
	NOP
	NOP
;DefinirSaidasEntras.c,42 :: 		PORTD = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,43 :: 		delay_ms(50);
	MOVLW      130
	MOVWF      R12+0
	MOVLW      221
	MOVWF      R13+0
L_main16:
	DECFSZ     R13+0, 1
	GOTO       L_main16
	DECFSZ     R12+0, 1
	GOTO       L_main16
	NOP
	NOP
;DefinirSaidasEntras.c,44 :: 		PORTD = 0b1000000;
	MOVLW      64
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,45 :: 		delay_ms(50);
	MOVLW      130
	MOVWF      R12+0
	MOVLW      221
	MOVWF      R13+0
L_main17:
	DECFSZ     R13+0, 1
	GOTO       L_main17
	DECFSZ     R12+0, 1
	GOTO       L_main17
	NOP
	NOP
;DefinirSaidasEntras.c,49 :: 		}
	GOTO       L_main0
;DefinirSaidasEntras.c,50 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
