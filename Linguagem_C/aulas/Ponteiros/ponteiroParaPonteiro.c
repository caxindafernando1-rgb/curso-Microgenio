#include <stdio.h>
#include <locale.h>
#include <windows.h> 


int main() {
   
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   
    int A = 100, *B, **C;

    B = &A;
    C = &B;


   printf("endereço de A: %p Conteudo de A: %d\n", &A, A);

   printf("endereço de B: %p Conteudo apontado de B: %p\n", &B, B);//endereço de B e o endereço apontado por B
   printf("Conteudo apontado por B: %d\n", *B);//mostrar o conteudo dentro do endereço apontado por B

   printf("endereço de C: %p Conteudo apontado de C: %p\n", &C, C);//endereço de C e o endereço apontado por C
   printf("Conteudo apontado por B: %d", **C);//mostrar o conteudo dentro do endereço apontado por B


    return 0;
}
