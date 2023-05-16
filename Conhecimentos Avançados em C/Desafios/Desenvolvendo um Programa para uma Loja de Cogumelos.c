#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    int valor;
} Cogumelo;

int main() {
  Cogumelo cogumelos[] = {
    {"Shitake", 10},
    {"Portobello", 8},
    {"Shimeji", 6},
    {"Champignon", 12},
    {"Funghi", 16},
    {"Porcini", 16}
  };

  char escolha[20];
  scanf("%19s", escolha);

  int indice_escolhido = -1;
  for (int i = 0; i < 6; i++) {
    if (strcmp(escolha, cogumelos[i].nome) == 0) {
      indice_escolhido = i;
      break;
    }
  }

  Cogumelo sugestoes[2];
  int numeroSugestoes = 0;

  for (int i = 0; i < 6; i++) {
    if (cogumelos[i].valor < cogumelos[indice_escolhido].valor) {
      strcpy(sugestoes[numeroSugestoes].nome, cogumelos[i].nome);
      sugestoes[numeroSugestoes].valor = cogumelos[i].valor;
      numeroSugestoes++;
      if (numeroSugestoes == 2) {
        break;
      }
    }
  }

  if (numeroSugestoes == 0) {
    printf("Desculpe, não há sugestões disponíveis.\n");
  } else {
    for (int i = 0; i < numeroSugestoes; i++) {
      printf("%s - Valor: %d\n", sugestoes[i].nome, sugestoes[i].valor);
    }
  }

  return 0;
}
