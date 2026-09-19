
_main:

;TURN_ON_LED_8x_WITH_1_BUTTON.c,6 :: 		void main() {
;TURN_ON_LED_8x_WITH_1_BUTTON.c,10 :: 		unsigned char contarPULL = 0;
	CLRF       main_contarPULL_L0+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,11 :: 		TRISB.f0 = 1;
	BSF        TRISB+0, 0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,12 :: 		TRISB.f1 = 1;
	BSF        TRISB+0, 1
;TURN_ON_LED_8x_WITH_1_BUTTON.c,15 :: 		TRISD = 0;
	CLRF       TRISD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,16 :: 		PORTD = 0x00;
	CLRF       PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,19 :: 		for(;;){
L_main0:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,20 :: 		estado_botao1 = bot1;
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	BTFSC      R0+0, 0
	GOTO       L__main32
	BCF        main_estado_botao1_L0+0, BitPos(main_estado_botao1_L0+0)
	GOTO       L__main33
L__main32:
	BSF        main_estado_botao1_L0+0, BitPos(main_estado_botao1_L0+0)
L__main33:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,21 :: 		estado_botao2 = bot2;
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	MOVLW      1
	MOVWF      FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	BTFSC      R0+0, 0
	GOTO       L__main34
	BCF        main_estado_botao2_L0+0, BitPos(main_estado_botao2_L0+0)
	GOTO       L__main35
L__main34:
	BSF        main_estado_botao2_L0+0, BitPos(main_estado_botao2_L0+0)
L__main35:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,23 :: 		if(estado_botao1 && flegB0 ==  0){
	BTFSS      main_estado_botao1_L0+0, BitPos(main_estado_botao1_L0+0)
	GOTO       L_main5
	BTFSC      main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
	GOTO       L_main5
L__main30:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,24 :: 		flegB0 = 1;
	BSF        main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
;TURN_ON_LED_8x_WITH_1_BUTTON.c,25 :: 		}
L_main5:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,26 :: 		if(!estado_botao1 && flegB0 == 1){
	BTFSC      main_estado_botao1_L0+0, BitPos(main_estado_botao1_L0+0)
	GOTO       L_main8
	BTFSS      main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
	GOTO       L_main8
L__main29:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,27 :: 		flegB0 = 0;
	BCF        main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
;TURN_ON_LED_8x_WITH_1_BUTTON.c,28 :: 		if(contarPULL < 8)
	MOVLW      8
	SUBWF      main_contarPULL_L0+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main9
;TURN_ON_LED_8x_WITH_1_BUTTON.c,29 :: 		contarPULL++;
	INCF       main_contarPULL_L0+0, 1
L_main9:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,30 :: 		}
L_main8:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,32 :: 		if(estado_botao2 && flegB2 == 0){
	BTFSS      main_estado_botao2_L0+0, BitPos(main_estado_botao2_L0+0)
	GOTO       L_main12
	BTFSC      main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
	GOTO       L_main12
L__main28:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,33 :: 		flegB2 = 1;
	BSF        main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
;TURN_ON_LED_8x_WITH_1_BUTTON.c,34 :: 		}
L_main12:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,35 :: 		if(!estado_botao2 && flegB2 == 1){
	BTFSC      main_estado_botao2_L0+0, BitPos(main_estado_botao2_L0+0)
	GOTO       L_main15
	BTFSS      main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
	GOTO       L_main15
L__main27:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,36 :: 		flegB2 = 0;
	BCF        main_flegB2_L0+0, BitPos(main_flegB2_L0+0)
;TURN_ON_LED_8x_WITH_1_BUTTON.c,37 :: 		if(contarPULL >0)
	MOVF       main_contarPULL_L0+0, 0
	SUBLW      0
	BTFSC      STATUS+0, 0
	GOTO       L_main16
;TURN_ON_LED_8x_WITH_1_BUTTON.c,38 :: 		contarPULL--;
	DECF       main_contarPULL_L0+0, 1
L_main16:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,39 :: 		}
L_main15:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,41 :: 		switch(contarPULL){
	GOTO       L_main17
;TURN_ON_LED_8x_WITH_1_BUTTON.c,42 :: 		case 1:
L_main19:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,43 :: 		leds = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,44 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,45 :: 		case(2):
L_main20:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,46 :: 		leds = 0b00000011;
	MOVLW      3
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,47 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,48 :: 		case(3):
L_main21:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,49 :: 		leds = 0b00000111;
	MOVLW      7
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,50 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,51 :: 		case(4):
L_main22:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,52 :: 		leds = 0b00001111;
	MOVLW      15
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,53 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,54 :: 		case(5):
L_main23:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,55 :: 		leds = 0b00011111;
	MOVLW      31
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,56 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,57 :: 		case(6):
L_main24:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,58 :: 		leds = 0b00111111;
	MOVLW      63
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,59 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,60 :: 		case(7):
L_main25:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,61 :: 		leds = 0b01111111;
	MOVLW      127
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,62 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,63 :: 		case(8):
L_main26:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,64 :: 		leds = 0b11111111;
	MOVLW      255
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,65 :: 		break;
	GOTO       L_main18
;TURN_ON_LED_8x_WITH_1_BUTTON.c,69 :: 		}
L_main17:
	MOVF       main_contarPULL_L0+0, 0
	XORLW      1
	BTFSC      STATUS+0, 2
	GOTO       L_main19
	MOVF       main_contarPULL_L0+0, 0
	XORLW      2
	BTFSC      STATUS+0, 2
	GOTO       L_main20
	MOVF       main_contarPULL_L0+0, 0
	XORLW      3
	BTFSC      STATUS+0, 2
	GOTO       L_main21
	MOVF       main_contarPULL_L0+0, 0
	XORLW      4
	BTFSC      STATUS+0, 2
	GOTO       L_main22
	MOVF       main_contarPULL_L0+0, 0
	XORLW      5
	BTFSC      STATUS+0, 2
	GOTO       L_main23
	MOVF       main_contarPULL_L0+0, 0
	XORLW      6
	BTFSC      STATUS+0, 2
	GOTO       L_main24
	MOVF       main_contarPULL_L0+0, 0
	XORLW      7
	BTFSC      STATUS+0, 2
	GOTO       L_main25
	MOVF       main_contarPULL_L0+0, 0
	XORLW      8
	BTFSC      STATUS+0, 2
	GOTO       L_main26
L_main18:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,72 :: 		}
	GOTO       L_main0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,73 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
