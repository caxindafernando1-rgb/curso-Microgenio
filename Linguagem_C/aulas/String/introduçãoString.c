#include <stdio.h>
#include <locale.h>
#include <windows.h>  



                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
    char nome[] = {"Antonio"};

    printf("\n\nDigite seu n: ", nome);
    scanf("%[^\n]", nome);

    printf("\n%s\n", nome);

 return 0;
}
