#include <stdio.h>
#include <locale.h>
#include <windows.h>  
#include <string.h> 


int main() {
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");


    char strgs[] = {"\n\n\tBom dia!\n\tComo estas?\n\n\n"};

    strupr(strgs);

    printf("Upper: %s", strgs);

    strlwr(strgs);
    printf("\nLower: %s", strgs);

 return 0;
}
