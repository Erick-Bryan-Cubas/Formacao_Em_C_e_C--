/* Usando comandos if, operadores relacionais e operadores de igualdade */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleTitle("Tomada de decis�es");
    int num1, num2;
    printf( "Entre com dois inteiros e eu lhe direi \n" );
    printf( "a rela��o que eles satisfazem: " );
    scanf( "%d%d", &num1, &num2 ); /* le dois inteiros */
    if( num1 == num2 )
        printf( "%d � igual a %d\n ", num1, num2);
    if( num1 != num2 )
        printf( "%d � diferente de %d", num1, num2);
    if( num1 < num2 )
        printf( "%d � menor que %d", num1, num2);
    if( num1 > num2 )
        printf( "%d � maior que %d", num1, num2);
    if( num1 <= num2)
        printf( "%d � menor ou igual que %d", num1, num2);
    if( num1 >= num2)
    printf( "%d � maior ou igual que %d", num1, num2); 

    return 0; /* Indica que o programa foi bem-sucedido */
}