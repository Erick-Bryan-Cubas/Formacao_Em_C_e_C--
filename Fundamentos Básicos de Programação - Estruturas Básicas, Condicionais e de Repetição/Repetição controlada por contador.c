/* M�dia de uma turma de 40 alunos usando repeti��o controlada por contador */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle(" Repeti��o controlada por contador");

    int contador;
    float nota, total, media;

    /* fase de inicializa��o */
    total = 0;
    contador = 1;

    /* fase de processamento */
    while (contador <= 4){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        total = total + nota;
        contador = contador + 1;
    }

    /* fase de conclus�o */
    media = total/40;
    printf(" A m�dia da turma � %f.1\n", media);
    return 0; /* Indica que o programa terminou satisfatoriamente */

}