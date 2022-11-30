#include <iostream>

int main(int argc, char const *argv[])
{
  int dia[7];
  int media = 0, soma = 0, maioresDaMedia = 0, i = 0;

  for (i = 0; i < 7; i++)
    {
      std::cout << "Digite a temperatura do dia: "  << "\n";
      std::cin >> dia[i];
    }
  for (i = 0; i < 7; i++)
    {
      soma = soma + dia[i];
    }
  media = soma / 7;
  for (i = 0; i < 7; i++)
    {
      if (dia[i] > media)
        {
	  maioresDaMedia++;
        }
    }

  std::cout << "A média de temperatura é: " << media << "\n";
  std::cout << "Existem " << maioresDaMedia << " temperaturas maiores que a média" << "\n";

  return 0;
}
