#include <iostream>

int main(int argc, char const *argv[])
{
    int idade, pessoas = 0, pessoasAdultas = 0;
    int idadeMaior = 18;

    do
    {
        std::cout << "digite sua idade: " << "\n";
        std::cin >> idade;
        pessoas = pessoas + 1;
        if (idade >= idadeMaior)
        {
            pessoasAdultas = pessoasAdultas + 1;
        }

    } while (pessoas < 10);
    std::cout << "quantidade de adultos: " << pessoasAdultas << "\n";

    return 0;
}
