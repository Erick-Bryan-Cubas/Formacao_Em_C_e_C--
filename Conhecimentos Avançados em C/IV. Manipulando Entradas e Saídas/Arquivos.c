#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL, "");
    
    FILE *entrada;
    entrada = fopen ("dados.txt", "r");
    if (entrada == NULL){
        printf("\n N�o encontrei o arquivo!\n");
        exit (EXIT_FAILURE);
    }
}