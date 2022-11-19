#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 0, numeroPessoasSim = 0, numeroPessoasNao = 0, mulheresSim = 0, numeroHomens = 0, percentagemHomensNao = 0;
    char opiniao, sexo;
    for (i = 0; i < 10; i++)
    {
        std::cout << "digite o sexo, M ou F: " << "\n";
        std::cin >> sexo;
        std::cout << "digite sua opinião, S - Sim ou N - Não: " << "\n";
        std::cin >> opiniao;
        if (sexo == 'M')
        {
            numeroHomens++;
        }

        if (opiniao == 'S')
        {
            numeroPessoasSim++;
        }
        if (opiniao == 'N')
        {
            numeroPessoasNao++;
        }
        if ((sexo == 'F') && (opiniao == 'S'))
        {
            mulheresSim++;
        }
        if ((sexo == 'M') && (opiniao == 'N'))
        {
            percentagemHomensNao++;
        }
    }
    std::cout << "número de pessoas que respondeu sim: " << numeroPessoasSim << "\n";
    std::cout << "número de pessoas que respondeu não: " << numeroPessoasNao << "\n";
    std::cout << "número de mulheres que respondeu sim: " << mulheresSim << "\n";
    std::cout << "percentagem de homens que respondeu não entre todos os homens: " << 100 * percentagemHomensNao / numeroHomens << "\n";

    return 0;
}
