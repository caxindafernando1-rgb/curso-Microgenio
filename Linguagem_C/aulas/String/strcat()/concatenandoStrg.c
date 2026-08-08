#include <stdio.h>
#include <locale.h>
#include <windows.h>  



                                                        

int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
   
    char c1[50] = {"Oi."};
    char c2[50] = {" Como você está?"}; 

    strcat(c1, c2);

    printf("%s ", c1);

 return 0;
}
