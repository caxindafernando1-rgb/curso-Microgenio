#include <stdio.h>
#include <locale.h>
#include <windows.h> // Abre os comandos do terminal do Windows

int main() {
    // Estas 3 linhas são as únicas obrigatórias para corrigir os acentos
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    // Seu código limpo começa aqui
    printf("Coração, café e ação funcionam perfeitamente!\n");

    return 0;
}
