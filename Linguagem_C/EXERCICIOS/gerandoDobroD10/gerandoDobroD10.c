#include <stdio.h>
#include <locale.h>
#include <windows.h>  
                                             /*4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos 
                              diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas 
                              vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade 
                              vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que 
                              receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois, 
                              determine e mostre:
                              a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados 
                              o valor total das vendas e o valor da comissão que será paga ao vendedor.
                              b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos 
                              empatados)*/
                              

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
      
    int maisVendido = 0, quant[10], i;
    float valor[10], valorUnitario, valorTotal = 0; 

    for(i = 0; i < 10; i++){
     printf("Quantidade: ");
     scanf("%d", &quant[i]);
     printf("Valor: ");
     scanf("%f", &valor[i]);
    }
    
    for(i= 0; i < 10; i++){
     valorUnitario = valor[i] * quant[i];
     printf("quantidade: %d\tValor: %.2f\t Valor Unitario: %.2f\n\n", quant[i], valor[i], valorUnitario);
     valorTotal += valorUnitario;
    }
    //Linha A:
    printf("Valor total: %.2f\n\n", valorTotal);
    printf("Comissão: %.2f\n\n", valorTotal * 0.05);

    //Linha B:
    for(i = 0; i < 10; i++){
     if(quant[i] > maisVendido)
          maisVendido = quant[i];
    }

     for(i = 0; i < 10; i++){
     if(quant[i] == maisVendido){
          printf("Posição: %d \tValor: %.2f\n\n", i, valor[i]);
    }
}

  
}