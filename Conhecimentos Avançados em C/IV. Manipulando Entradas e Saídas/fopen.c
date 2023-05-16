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
    double soma = 0.0;
    int n = 0;
    while (true) {
        int x;
        int k = fscanf (entrada, "%d", &x);
        if (k != 1) break;
        soma += x;
        n += 1;       
    }
    fclose (entrada);
    printf("A m�dia dos n�meros %.2f\n", soma/n);
    return EXIT_SUCCESS;
}