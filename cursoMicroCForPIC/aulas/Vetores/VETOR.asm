
_main:

;VETOR.c,24 :: 		void main() {
;VETOR.c,25 :: 		char txt1[] = {"ESTADO DA LED: "};
	MOVLW      ?ICSmain_txt1_L0+0
	MOVWF      ___DoICPAddr+0
	MOVLW      hi_addr(?ICSmain_txt1_L0+0)
	MOVWF      ___DoICPAddr+1
	MOVLW      main_txt1_L0+0
	MOVWF      FSR
	MOVLW      35
	MOVWF      R0+0
	CALL       ___CC2DW+0
;VETOR.c,32 :: 		TRISB0_bit = 1;
	BSF        TRISB0_bit+0, BitPos(TRISB0_bit+0)
;VETOR.c,33 :: 		TRISC.F0 = 0 ;
	BCF        TRISC+0, 0
;VETOR.c,34 :: 		led1 = 0;
	BCF        PORTC+0, 0
;VETOR.c,36 :: 		Lcd_Init();
	CALL       _Lcd_Init+0
;VETOR.c,37 :: 		Lcd_Out(1, 2, "inicializando...");
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      2
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      ?lstr1_VETOR+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;VETOR.c,38 :: 		delay_ms(3000);
	MOVLW      31
	MOVWF      R11+0
	MOVLW      113
	MOVWF      R12+0
	MOVLW      30
	MOVWF      R13+0
L_main0:
	DECFSZ     R13+0, 1
	GOTO       L_main0
	DECFSZ     R12+0, 1
	GOTO       L_main0
	DECFSZ     R11+0, 1
	GOTO       L_main0
	NOP
;VETOR.c,39 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;VETOR.c,40 :: 		for(;;){
L_main1:
;VETOR.c,41 :: 		b1 = butt1;
	MOVLW      PORTB+0
	MOVWF      FARG_Button_port+0
	CLRF       FARG_Button_pin+0
	MOVLW      20
	MOVWF      FARG_Button_time_ms+0
	CLRF       FARG_Button_active_state+0
	CALL       _Button+0
	BTFSC      R0+0, 0
	GOTO       L__main18
	BCF        main_b1_L0+0, BitPos(main_b1_L0+0)
	GOTO       L__main19
L__main18:
	BSF        main_b1_L0+0, BitPos(main_b1_L0+0)
L__main19:
;VETOR.c,43 :: 		if(b1 && (flagB1 == 0) ){
	BTFSS      main_b1_L0+0, BitPos(main_b1_L0+0)
	GOTO       L_main6
	BTFSC      _flagB1+0, BitPos(_flagB1+0)
	GOTO       L_main6
L__main16:
;VETOR.c,44 :: 		flagB1 = 1;
	BSF        _flagB1+0, BitPos(_flagB1+0)
;VETOR.c,45 :: 		}
L_main6:
;VETOR.c,46 :: 		if(!b1 && flagB1 == 1){
	BTFSC      main_b1_L0+0, BitPos(main_b1_L0+0)
	GOTO       L_main9
	BTFSS      _flagB1+0, BitPos(_flagB1+0)
	GOTO       L_main9
L__main15:
;VETOR.c,47 :: 		if(contar < 2) contar++;
	MOVLW      2
	SUBWF      main_contar_L0+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_main10
	INCF       main_contar_L0+0, 1
L_main10:
;VETOR.c,49 :: 		flagB1 = 0;
	BCF        _flagB1+0, BitPos(_flagB1+0)
;VETOR.c,50 :: 		}
L_main9:
;VETOR.c,52 :: 		switch(contar){
	GOTO       L_main11
;VETOR.c,53 :: 		case 1:
L_main13:
;VETOR.c,54 :: 		led1 = 1;
	BSF        PORTC+0, 0
;VETOR.c,55 :: 		Lcd_Out(1, 3, txt1);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      3
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt1_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;VETOR.c,56 :: 		Lcd_Out(2, 5, txt2);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt2_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;VETOR.c,57 :: 		break;
	GOTO       L_main12
;VETOR.c,58 :: 		case 2:
L_main14:
;VETOR.c,59 :: 		led1 = 0;
	BCF        PORTC+0, 0
;VETOR.c,60 :: 		Lcd_Cmd(_LCD_CLEAR);
	MOVLW      1
	MOVWF      FARG_Lcd_Cmd_out_char+0
	CALL       _Lcd_Cmd+0
;VETOR.c,61 :: 		Lcd_Out(1, 3, txt1);
	MOVLW      1
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      3
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt1_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;VETOR.c,62 :: 		Lcd_Out(2, 5,  txt3);
	MOVLW      2
	MOVWF      FARG_Lcd_Out_row+0
	MOVLW      5
	MOVWF      FARG_Lcd_Out_column+0
	MOVLW      main_txt3_L0+0
	MOVWF      FARG_Lcd_Out_text+0
	CALL       _Lcd_Out+0
;VETOR.c,63 :: 		contar = 0;
	CLRF       main_contar_L0+0
;VETOR.c,64 :: 		break;
	GOTO       L_main12
;VETOR.c,65 :: 		}
L_main11:
	MOVF       main_contar_L0+0, 0
	XORLW      1
	BTFSC      STATUS+0, 2
	GOTO       L_main13
	MOVF       main_contar_L0+0, 0
	XORLW      2
	BTFSC      STATUS+0, 2
	GOTO       L_main14
L_main12:
;VETOR.c,70 :: 		}
	GOTO       L_main1
;VETOR.c,71 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
