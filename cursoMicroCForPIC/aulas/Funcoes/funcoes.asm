
_inverter:

;funcoes.c,21 :: 		void inverter(){
;funcoes.c,22 :: 		led1 = ~led1;
	MOVLW      128
	XORWF      PORTB+0, 1
;funcoes.c,23 :: 		}
L_end_inverter:
	RETURN
; end of _inverter

_escrever:

;funcoes.c,25 :: 		void escrever(){
;funcoes.c,26 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;funcoes.c,27 :: 		lcd_out(1, 3, " PIC16F877A ");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      3
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_funcoes+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;funcoes.c,28 :: 		Lcd_Out(2, 1, "B1: ");
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      1
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr2_funcoes+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;funcoes.c,29 :: 		}
L_end_escrever:
	RETURN
; end of _escrever

_main:

;funcoes.c,31 :: 		void main() {
;funcoes.c,32 :: 		unsigned char cont = 0;
	CLRF       main_cont_L0+0
;funcoes.c,37 :: 		led1 = 1;
	BSF        PORTB+0, 7
;funcoes.c,39 :: 		TRISB.f0 = 1;
	BSF        TRISB+0, 0
;funcoes.c,40 :: 		TRISB7_bit = 0;
	BCF        TRISB7_bit+0, BitPos(TRISB7_bit+0)
;funcoes.c,43 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;funcoes.c,44 :: 		Lcd_Cmd(_LCD_CURSOR_OFF);
	MOVLW      12
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;funcoes.c,45 :: 		escrever();
	CALL       _escrever+0
;funcoes.c,47 :: 		for(;;){
L_main0:
;funcoes.c,48 :: 		b1 = Button(&PORTB, 0, 20, 0);
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	BTFSC      R0+0, 0
	GOTO       L__main14
	BCF        main_b1_L0+0, BitPos(main_b1_L0+0)
	GOTO       L__main15
L__main14:
	BSF        main_b1_L0+0, BitPos(main_b1_L0+0)
L__main15:
;funcoes.c,50 :: 		if(b1 && flagB1 == 0){
	BTFSS      main_b1_L0+0, BitPos(main_b1_L0+0)
	GOTO       L_main5
	BTFSC      _flagB1+0, BitPos(_flagB1+0)
	GOTO       L_main5
L__main10:
;funcoes.c,51 :: 		flagB1 = 1;
	BSF        _flagB1+0, BitPos(_flagB1+0)
;funcoes.c,52 :: 		}
L_main5:
;funcoes.c,53 :: 		if(!b1 && flagB1 == 1){
	BTFSC      main_b1_L0+0, BitPos(main_b1_L0+0)
	GOTO       L_main8
	BTFSS      _flagB1+0, BitPos(_flagB1+0)
	GOTO       L_main8
L__main9:
;funcoes.c,54 :: 		inverter();
	CALL       _inverter+0
;funcoes.c,55 :: 		flagB1 = 0;
	BCF        _flagB1+0, BitPos(_flagB1+0)
;funcoes.c,56 :: 		cont += 1;
	INCF       main_cont_L0+0, 1
;funcoes.c,57 :: 		}
L_main8:
;funcoes.c,58 :: 		ByteToStr(cont, txt);
	MOVF       main_cont_L0+0, 0
	MOVWF      FARG_ByteToStr_input+0
	MOVLW      main_txt_L0+0
	MOVWF      FARG_ByteToStr_output+0
	CALL       _ByteToStr+0
;funcoes.c,59 :: 		Lcd_Out(2, 5, txt );
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;funcoes.c,61 :: 		}
	GOTO       L_main0
;funcoes.c,62 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
