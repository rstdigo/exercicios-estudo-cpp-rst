#include <iostream>

int main(int argc, char *argv[])
{
  int posicoes[20];
  int valorX;
  int i;
  bool encontrado;

  std::cout << "Digite um valor inteiro: " << "\n";
  std::cin >> valorX;

  for (i = 0; i < 20; i++) {
    std::cout << "Digite os 20 valores do vetor: " << "\n";
    std::cin >> posicoes[i];
  }
  for (i = 0; i < 20; i++) {
    if (valorX == posicoes[i]) {
      std::cout << "O valor se encontra na posição do vetor:  "<< i << "\n";
      encontrado = true;
      break;
    }
  }
  if (encontrado != true) {
    std::cout << "valor não encontrado no vetor" << "\n";
  }
  
  return 0;
}
