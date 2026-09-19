
_main:

;TURN_ON_LED_8x_WITH_1_BUTTON.c,5 :: 		void main() {
;TURN_ON_LED_8x_WITH_1_BUTTON.c,8 :: 		unsigned char contarPULL = 0;
	CLRF       main_contarPULL_L0+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,9 :: 		TRISB.f0 = 1;
	BSF        TRISB+0, 0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,12 :: 		TRISD = 0;
	CLRF       TRISD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,13 :: 		PORTD = 0x00;
	CLRF       PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,15 :: 		for(;;){
L_main0:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,17 :: 		if(bot1 && flegB0 == 0){
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_main5
	BTFSC      main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
	GOTO       L_main5
L__main21:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,18 :: 		flegB0 = 1;
	BSF        main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
;TURN_ON_LED_8x_WITH_1_BUTTON.c,19 :: 		}
L_main5:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,20 :: 		if(!bot1 && flegB0 == 1){
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	MOVF       R0+0, 0
	BTFSS      STATUS+0, 2
	GOTO       L_main8
	BTFSS      main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
	GOTO       L_main8
L__main20:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,21 :: 		flegB0 = 0;
	BCF        main_flegB0_L0+0, BitPos(main_flegB0_L0+0)
;TURN_ON_LED_8x_WITH_1_BUTTON.c,22 :: 		contarPULL++;
	INCF       main_contarPULL_L0+0, 1
;TURN_ON_LED_8x_WITH_1_BUTTON.c,23 :: 		}
L_main8:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,25 :: 		switch(contarPULL){
	GOTO       L_main9
;TURN_ON_LED_8x_WITH_1_BUTTON.c,26 :: 		case 1:
L_main11:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,27 :: 		leds = 0b00000001;
	MOVLW      1
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,28 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,29 :: 		case(2):
L_main12:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,30 :: 		leds = 0b00000011;
	MOVLW      3
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,31 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,32 :: 		case(3):
L_main13:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,33 :: 		leds = 0b00000111;
	MOVLW      7
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,34 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,35 :: 		case(4):
L_main14:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,36 :: 		leds = 0b00001111;
	MOVLW      15
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,37 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,38 :: 		case(5):
L_main15:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,39 :: 		leds = 0b00011111;
	MOVLW      31
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,40 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,41 :: 		case(6):
L_main16:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,42 :: 		leds = 0b00111111;
	MOVLW      63
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,43 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,44 :: 		case(7):
L_main17:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,45 :: 		leds = 0b01111111;
	MOVLW      127
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,46 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,47 :: 		case(8):
L_main18:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,48 :: 		leds = 0b111111111;
	MOVLW      255
	MOVWF      PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,49 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,50 :: 		default:
L_main19:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,51 :: 		leds = 0b00000000;
	CLRF       PORTD+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,52 :: 		contarPULL = 0;
	CLRF       main_contarPULL_L0+0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,54 :: 		break;
	GOTO       L_main10
;TURN_ON_LED_8x_WITH_1_BUTTON.c,58 :: 		}
L_main9:
	MOVF       main_contarPULL_L0+0, 0
	XORLW      1
	BTFSC      STATUS+0, 2
	GOTO       L_main11
	MOVF       main_contarPULL_L0+0, 0
	XORLW      2
	BTFSC      STATUS+0, 2
	GOTO       L_main12
	MOVF       main_contarPULL_L0+0, 0
	XORLW      3
	BTFSC      STATUS+0, 2
	GOTO       L_main13
	MOVF       main_contarPULL_L0+0, 0
	XORLW      4
	BTFSC      STATUS+0, 2
	GOTO       L_main14
	MOVF       main_contarPULL_L0+0, 0
	XORLW      5
	BTFSC      STATUS+0, 2
	GOTO       L_main15
	MOVF       main_contarPULL_L0+0, 0
	XORLW      6
	BTFSC      STATUS+0, 2
	GOTO       L_main16
	MOVF       main_contarPULL_L0+0, 0
	XORLW      7
	BTFSC      STATUS+0, 2
	GOTO       L_main17
	MOVF       main_contarPULL_L0+0, 0
	XORLW      8
	BTFSC      STATUS+0, 2
	GOTO       L_main18
	GOTO       L_main19
L_main10:
;TURN_ON_LED_8x_WITH_1_BUTTON.c,61 :: 		}
	GOTO       L_main0
;TURN_ON_LED_8x_WITH_1_BUTTON.c,62 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
