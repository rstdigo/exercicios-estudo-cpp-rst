#include <iostream>

int main(int argc, char *argv[])
{
  int posicoes[40];
  int valoresPares;
  int i;

  for (i = 0; i < 40; i++) {
    std::cin >> posicoes[i];
    if (posicoes[i] % 2 == 0) {
      valoresPares++;
    }
  }
  
  std::cout << "A quantidade de valores pares no array é: "<< valoresPares << "\n";

  return 0;
}
