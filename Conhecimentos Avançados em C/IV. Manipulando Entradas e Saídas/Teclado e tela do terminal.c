#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){

    setlocale(LC_ALL, "");

    int a, b;
    scanf("%d %d", &a, &b);
    double media;
    media = (a+b)/2.0;
    printf("A m�dia de %d e %d � %.2f\n", a, b, media);
    return EXIT_SUCCESS;
}