
_main:

;inputButton.c,4 :: 		void main() {
;inputButton.c,5 :: 		TRISB.F0 = 1;
	BSF        TRISB+0, 0
;inputButton.c,6 :: 		TRISB.F1 = 1;
	BSF        TRISB+0, 1
;inputButton.c,8 :: 		TRISD.F6 = 0;
	BCF        TRISD+0, 6
;inputButton.c,9 :: 		TRISD.F7 = 0;
	BCF        TRISD+0, 7
;inputButton.c,10 :: 		PORTD.F6 = 0x00;
	BCF        PORTD+0, 6
;inputButton.c,11 :: 		PORTD.F7= 0x00;
	BCF        PORTD+0, 7
;inputButton.c,13 :: 		for(;;){
L_main0:
;inputButton.c,14 :: 		if(BUTTON(&PORTB, 0, 50, 1)) // Bibilioteca para ler o botão se o botao(na porta b, no pino 0, depoi de 50 ms, tiver o valor 1)
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      50
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main3
;inputButton.c,15 :: 		PORTD.F6 = 1;
	BSF        PORTD+0, 6
	GOTO       L_main4
L_main3:
;inputButton.c,17 :: 		PORTD.F6 = 0;
	BCF        PORTD+0, 6
L_main4:
;inputButton.c,19 :: 		if(BUTTON(&PORTB, 1, 50, 0))  // Bibilioteca para ler o botão se o botao(na porta b, no pino 0, depoi de 50 ms, tiver o valor 0)
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      1
	MOVWF      FARG_Button_pin+0
	MOVLW      50
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main5
;inputButton.c,20 :: 		PORTD.F7 = 1;
	BSF        PORTD+0, 7
	GOTO       L_main6
L_main5:
;inputButton.c,22 :: 		PORTD.F7 = 0;
	BCF        PORTD+0, 7
L_main6:
;inputButton.c,23 :: 		}
	GOTO       L_main0
;inputButton.c,24 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
