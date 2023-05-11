#include <stdio.h>

char* verificaDistancia(int distancia) {
  if (distancia <= 10) {
    return "O robô está próximo!";
  } else {
    return "O robô está longe!";
  }
}

int main() {
  int distancia;

  // Ler a entrada com a função "scanf" e atribuir à "distancia".
  scanf("%d", &distancia);
  
  // Imprimir a saída usando a função "verificaDistancia".
  printf("%s", verificaDistancia(distancia));
    
  return 0;
}
