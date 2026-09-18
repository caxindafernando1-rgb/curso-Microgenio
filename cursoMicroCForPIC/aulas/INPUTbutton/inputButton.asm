
_main:

;inputButton.c,4 :: 		void main() {
;inputButton.c,7 :: 		TRISB.F0 = 1;
	BSF        TRISB+0, 0
;inputButton.c,8 :: 		TRISB.F1 = 1;
	BSF        TRISB+0, 1
;inputButton.c,10 :: 		TRISD.F6 = 0;
	BCF        TRISD+0, 6
;inputButton.c,11 :: 		TRISD.F7 = 0;
	BCF        TRISD+0, 7
;inputButton.c,12 :: 		PORTD.F6 = 0x00;
	BCF        PORTD+0, 6
;inputButton.c,13 :: 		PORTD.F7= 0x00;
	BCF        PORTD+0, 7
;inputButton.c,15 :: 		for(;;){
L_main0:
;inputButton.c,16 :: 		if((BUTTON(&PORTB, 0, 50, 1)) && (estabilizadPortB0 == 0)){ // Bibilioteca para ler o botão se o botao(na porta b, no pino 0, depoi de 50 ms, tiver o valor 1)
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
	GOTO       L_main5
	BTFSC      main_estabilizadPortB0_L0+0, BitPos(main_estabilizadPortB0_L0+0)
	GOTO       L_main5
L__main18:
;inputButton.c,17 :: 		PORTD.F6 = ~PORTD.F6;
	MOVLW      64
	XORWF      PORTD+0, 1
;inputButton.c,18 :: 		estabilizadPortB0 = 1;
	BSF        main_estabilizadPortB0_L0+0, BitPos(main_estabilizadPortB0_L0+0)
;inputButton.c,20 :: 		}
L_main5:
;inputButton.c,22 :: 		if((BUTTON(&PORTB, 1, 50, 0))  && (estabilizadPortB1 == 0)){  // Bibilioteca para ler o botão se o botao(na porta b, no pino 0, depoi de 50 ms, tiver o valor 0)
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
	GOTO       L_main8
	BTFSC      main_estabilizadPortB1_L0+0, BitPos(main_estabilizadPortB1_L0+0)
	GOTO       L_main8
L__main17:
;inputButton.c,23 :: 		PORTD.F7 = ~PORTD.F7;
	MOVLW      128
	XORWF      PORTD+0, 1
;inputButton.c,24 :: 		estabilizadPortB1 = 1;
	BSF        main_estabilizadPortB1_L0+0, BitPos(main_estabilizadPortB1_L0+0)
;inputButton.c,25 :: 		}
L_main8:
;inputButton.c,27 :: 		if(!(BUTTON(&PORTB, 0, 50, 0))  && (estabilizadPortB0 == 1))
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      50
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L_main11
	BTFSS      main_estabilizadPortB0_L0+0, BitPos(main_estabilizadPortB0_L0+0)
	GOTO       L_main11
L__main16:
;inputButton.c,28 :: 		estabilizadPortB0 = 0;
	BCF        main_estabilizadPortB0_L0+0, BitPos(main_estabilizadPortB0_L0+0)
L_main11:
;inputButton.c,30 :: 		if(!(BUTTON(&PORTB, 1, 50, 1))  && (estabilizadPortB1 == 1))
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      1
	MOVWF      FARG_Button_pin+0
	MOVLW      50
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L_main14
	BTFSS      main_estabilizadPortB1_L0+0, BitPos(main_estabilizadPortB1_L0+0)
	GOTO       L_main14
L__main15:
;inputButton.c,31 :: 		estabilizadPortB1 = 0;
	BCF        main_estabilizadPortB1_L0+0, BitPos(main_estabilizadPortB1_L0+0)
L_main14:
;inputButton.c,32 :: 		}
	GOTO       L_main0
;inputButton.c,33 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
