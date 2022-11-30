#include <iostream>

int main(int argc, char *argv[])
{
  int posicoes[40];
  int i;

  for (i = 0; i < 40; i++) {
    std::cout << "Digite um valor: " << "\n";
    std::cin >> posicoes[i];

    if (posicoes[i] < 0) {
      posicoes[i] = 0;
      std::cout << "Valor negativo atribuído para zero" << "\n";
    }
  }
  
  return 0;
}
