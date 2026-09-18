
_main:

;DefOUTPUT.c,2 :: 		void main() {
;DefOUTPUT.c,3 :: 		TRISD = 0X00;// saidas
	CLRF       TRISD+0
;DefOUTPUT.c,4 :: 		PORTD = 0xff;// metade 1 metada em 0
	MOVLW      255
	MOVWF      PORTD+0
;DefOUTPUT.c,6 :: 		for(;;) // loop infinito;
L_main0:
;DefOUTPUT.c,8 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,9 :: 		delay_ms(100);
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
;DefOUTPUT.c,10 :: 		PORTD = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;DefOUTPUT.c,11 :: 		delay_ms(100);
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
;DefOUTPUT.c,12 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,13 :: 		PORTD = 0b00000010;
	MOVLW      2
	MOVWF      PORTD+0
;DefOUTPUT.c,14 :: 		delay_ms(100);
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
;DefOUTPUT.c,15 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,16 :: 		PORTD = 0b00000100;
	MOVLW      4
	MOVWF      PORTD+0
;DefOUTPUT.c,17 :: 		delay_ms(100);
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
;DefOUTPUT.c,18 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,19 :: 		PORTD = 0b00001000;
	MOVLW      8
	MOVWF      PORTD+0
;DefOUTPUT.c,20 :: 		delay_ms(100);
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
;DefOUTPUT.c,21 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,22 :: 		PORTD = 0b00010000;
	MOVLW      16
	MOVWF      PORTD+0
;DefOUTPUT.c,23 :: 		delay_ms(100);
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
;DefOUTPUT.c,24 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,25 :: 		PORTD = 0b00100000;
	MOVLW      32
	MOVWF      PORTD+0
;DefOUTPUT.c,26 :: 		delay_ms(100);
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
;DefOUTPUT.c,27 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,28 :: 		PORTD = 0b01000000;
	MOVLW      64
	MOVWF      PORTD+0
;DefOUTPUT.c,29 :: 		delay_ms(100);
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
;DefOUTPUT.c,30 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,31 :: 		PORTD = 0b10000000;
	MOVLW      128
	MOVWF      PORTD+0
;DefOUTPUT.c,32 :: 		delay_ms(100);
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
;DefOUTPUT.c,33 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,34 :: 		PORTD = 0b01010010;
	MOVLW      82
	MOVWF      PORTD+0
;DefOUTPUT.c,35 :: 		delay_ms(100);
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
;DefOUTPUT.c,36 :: 		PORTD = 0b10101101;
	MOVLW      173
	MOVWF      PORTD+0
;DefOUTPUT.c,37 :: 		delay_ms(100);
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
;DefOUTPUT.c,38 :: 		PORTD = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;DefOUTPUT.c,39 :: 		delay_ms(50);
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
;DefOUTPUT.c,40 :: 		PORTD = 0b1000000;
	MOVLW      64
	MOVWF      PORTD+0
;DefOUTPUT.c,41 :: 		delay_ms(50);
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
;DefOUTPUT.c,42 :: 		PORTD = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;DefOUTPUT.c,43 :: 		delay_ms(50);
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
;DefOUTPUT.c,44 :: 		PORTD = 0b1000000;
	MOVLW      64
	MOVWF      PORTD+0
;DefOUTPUT.c,45 :: 		delay_ms(50);
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
;DefOUTPUT.c,46 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,47 :: 		PORTD = 0b01010010;
	MOVLW      82
	MOVWF      PORTD+0
;DefOUTPUT.c,48 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main18:
	DECFSZ     R13+0, 1
	GOTO       L_main18
	DECFSZ     R12+0, 1
	GOTO       L_main18
	DECFSZ     R11+0, 1
	GOTO       L_main18
	NOP
;DefOUTPUT.c,49 :: 		PORTD = 0b10101101;
	MOVLW      173
	MOVWF      PORTD+0
;DefOUTPUT.c,50 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main19:
	DECFSZ     R13+0, 1
	GOTO       L_main19
	DECFSZ     R12+0, 1
	GOTO       L_main19
	DECFSZ     R11+0, 1
	GOTO       L_main19
	NOP
;DefOUTPUT.c,51 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,52 :: 		PORTD = 0b01010010;
	MOVLW      82
	MOVWF      PORTD+0
;DefOUTPUT.c,53 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main20:
	DECFSZ     R13+0, 1
	GOTO       L_main20
	DECFSZ     R12+0, 1
	GOTO       L_main20
	DECFSZ     R11+0, 1
	GOTO       L_main20
	NOP
;DefOUTPUT.c,54 :: 		PORTD = 0b10101101;
	MOVLW      173
	MOVWF      PORTD+0
;DefOUTPUT.c,55 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main21:
	DECFSZ     R13+0, 1
	GOTO       L_main21
	DECFSZ     R12+0, 1
	GOTO       L_main21
	DECFSZ     R11+0, 1
	GOTO       L_main21
	NOP
;DefOUTPUT.c,56 :: 		PORTD = 0b00000000;
	CLRF       PORTD+0
;DefOUTPUT.c,57 :: 		PORTD = 0b01010010;
	MOVLW      82
	MOVWF      PORTD+0
;DefOUTPUT.c,58 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main22:
	DECFSZ     R13+0, 1
	GOTO       L_main22
	DECFSZ     R12+0, 1
	GOTO       L_main22
	DECFSZ     R11+0, 1
	GOTO       L_main22
	NOP
;DefOUTPUT.c,59 :: 		PORTD = 0b10101101;
	MOVLW      173
	MOVWF      PORTD+0
;DefOUTPUT.c,60 :: 		delay_ms(100);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      4
	MOVWF      R12+0
	MOVLW      186
	MOVWF      R13+0
L_main23:
	DECFSZ     R13+0, 1
	GOTO       L_main23
	DECFSZ     R12+0, 1
	GOTO       L_main23
	DECFSZ     R11+0, 1
	GOTO       L_main23
	NOP
;DefOUTPUT.c,61 :: 		}
	GOTO       L_main0
;DefOUTPUT.c,62 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
