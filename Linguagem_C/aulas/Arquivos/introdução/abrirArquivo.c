#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h>
#include <time.h> 

/*
                                     Como escrever em arquivo texto com a função fputc
                w - Escrita
                r - leitura
                a - anexar
                r+ - leitura e escrita
                w+ - leitura e escrita (apaga o contúdo caso o arquivo exista)
                a+ - leitura e escrita (adiciona ao final do arquivo)
*/


int main() {

  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
  setlocale(LC_ALL, ".UTF8");

  FILE *pasta;
  char texto;


  pasta = fopen("Contos.txt", "w+");//abrir a pasta dar titulo(contos) formato do arquivo(txt) que tratamento queremos lhe dar(w)

  if (pasta){//se o arquivo for criado com sucesso
    printf("Escreva seu texto e digite 'ENTER' para finalizar.\n");
    scanf("%c", &texto);
    while (texto != '\n'){
        fputc(texto, pasta);//conlocar  o texto no arquivo(pasta)
        scanf("%c", &texto);
    }
       
        
        //ler o arquivo:

        rewind(pasta);//voltar ao inicio do texto na pasta

        printf("\n\nLer o arquivo dentro da pasta-Contos: \n");
        while (!feof(pasta)){//enquando não chegar no fim da pasta:
          texto = fgetc(pasta);//mostra o que esta na pasta
          printf("%c ", texto);
        }
        printf("\n\n");
      fclose(pasta);//fechar o arquivo
        
  }
  else
    printf("ERRO!\nO Arquivo não foi criado");//caso o arquivo não seja criado


   return 0;
}
