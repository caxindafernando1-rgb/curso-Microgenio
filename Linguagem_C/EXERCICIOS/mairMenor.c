#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

   int i, idade, idadeBaixinhos = 0, quantidadeBaix = 0, quantAlturaMaior20 = 0;
   float idadeMedia, alturaMedia, altura, AlturaMais20 = 0;

   for (i = 0; i <= 2; i++){
    printf("idade: ");
    scanf("%d", &idade);
   

    printf("Altura: ");
    scanf("%f", &altura);
    if (altura < 1.7){
        idadeBaixinhos += idade;
        quantidadeBaix++;
    }

    if (idade > 20 ){
        AlturaMais20 += altura;
        quantAlturaMaior20++;
    }
}
   
   idadeMedia = (float)idadeBaixinhos / quantidadeBaix;
   alturaMedia = AlturaMais20 / quantAlturaMaior20;

   printf("A média das idades é de: %.2f \n", idadeMedia);
   printf("A altura média é de: %.2f", alturaMedia);
   
}