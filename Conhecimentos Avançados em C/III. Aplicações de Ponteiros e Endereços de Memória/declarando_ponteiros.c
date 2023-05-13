#include <stdio.h>
#include <stdlib.h>

int main(void){

    int * ptr;
    int valor = 10;

    ptr = &valor;

    printf("Endereço = %x", &valor);
    printf("Endereço = %x", ptr);
    printf("Valor = %d", *ptr);

    return EXIT_SUCCESS;
}