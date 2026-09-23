
_main:

;doisConvADnodISPLAY.c,17 :: 		void main() {
;doisConvADnodISPLAY.c,20 :: 		ADCON0 = 0b00000000;
	CLRF       ADCON0+0
;doisConvADnodISPLAY.c,21 :: 		ADCON1 = 0b11000100;
	MOVLW      196
	MOVWF      ADCON1+0
;doisConvADnodISPLAY.c,23 :: 		TRISA0_bit = 1;
	BSF        TRISA0_bit+0, BitPos(TRISA0_bit+0)
;doisConvADnodISPLAY.c,24 :: 		TRISA1_bit = 1;
	BSF        TRISA1_bit+0, BitPos(TRISA1_bit+0)
;doisConvADnodISPLAY.c,25 :: 		TRISC = 0;
	CLRF       TRISC+0
;doisConvADnodISPLAY.c,26 :: 		TRISD = 0;
	CLRF       TRISD+0
;doisConvADnodISPLAY.c,28 :: 		PORTD = 0;
	CLRF       PORTD+0
;doisConvADnodISPLAY.c,29 :: 		PORTC = 0;
	CLRF       PORTC+0
;doisConvADnodISPLAY.c,31 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;doisConvADnodISPLAY.c,32 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;doisConvADnodISPLAY.c,33 :: 		Lcd_Out(1, 1, "AN1: ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_doisConvADnodISPLAY+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;doisConvADnodISPLAY.c,34 :: 		Lcd_Out(2, 1, "AN0: ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_doisConvADnodISPLAY+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;doisConvADnodISPLAY.c,36 :: 		for(;;){
L_main0:
;doisConvADnodISPLAY.c,37 :: 		unsigned valConvert = 0;
	CLRF       main_valConvert_L1+0
	CLRF       main_valConvert_L1+1
;doisConvADnodISPLAY.c,40 :: 		ADCON0.CHS2 = 0;
	BCF        ADCON0+0, 5
;doisConvADnodISPLAY.c,41 :: 		ADCON0.CHS1 = 0;
	BCF        ADCON0+0, 4
;doisConvADnodISPLAY.c,42 :: 		ADCON0.CHS0 = 0;
	BCF        ADCON0+0, 3
;doisConvADnodISPLAY.c,43 :: 		ADON_bit = 1;
	BSF        ADON_bit+0, BitPos(ADON_bit+0)
;doisConvADnodISPLAY.c,44 :: 		delay_us(20);
	MOVLW      13
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
;doisConvADnodISPLAY.c,45 :: 		GO_NOT_DONE_bit = 1;
	BSF        GO_NOT_DONE_bit+0, BitPos(GO_NOT_DONE_bit+0)
;doisConvADnodISPLAY.c,46 :: 		while(GO_NOT_DONE == 1);
L_main5:
;doisConvADnodISPLAY.c,47 :: 		valConvert = (ADRESH<<8) + ADRESL;//afastar 8 posições
	MOVF       ADRESH+0, 0
	MOVWF      main_valConvert_L1+1
	CLRF       main_valConvert_L1+0
	MOVF       ADRESL+0, 0
	ADDWF      main_valConvert_L1+0, 1
	BTFSC      STATUS+0, 0
	INCF       main_valConvert_L1+1, 1
;doisConvADnodISPLAY.c,48 :: 		ADON_bit = 0;
	BCF        ADON_bit+0, BitPos(ADON_bit+0)
;doisConvADnodISPLAY.c,49 :: 		delay_us(20);
	MOVLW      13
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
;doisConvADnodISPLAY.c,50 :: 		WordToStr(valConvert, txt);
	MOVF       main_valConvert_L1+0, 0
	MOVWF      FARG_WordToStr_input+0
	MOVF       main_valConvert_L1+1, 0
	MOVWF      FARG_WordToStr_input+1
	MOVLW      main_txt_L1+0
	MOVWF      FARG_WordToStr_output+0
	CALL       _WordToStr+0
;doisConvADnodISPLAY.c,51 :: 		Lcd_Out(1, 5, txt);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt_L1+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;doisConvADnodISPLAY.c,54 :: 		ADCON0.CHS2 = 0;
	BCF        ADCON0+0, 5
;doisConvADnodISPLAY.c,55 :: 		ADCON0.CHS1 = 0;
	BCF        ADCON0+0, 4
;doisConvADnodISPLAY.c,56 :: 		ADCON0.CHS0 = 1;
	BSF        ADCON0+0, 3
;doisConvADnodISPLAY.c,57 :: 		ADON_bit = 1;
	BSF        ADON_bit+0, BitPos(ADON_bit+0)
;doisConvADnodISPLAY.c,58 :: 		delay_us(20);
	MOVLW      13
	MOVWF      R13+0
L_main7:
	DECFSZ     R13+0, 1
	GOTO       L_main7
;doisConvADnodISPLAY.c,59 :: 		GO_NOT_DONE_bit = 1;
	BSF        GO_NOT_DONE_bit+0, BitPos(GO_NOT_DONE_bit+0)
;doisConvADnodISPLAY.c,60 :: 		while(GO_NOT_DONE == 1);
L_main9:
;doisConvADnodISPLAY.c,61 :: 		valConvert = (ADRESH<<8) + ADRESL;//afastar 8 posições
	MOVF       ADRESH+0, 0
	MOVWF      main_valConvert_L1+1
	CLRF       main_valConvert_L1+0
	MOVF       ADRESL+0, 0
	ADDWF      main_valConvert_L1+0, 1
	BTFSC      STATUS+0, 0
	INCF       main_valConvert_L1+1, 1
;doisConvADnodISPLAY.c,62 :: 		ADON_bit = 0;
	BCF        ADON_bit+0, BitPos(ADON_bit+0)
;doisConvADnodISPLAY.c,63 :: 		delay_us(20);
	MOVLW      13
	MOVWF      R13+0
L_main10:
	DECFSZ     R13+0, 1
	GOTO       L_main10
;doisConvADnodISPLAY.c,64 :: 		WordToStr(valConvert, txt);
	MOVF       main_valConvert_L1+0, 0
	MOVWF      FARG_WordToStr_input+0
	MOVF       main_valConvert_L1+1, 0
	MOVWF      FARG_WordToStr_input+1
	MOVLW      main_txt_L1+0
	MOVWF      FARG_WordToStr_output+0
	CALL       _WordToStr+0
;doisConvADnodISPLAY.c,65 :: 		Lcd_Out(2, 5, txt);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt_L1+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;doisConvADnodISPLAY.c,67 :: 		}
	GOTO       L_main0
;doisConvADnodISPLAY.c,68 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
