/* Usando comandos if, operadores relacionais e operadores de igualdade */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "");
    SetConsoleTitle("Tomada de decisões");
    int num1, num2;
    printf( "Entre com dois inteiros e eu lhe direi \n" );
    printf( "a relação que eles satisfazem: " );
    scanf( "%d%d", &num1, &num2 ); /* le dois inteiros */
    if( num1 == num2 )
        printf( "%d é igual a %d\n ", num1, num2);
    if( num1 != num2 )
        printf( "%d é diferente de %d", num1, num2);
    if( num1 < num2 )
        printf( "%d é menor que %d", num1, num2);
    if( num1 > num2 )
        printf( "%d é maior que %d", num1, num2);
    if( num1 <= num2)
        printf( "%d é menor ou igual que %d", num1, num2);
    if( num1 >= num2)
    printf( "%d é maior ou igual que %d", num1, num2); 

    return 0; /* Indica que o programa foi bem-sucedido */
}