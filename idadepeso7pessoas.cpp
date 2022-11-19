#include <iostream>

int main(int argc, char const *argv[])
{
    int totalPesssoas = 0, idade = 0, peso = 0, quantidadePeso = 0, quantidadePessoas = 0, mediaIdade = 0, somaIdade = 0;

    for (totalPesssoas = 0; totalPesssoas < 7; totalPesssoas++)
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        std::cout << "digite o peso em kgs: "  << "\n";
        std::cin >> peso;
        if (peso > 90)
        {
            quantidadePeso = quantidadePeso + 1;
        }
        somaIdade = somaIdade + idade;
    }
    std::cout << "a quantidade de pessoas com mais de 90kgs: " << quantidadePeso << "\n";
    mediaIdade = somaIdade / totalPesssoas;
    std::cout << "a média das idades é: " << mediaIdade << "\n";

    return 0;
}
