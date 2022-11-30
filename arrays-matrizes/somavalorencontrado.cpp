#include <iostream>

int main(int argc, char const *argv[])
{
  int valorX, valorY, i;
  int vetor[12];

  for (i = 0; i < 12; i++)
    {
      std::cout << "Digite o número da posicão: " << "\n";
      std::cin >> vetor[i];
    }
  std::cout << "Posição X: " << "\n";
  std::cin >> valorX;
  std::cout << "Posição Y: " << "\n";
  std::cin >> valorY;
  std::cout << "O número contido na posição " << valorX << " é " << vetor[valorX] << " e o número contido na posição " << valorY << " é " << vetor[valorY] << "\n";
  std::cout << vetor[valorX] << " + " << vetor[valorY] << " = " << vetor[valorX] + vetor[valorY] << "\n";

  return 0;
}
