#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main(void){
    setlocale(LC_ALL, "");
    SetConsoleTitle("Par ou ímpar");

    int NRO;
    for (NRO = 1; NRO <= 100; NRO++)
    {
        if(!(NRO%2))/* Verifica se o Nº é par ou ímpar */
        printf("O número %d é par\n", NRO);
    }
}