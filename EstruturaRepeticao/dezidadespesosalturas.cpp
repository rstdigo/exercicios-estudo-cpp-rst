#include <iostream>

int main(int argc, char const *argv[])
{
    int idade = 0, peso = 0, altura = 0, mediaIdade = 0, somaIdade = 0, quantidadePessoas = 0, percentagemPessoas = 0, totalPessoas = 0;

    for (totalPessoas = 0; totalPessoas < 10; totalPessoas++)
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        std::cout << "digite o peso em kgs: " << "\n";
        std::cin >> peso;
        std::cout << "digite a altura em cm: " << "\n";
        std::cin >> altura;
        somaIdade = somaIdade + idade;
        if ((peso > 90) && (altura < 150))
        {
            quantidadePessoas = quantidadePessoas + 1;
        }
        if (((idade >= 10) && (idade <= 30)) && (altura > 190))
        {
            percentagemPessoas = percentagemPessoas + 1;
        }
    }
    mediaIdade = somaIdade / totalPessoas;
    std::cout << "média das idades: " << mediaIdade << "\n";
    std::cout << "quantidade de pessoas com peso maior que 90 e altura menor que 150cm: " << quantidadePessoas << "\n";
    std::cout << "percentagem de pessoas entre 10 e 30 anos com mais de 190cm: " << 100 * percentagemPessoas / 10 << "\n";

    return 0;
}
