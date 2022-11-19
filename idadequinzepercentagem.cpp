#include <iostream>

int main(int argc, char const *argv[])
{
    int idade, pessoas = 0;
    int primeiraFaixa = 0;
    int segundaFaixa = 0;
    int terceiraFaixa = 0;
    int quartaFaixa = 0;
    int quintaFaixa = 0;

    do
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        pessoas = pessoas + 1;
        if (idade <= 15)
        {
            primeiraFaixa++;
        }
        if (idade >= 16 && idade <= 30)
        {
            segundaFaixa++;
        }
        if (idade >= 31 && idade <= 45)
        {
            terceiraFaixa++;
        }
        if (idade >= 46 && idade <= 60)
        {
            quartaFaixa++;
        }
        if (idade > 60)
        {
            quintaFaixa++;
        }

    } while (pessoas < 15);
    std::cout << "pessoas na primeira faixa: " << primeiraFaixa << "\n";
    std::cout << "pessoas na segunda faixa: " << segundaFaixa << "\n";
    std::cout << "pessoas na terceira faixa: " << terceiraFaixa << "\n";
    std::cout << "pessoas na quarta faixa: " << quartaFaixa << "\n";
    std::cout << "pessoas na quinta faixa: " << quintaFaixa << "\n";
    std::cout << "percentagem primeira faixa: " << 100 * primeiraFaixa / 15 << "\n";
    std::cout << "percentagem primeira faixa: " << 100 * quintaFaixa / 15 << "\n";

    return 0;
}
