#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main(void){
    setlocale(LC_ALL, "");
    SetConsoleTitle("Par ou �mpar");

    int NRO;
    for (NRO = 1; NRO <= 100; NRO++)
    {
        if(!(NRO%2))/* Verifica se o N? ? par ou ?mpar */
        printf("O n�mero %d � par\n", NRO);
    }
}