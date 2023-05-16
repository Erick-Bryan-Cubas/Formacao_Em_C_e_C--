#include <stdio.h>
#include <stdlib.h>

int main (void){
    FILE *entrada;
    entrada = fopen("dados.txt", "r");
    if (entrada == NULL) exit (EXIT_FAILURE);
    char c; //erro!
    c = getc (stdin);
    fclose (entrada);
    putc (c, stdout);
    return EXIT_SUCCESS;
}