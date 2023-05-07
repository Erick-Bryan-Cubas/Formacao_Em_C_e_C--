#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "");
    SetConsoleTitle("Laços em C");

    int N;
    int i, s;

    printf("Digite o valor de N: ");
    scanf("%d", &N);
    s = 0;
    i = 1;
    while (i <= N)
    {
        s = s+i;
        i++;
    }
    printf("Soma = %d\n", s);
    system("PAUSE");
    return 0;
}