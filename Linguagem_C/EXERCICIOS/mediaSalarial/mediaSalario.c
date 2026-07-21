#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   int quantidade, i;
   float salario, totalSalario = 0, salarioMaior = 0, salarioMenor = 99999;

   do{
      printf("Digite o número de funcionarios: ");
      scanf("%d", &quantidade);
   }while(quantidade < 0);

   for( i = 1; i <= quantidade; i++){
   printf("%d salario: ", i);
   scanf(" %f", &salario);

   totalSalario += salario;
   if(salarioMenor > salario)
      salarioMenor = salario;
   if(salarioMaior < salario)
      salarioMaior = salario;
}
printf("A media de salarios é: %.2f Kwanzas\n", totalSalario / quantidade);
printf("O maior salario é: %.2f Kwanzas\n", salarioMaior);
printf("O menor salario é: %.2f Kwanzas\n\n", salarioMenor);

}