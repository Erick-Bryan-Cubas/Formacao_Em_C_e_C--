#include <stdio.h>
#include <math.h>

int mediaVeiculosHora(int tamanho, int veiculos[]) {
  int i, soma = 0;
  for (i = 0; i < tamanho; i++) {
    soma += veiculos[i];
  }
  
  double media = (double)soma / tamanho;
  int mediaArredondada = (int)round(media);
  
  return mediaArredondada;
}

int main() {
    int tamanho, i;

    scanf("%d", &tamanho);

    int veiculos[tamanho];
    for (i = 0; i < tamanho; i++) {
      scanf("%d", &veiculos[i]);
    }

    int media = mediaVeiculosHora(tamanho, veiculos);
    printf("Média de veículos por hora: %d\n", media);
    
    return 0;
}