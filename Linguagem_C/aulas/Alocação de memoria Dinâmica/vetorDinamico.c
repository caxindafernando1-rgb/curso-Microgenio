#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main (){

   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);
   setlocale(LC_ALL, ".UTF8");
   
   int *vet, tam, i;

   printf("\n\nDigite o tamanho do vetor: ");
   scanf("%d", &tam);
   srand(time(NULL));

   vet = malloc(tam * sizeof(int));

   if(vet){
        printf("\nVetor de tamanho %d criado com sucesso!: \n", tam);
        for (i = 0; i < tam; i++)
            *(vet + i) = 1 + rand() % 100;

        for ( i = 0; i < tam; i++)
            printf("%d ", *(vet + i));
        
        printf("\n");
           
        printf("\nDigite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        int *temp = realloc(vet, tam * sizeof(int)); 

        if (temp != NULL) {
            vet = temp; // Atualiza o ponteiro com segurança
            printf("\nVetor redefinido para ter tamanho %d com sucesso: \n", tam);
            
            for ( i = 0; i < tam; i++){
                printf("%d ", *(vet + i));
            }
            printf("\n\n");
        } else {
            printf("\nFalha ao realocar memória!\n");
        }

        free(vet); // Liberar a memória alocada no final
    }
    else {
        printf("\n\nFalha ao criar vetor\n\n");
    }
   
   return 0;
}
