#include <stdio.h>
#include <string.h>

int main() {
char mensagem[100];

//O padrão "%[^\n]" lê o texto digitado até a tecla "enter", armazenando o texto na variável.
scanf("%[^\n]", mensagem);

//A atribuição inicial da variável palavra usa a função strtok() para obter a primeira
//palavra da string, com base no caractere de separação especificado.
char* palavra = strtok(mensagem, " ");

while (palavra != NULL) {
//Imprime a palavra duplicando-a e acrescentando um espaço em branco.
printf("%s %s ", palavra, palavra);

//Obtém a próxima palavra usando a função "strtok".
palavra = strtok(NULL, " ");
}

return 0;
}