#include <iostream>

int main(int argc, char *argv[])
{
  int primeiro[20];
  int segundo[20];
  int resultado[20];
  int i;

  for (i = 0; i < 20; ++i) {
    std::cout << "Digite um valor para o primeiro vetor: " << "\n";
    std::cin >> primeiro[i];
  }
  for (i = 0; i < 20; ++i) {
    std::cout << "Digite um valor para o segundo vetor: " << "\n";
    std::cin >> segundo[i];
  }
  for (i = 0; i < 20; ++i) {
    resultado[i] = primeiro[i];
    resultado[++i] = segundo[i];
  }
  for (i = 0; i < 20; ++i) {
    std::cout << "O resultado dos dois vetores é: " << resultado[i] << "\n";
  }
  
  return 0;
}
