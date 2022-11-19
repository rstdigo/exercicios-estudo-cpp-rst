#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 0, opiniao = 0, idade = 0, somaIdade = 0, mediaIdade = 0, quantidadePessoasRegular = 0, percentagem = 0;
    for (i = 0; i < 15; i++)
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        std::cout << "digite a opinião do filme; ótimo - 3, bom - 2, regular - 1: " << "\n";
        std::cin >> opiniao;
        if (opiniao == 3)
        {
            somaIdade = somaIdade + idade;
        }
        if (opiniao == 1)
        {
            quantidadePessoasRegular++;
        }
        if (opiniao == 2)
        {
            percentagem++;
        }
    }
    mediaIdade = somaIdade / i;
    std::cout << "a média das idades das pessoas que responderam ótimo: " << mediaIdade << "\n";
    std::cout << "quantidade de pessoas que respondeu regular: " << quantidadePessoasRegular << "\n";
    std::cout << "percentagem de pessoas que respondeu bom: " << 100 * percentagem / 15 << "\n";

    return 0;
}
