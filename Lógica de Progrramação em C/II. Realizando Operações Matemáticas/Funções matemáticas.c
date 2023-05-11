#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    double x, resultado;

    // Exemplo de uso da função pow (potência)
    x = 2.0;
    resultado = pow(x, 3); // 2^3 = 8
    printf("pow(%.1f, 3) = %.1f\n", x, resultado);

    // Exemplo de uso da função sin (seno)
    x = 30.0;
    resultado = sin(x * (M_PI / 180)); // Seno de 30 graus (0.5)
    printf("sin(30 graus) = %.1f\n", resultado);

    // Exemplo de uso da função sqrt (raiz quadrada)
    x = 9.0;
    resultado = sqrt(x); // Raiz quadrada de 9 (3)
    printf("sqrt(%.1f) = %.1f\n", x, resultado);

    // Exemplo de uso da função tan (tangente)
    x = 45.0;
    resultado = tan(x * (M_PI / 180)); // Tangente de 45 graus (1)
    printf("tan(45 graus) = %.1f\n", resultado);

    return 0;
}
