#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>


/*
                                                                Considere a seguinte declaração: int A, *B, **C, ***D
                                                                Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
                                                                valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
                                                                o triplo e D o quádruplo.
*/

   
int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int a, *b, **c, ***d;

    printf("Digite um valor: ");
    scanf("%d", &a);
    
    b = &a;
    c = &b;
    d = &c;

    printf("o dobro de: %d é: %d\n", a, 2 * *b);
    printf("o triplo de: %d é: %d\n", *b, 3 * **c);
    printf("o quadruplo de: %d é: %d\n", **c, 4 * ***d);

 return 0;
}
