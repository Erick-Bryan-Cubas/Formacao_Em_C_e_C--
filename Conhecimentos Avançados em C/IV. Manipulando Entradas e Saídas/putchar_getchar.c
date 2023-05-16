#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main (void){
    char linha[100];
    int n = 0;
    while (true){
        linha[n] = getchar();
        if (linha[n] == "\n") break;
        n = n + 1;
    }
    for (int i = 0; i <= n; i += 1)
        putchar (linha[i]);
        return EXIT_SUCCESS;
}