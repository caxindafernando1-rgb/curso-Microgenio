
_main:

;conversorADnodISPLAY.c,17 :: 		void main() {
;conversorADnodISPLAY.c,19 :: 		unsigned valConvert = 0;
	CLRF       main_valConvert_L0+0
	CLRF       main_valConvert_L0+1
;conversorADnodISPLAY.c,21 :: 		ADCON0 = 0b00000000;
	CLRF       ADCON0+0
;conversorADnodISPLAY.c,22 :: 		ADCON1 = 0b11001110;
	MOVLW      206
	MOVWF      ADCON1+0
;conversorADnodISPLAY.c,24 :: 		TRISA0_bit = 1;
	BSF        TRISA0_bit+0, BitPos(TRISA0_bit+0)
;conversorADnodISPLAY.c,25 :: 		TRISC = 0;
	CLRF       TRISC+0
;conversorADnodISPLAY.c,26 :: 		TRISD = 0;
	CLRF       TRISD+0
;conversorADnodISPLAY.c,28 :: 		PORTD = 0;
	CLRF       PORTD+0
;conversorADnodISPLAY.c,29 :: 		PORTC = 0;
	CLRF       PORTC+0
;conversorADnodISPLAY.c,31 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;conversorADnodISPLAY.c,32 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;conversorADnodISPLAY.c,33 :: 		Lcd_Out(1, 1, "VALOR AD: ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_conversorADnodISPLAY+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;conversorADnodISPLAY.c,35 :: 		for(;;){
L_main0:
;conversorADnodISPLAY.c,36 :: 		ADON_bit = 1;
	BSF        ADON_bit+0, BitPos(ADON_bit+0)
;conversorADnodISPLAY.c,37 :: 		delay_us(20);
	MOVLW      13
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
;conversorADnodISPLAY.c,38 :: 		GO_NOT_DONE_bit = 1;
	BSF        GO_NOT_DONE_bit+0, BitPos(GO_NOT_DONE_bit+0)
;conversorADnodISPLAY.c,39 :: 		while(GO_NOT_DONE == 1);
L_main5:
;conversorADnodISPLAY.c,40 :: 		PORTD = ADRESH;
	MOVF       ADRESH+0, 0
	MOVWF      PORTD+0
;conversorADnodISPLAY.c,41 :: 		PORTC = ADRESL;
	MOVF       ADRESL+0, 0
	MOVWF      PORTC+0
;conversorADnodISPLAY.c,42 :: 		valConvert = (PORTD<<8) + PORTC;//afastar 8 posições
	MOVF       PORTD+0, 0
	MOVWF      main_valConvert_L0+1
	CLRF       main_valConvert_L0+0
	MOVF       PORTC+0, 0
	ADDWF      main_valConvert_L0+0, 1
	BTFSC      STATUS+0, 0
	INCF       main_valConvert_L0+1, 1
;conversorADnodISPLAY.c,43 :: 		ADON_bit = 0;
	BCF        ADON_bit+0, BitPos(ADON_bit+0)
;conversorADnodISPLAY.c,44 :: 		delay_us(20);
	MOVLW      13
	MOVWF      R13+0
L_main6:
	DECFSZ     R13+0, 1
	GOTO       L_main6
;conversorADnodISPLAY.c,45 :: 		WordToStr(valConvert, txt);
	MOVF       main_valConvert_L0+0, 0
	MOVWF      FARG_WordToStr_input+0
	MOVF       main_valConvert_L0+1, 0
	MOVWF      FARG_WordToStr_input+1
	MOVLW      main_txt_L0+0
	MOVWF      FARG_WordToStr_output+0
	CALL       _WordToStr+0
;conversorADnodISPLAY.c,46 :: 		Lcd_Out(2, 9, txt);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      9
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;conversorADnodISPLAY.c,48 :: 		}
	GOTO       L_main0
;conversorADnodISPLAY.c,49 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
