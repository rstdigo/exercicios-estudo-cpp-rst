#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
  char vogais[5];
  int altura[10] = {0};
  std::string meses[12];
  int i = 0;

  for (i = 0; i < 5; i++)
    {
      std::cout << "digite as vogais: " << "\n";
      std::cin >> vogais[i];
    }
  for (i = 0; i < 5; ++i)
    {
      std::cout << "as vogais são " << vogais[i] << "\n";
    }

  for (i = 0; i < 10; i++)
    {
      std::cout << "digite a altura: " << "\n";
      std::cin >> altura[i];
    }
  for (i = 0; i < 10; ++i)
    {
      std::cout << "a altura das pessoas são: " << altura[i] << "\n";
    }

  for (i = 0; i < 12; i++)
    {
      std::cout << "digite os meses do ano: " << "\n";
      std::cin >> meses[i];
    }
  for (i = 0; i < 12; ++i)
    {
      std::cout << "os meses são: " << meses[i] << "\n";
    }

  return 0;
}
