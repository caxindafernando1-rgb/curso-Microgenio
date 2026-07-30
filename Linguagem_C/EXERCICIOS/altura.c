#include <stdio.h>
#include <locale.h>
#include <windows.h> // Abre os comandos do terminal do Windows

int main() {
    // Estas 3 linhas são as únicas obrigatórias para corrigir os acentos
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico >= ze ){
        chico += 0.02;
        ze += 0.03;
        ano++;
        printf("no %d º ano, zé tem: %.2f metros  e chico tem %.2f metros\n", ano, ze, chico);
    }
    printf("foram necessarios %d anos", ano);



    return 0;
}
