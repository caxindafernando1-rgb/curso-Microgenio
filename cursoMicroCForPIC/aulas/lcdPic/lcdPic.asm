
_main:

;lcdPic.c,16 :: 		void main() {
;lcdPic.c,19 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;lcdPic.c,21 :: 		Lcd_Chr(1, 4, 'V');
	MOVLW      1
	MOVWF      FARG_Lcd_Chr_row+0
	MOVLW      4
	MOVWF      FARG_Lcd_Chr_column+0
	MOVLW      86
	MOVWF      FARG_Lcd_Chr_out_char+0
	CALL       _Lcd_Chr+0
;lcdPic.c,22 :: 		Lcd_Out(2, 3, "capa");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      3
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_lcdPic+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;lcdPic.c,23 :: 		Lcd_Out_CP("capa");
	MOVLW      ?lstr2_lcdPic+0
	MOVWF      FARG_Lcd_Out_CP_text+0
	CALL       _Lcd_Out_CP+0
;lcdPic.c,24 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
