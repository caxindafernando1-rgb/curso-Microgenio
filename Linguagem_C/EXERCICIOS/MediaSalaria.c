#include <stdio.h>
#include <locale.h>
#include <windows.h>  

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int i, x, idade, maiorIdade = 0, menorIdade = 9999, quantM = 0;
    char sexo;
    float salario, mediaSalario = 0;

    printf("Número de funcionarios: ");
    scanf("%d", &x);


    for (i = 1; i <= x; i++ ){
      printf("Idade: ");
      scanf(" %d", &idade);
      printf("Sexo: ");
      scanf(" %c", &sexo);
      printf("Salario: ");
      scanf(" %f", &salario);

      mediaSalario += salario;

      if(maiorIdade  < idade)
        maiorIdade = idade;
      if(menorIdade  > idade)
        menorIdade = idade;

      if(sexo == 'f' && salario>=2000)
        quantM++;
    }

  printf("Media salario: %.2f\n", mediaSalario / x);
  printf("Maior idade: %d\n", maiorIdade);
  printf("Menor idade: %d\n", menorIdade);
  printf("Mulher acima da media: %d\n\n", quantM);

}
