/* Programa de soma */
#include<stdio.h>

int main(){
    int int1, int2, soma; /* declara��o */

    printf("Entre com o primeiro inteiro; \n"); /* prompt*/
    scanf("%d", &int1); /* l� um inteiro */
    printf("Entre com o segundo inteiro; \n"); /* prompt*/
    scanf("%d", &int2); /* l� um inteiro */
    soma = int1 + int2; /* atribui soma */
    printf(" A soma � igual a %d\n", soma); /* Imprime soma */

    return 0; /* Indica que o programa foi bem-sucedido */
}