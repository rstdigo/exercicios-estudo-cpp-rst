#include<iostream>

int main(int argc, char *argv[])
{
  int i = 0;
  int auxiliar = 0;
  int posicoes[16] = {0};

  std::cout << "Digite as 16 posições :" << "\n";

  for (i = 0; i < 16; i++) {
    std::cin >> posicoes[i] ;
  }
  for (i = 0; i < 8; i++) {
    auxiliar = posicoes[i];
    posicoes[i] = posicoes[i + 8];
    posicoes[i + 8] = auxiliar;
  }
  std::cout << "O vetor obtido de trocar os 8 primeiros valores: " << "\n";
  for (size_t i = 0; i < 16; i++) {
    std::cout << posicoes[i] << "\n";
  }
  
  return 0;
}
