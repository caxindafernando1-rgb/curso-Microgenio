#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    float massa;
    int tempo = 0;

    printf("Digite a massa incial: ");
    scanf("%f", &massa);

    while (massa >= 0.05){
        massa = massa / 2;
        tempo += 50;
    }

    printf("Tempo dinal %d\n", tempo);
    printf("Massa final %f", massa);

}