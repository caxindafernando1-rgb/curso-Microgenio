
_main:

;inputButton.c,8 :: 		void main() {
;inputButton.c,11 :: 		TRISB.F0 = 1;
	BSF        TRISB+0, 0
;inputButton.c,12 :: 		TRISB.F1 = 1;
	BSF        TRISB+0, 1
;inputButton.c,14 :: 		TRISD.F6 = 0;
	BCF        TRISD+0, 6
;inputButton.c,15 :: 		TRISD.F7 = 0;
	BCF        TRISD+0, 7
;inputButton.c,16 :: 		led1 = 0x00;
	BCF        PORTD+0, 6
;inputButton.c,17 :: 		led2 = 0x00;
	BCF        PORTD+0, 7
;inputButton.c,20 :: 		for(;;){
L_main0:
;inputButton.c,21 :: 		if(bot1 && (flegB1 == 0)){
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
	BTFSC      main_flegB1_L0+0, BitPos(main_flegB1_L0+0)
	GOTO       L_main5
L__main18:
;inputButton.c,23 :: 		flegB1 = 1;
	BSF        main_flegB1_L0+0, BitPos(main_flegB1_L0+0)
;inputButton.c,24 :: 		}
L_main5:
;inputButton.c,25 :: 		if(!bot1 && (flegB1 == 1)){
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      50
	MOVWF      FARG_Button_time_ms+0
	MOVLW      1
	MOVWF      FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L_main8
	BTFSS      main_flegB1_L0+0, BitPos(main_flegB1_L0+0)
	GOTO       L_main8
L__main17:
;inputButton.c,26 :: 		led1 = ~led1;//invesão do estado
	MOVLW      64
	XORWF      PORTD+0, 1
;inputButton.c,27 :: 		flegB1 = 0;
	BCF        main_flegB1_L0+0, BitPos(main_flegB1_L0+0)
;inputButton.c,28 :: 		}
L_main8:
;inputButton.c,30 :: 		if(bot2 && (flegB2 == 0)){
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
	GOTO       L_main11
	BTFSC      main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
	GOTO       L_main11
L__main16:
;inputButton.c,32 :: 		flegB2 = 1;
	BSF        main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
;inputButton.c,33 :: 		}
L_main11:
;inputButton.c,34 :: 		if(!bot2 && (flegB2 == 1)){
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      1
	MOVWF      FARG_Button_pin+0
	MOVLW      50
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L_main14
	BTFSS      main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
	GOTO       L_main14
L__main15:
;inputButton.c,35 :: 		led2 = ~led2;  //invesão do estado
	MOVLW      128
	XORWF      PORTD+0, 1
;inputButton.c,36 :: 		flegB2 = 0;
	BCF        main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
;inputButton.c,37 :: 		}
L_main14:
;inputButton.c,39 :: 		}
	GOTO       L_main0
;inputButton.c,40 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
