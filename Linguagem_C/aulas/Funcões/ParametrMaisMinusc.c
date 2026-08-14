#include <stdio.h>
#include <locale.h>
#include <windows.h> 
#include <stdlib.h>
#include <ctype.h>


void maiscula(char s1[], char s2[]){
      int i = 0;

      while (s1[i]!= '\0'){
            s2[i] = toupper(s1[i]);
            i++;
      }
      s2[i] = '\0';
}


void minuscula(char x1[], char x2[]){
      int i = 0;

      while (x1[i]!= '\0'){
            x2[i] = tolower(x1[i]);
            i++;
      }
      x1[i] = '\0';
}


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


    char Str1[] = {"Ola. Bom dia!"};
    char Str2[50];

    printf("\n%s\n", Str1);

    maiscula(Str1, Str2);
    printf("\n%s\n", Str2);

    minuscula(Str1, Str2);
    printf("\n%s\n", Str2);


 
 return 0;
}
