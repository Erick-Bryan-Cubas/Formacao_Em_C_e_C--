#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
  string nome;
  int idade;

public:
  Pessoa(string n, int i) {
    nome = n;
    idade = i;
  }

  string getNome() {
    return nome;
  }

  int getIdade() {
    return idade;
  }
};

int main() {
  string nome;
  int idade;

  cin >> nome;
  cin >> idade;

  Pessoa pessoa(nome, idade);

  // Imprimir a saída formatada corretamente
  cout << "Nome: " << pessoa.getNome() << ", Idade: " << pessoa.getIdade() << endl;

  return 0;
}
