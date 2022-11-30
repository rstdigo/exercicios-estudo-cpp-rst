#include <iostream>

int main()
{
  int primeiro[10];
  int segundo[10];
  int terceiro[10];
  int somavetores[10]; 
  int finalvetores[10];
  int i;

  for (i = 0; i < 10; ++i) {
    std::cout << "digite um valor para o primeiro vetor: " << "\n";
    std::cin >> primeiro[i];
  }
  for (i = 0; i < 10; ++i) {
    std::cout << "digite um valor para o segundo vetor: " << "\n";
    std::cin >> segundo[i];
  }
  for (i = 0; i < 10; ++i) {
    std::cout << "digite um valor o terceiro vetor: " << "\n";
    std::cin >> terceiro[i];
  }
  for (i = 0; i < 10; ++i) {
    somavetores[i] = primeiro[i] + segundo[i];
    finalvetores[i] = somavetores[i] + terceiro[i];
    std::cout << "o vetor acumulado é: " << finalvetores[i] << "\n";
  }
  
  return 0;
}
