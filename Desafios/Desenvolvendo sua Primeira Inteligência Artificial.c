#include <stdio.h>

int main() {
  float peso, altura;
  char temPelos, ehMamifero;

  scanf("%f", &peso);
  scanf("%f", &altura);
  scanf(" %c", &temPelos);
  scanf(" %c", &ehMamifero);

  if (peso >= 2000 && altura >= 300) {
    printf("O animal é um elefante!");
  } else if (ehMamifero == 's' && temPelos == 's' && altura == 150) {
    printf("O animal é um cavalo!");
  } else if (ehMamifero == 's' && temPelos == 's' && altura <= 100) {
    printf("O animal é um cachorro!");
  } else if (ehMamifero == 'n' && temPelos == 'n') {
    printf("O animal é uma serpente!");
  } else if (ehMamifero == 's' && temPelos == 'n') {
    printf("O animal é uma tartaruga!");
  } else {
    printf("Não foi possível classificar o animal!");
  }

  return 0;
}
