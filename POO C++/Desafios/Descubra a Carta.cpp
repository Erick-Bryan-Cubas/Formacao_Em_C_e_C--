#include <iostream>
#include <string>
using namespace std;

enum Naipe {
  Paus = 0, Ouros = 1, Copas = 2, Espadas = 3
};

enum Valor {
  As = 1, Valete = 2, Dama = 3, Rei = 4
};

class Carta {
private:
  Naipe naipe;
  Valor valor;

public:
  Carta(Naipe n, Valor v) {
    naipe = n;
    valor = v;
  }

  Naipe getNaipe() {
    return naipe;
  }

  Valor getValor() {
    return valor;
  }
};

int main() {
  int valorEscolhido, naipeEscolhido;

  cin >> valorEscolhido;
  cin >> naipeEscolhido;

  // Criação da carta escolhida pelo usuário usando "static_cast" para converter as escolhas.
  Carta cartaEscolhida(static_cast<Naipe>(naipeEscolhido), static_cast<Valor>(valorEscolhido));

  string nomeNaipe;
  string nomeValor;

  // Switch case para obter o nome do naipe escolhido
  switch (cartaEscolhida.getNaipe()) {
    case Paus:
      nomeNaipe = "Paus";
      break;
    case Ouros:
      nomeNaipe = "Ouros";
      break;
    case Copas:
      nomeNaipe = "Copas";
      break;
    case Espadas:
      nomeNaipe = "Espadas";
      break;
    default:
      nomeNaipe = "Naipe inválido";
      break;
  }

  // Switch case para obter o nome do valor escolhido
  switch (cartaEscolhida.getValor()) {
    case As:
      nomeValor = "Ás";
      break;
    case Valete:
      nomeValor = "Valete";
      break;
    case Dama:
      nomeValor = "Dama";
      break;
    case Rei:
      nomeValor = "Rei";
      break;
    default:
      nomeValor = "Valor inválido";
      break;
  }

  // Impressão da carta escolhida
  cout << "Carta escolhida: " << nomeValor << " de " << nomeNaipe << endl;

  return 0;
}
