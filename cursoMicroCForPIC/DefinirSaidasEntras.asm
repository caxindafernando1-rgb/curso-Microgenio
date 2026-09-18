
_main:

;DefinirSaidasEntras.c,2 :: 		void main() {
;DefinirSaidasEntras.c,3 :: 		TRISD = 0X00;// saidas
	CLRF       TRISD+0
;DefinirSaidasEntras.c,4 :: 		PORTD = 0XF0;// metade 1 metada em 0
	MOVLW      240
	MOVWF      PORTD+0
;DefinirSaidasEntras.c,6 :: 		for(;;) // loop infinito;
L_main0:
;DefinirSaidasEntras.c,9 :: 		}
	GOTO       L_main0
;DefinirSaidasEntras.c,10 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
