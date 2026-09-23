
_main:

;funcConvAD.c,17 :: 		void main() {
;funcConvAD.c,19 :: 		ADCON0 = 0b00000000;
	CLRF       ADCON0+0
;funcConvAD.c,20 :: 		ADCON1 = 0b11000100;
	MOVLW      196
	MOVWF      ADCON1+0
;funcConvAD.c,22 :: 		TRISA0_bit = 1;
	BSF        TRISA0_bit+0, BitPos(TRISA0_bit+0)
;funcConvAD.c,23 :: 		TRISA1_bit = 1;
	BSF        TRISA1_bit+0, BitPos(TRISA1_bit+0)
;funcConvAD.c,24 :: 		TRISC = 0;
	CLRF       TRISC+0
;funcConvAD.c,25 :: 		TRISD = 0;
	CLRF       TRISD+0
;funcConvAD.c,27 :: 		PORTD = 0;
	CLRF       PORTD+0
;funcConvAD.c,28 :: 		PORTC = 0;
	CLRF       PORTC+0
;funcConvAD.c,30 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;funcConvAD.c,31 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;funcConvAD.c,32 :: 		Lcd_Out(1, 1, "AN0: ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_funcConvAD+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;funcConvAD.c,33 :: 		Lcd_Out(2, 1, "AN0: ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_funcConvAD+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;funcConvAD.c,35 :: 		for(;;){
L_main0:
;funcConvAD.c,36 :: 		unsigned valConvert = 0;
;funcConvAD.c,38 :: 		valConvert = ADC_Read(0);//o valConvert(recebe a inicialização do sinal do canal convertido; ADC_Read(0)(converte o sinal do canal 0)
	CLRF       FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;funcConvAD.c,39 :: 		WordToStr(valConvert, txt);
	MOVF       R0+0, 0
	MOVWF      FARG_WordToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_WordToStr_input+1
	MOVLW      main_txt_L1+0
	MOVWF      FARG_WordToStr_output+0
	CALL       _WordToStr+0
;funcConvAD.c,40 :: 		Lcd_Out(1, 5, txt);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt_L1+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;funcConvAD.c,42 :: 		valConvert = ADC_Read(1);//o valConvert(recebe a inicialização do sinal do canal convertido; ADC_Read(0)(converte o sinal do canal 0)
	MOVLW      1
	MOVWF      FARG_ADC_Read_channel+0
	CALL       _ADC_Read+0
;funcConvAD.c,43 :: 		WordToStr(valConvert, txt);
	MOVF       R0+0, 0
	MOVWF      FARG_WordToStr_input+0
	MOVF       R0+1, 0
	MOVWF      FARG_WordToStr_input+1
	MOVLW      main_txt_L1+0
	MOVWF      FARG_WordToStr_output+0
	CALL       _WordToStr+0
;funcConvAD.c,44 :: 		Lcd_Out(2, 5, txt);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt_L1+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;funcConvAD.c,45 :: 		}
	GOTO       L_main0
;funcConvAD.c,46 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
