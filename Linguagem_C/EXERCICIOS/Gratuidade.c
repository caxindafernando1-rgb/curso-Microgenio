#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int idade;
    char sexo;

    printf("Idade: ");
    scanf("%d", &idade);

    if(idade <= 5 || idade >= 60)// só precisa de um verdadeiro para ser verdadeiro || == OU
      printf("tem direito a gratuidade");
    else
      printf("Não tem direito a gratuidade.");
}
