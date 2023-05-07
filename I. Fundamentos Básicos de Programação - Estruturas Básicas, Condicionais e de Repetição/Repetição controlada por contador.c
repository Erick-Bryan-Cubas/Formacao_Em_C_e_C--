/* Média de uma turma de 40 alunos usando repetição controlada por contador */

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "");
    SetConsoleTitle(" Repetição controlada por contador");

    int contador;
    float nota, total, media;

    /* fase de inicialização */
    total = 0;
    contador = 1;

    /* fase de processamento */
    while (contador <= 4){
        printf("Digite a nota: ");
        scanf("%f", &nota);
        total = total + nota;
        contador = contador + 1;
    }

    /* fase de conclusão */
    media = total/40;
    printf(" A média da turma é %f.1\n", media);
    return 0; /* Indica que o programa terminou satisfatoriamente */

}