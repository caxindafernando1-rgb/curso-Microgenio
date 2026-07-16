#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int n, i;
    long long int A = 0; // Usamos long long para evitar estouro caso n seja muito grande

    // Loop de validação: garante que o usuário digite um número maior que zero
    do {
        printf("Digite um número inteiro maior que zero (n): ");
        scanf("%d", &n);
        
        if (n <= 0) {
            printf("Valor inválido! O número deve ser maior que zero.\n");
        }
    } while (n <= 0);

    // Loop para somar de 1 até n
    for (i = 1; i <= n; i++) {
        A += i;
    }

    printf("O valor de A (soma de 1 até %d) é: %lld\n", n, A);

    return 0;
}
