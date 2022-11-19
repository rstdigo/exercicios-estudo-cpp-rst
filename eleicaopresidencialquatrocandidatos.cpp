#include <iostream>

int main(int argc, char const *argv[])
{
    int codigo = 99, totalVotosCandidatoUm = 0, totalVotosCandidatoDois = 0, totalVotosCandidatoTres = 0, totalVotosCandidatoQuatro = 0, totalNulo = 0, totalBranco = 0, percentagemNuloTotal = 0, percentagemBrancoTotal = 0, totalVotos = 0;

    while (codigo != 0)
    {
        std::cout << "Digite o número do candidato, 1 - 2 - 3 - 4 ou nulo - 5 ou branco 6: " << "\n";
        std::cin >> codigo;
        totalVotos++;
        if (codigo == 1)
        {
            totalVotosCandidatoUm++;
        }
        if (codigo == 2)
        {
            totalVotosCandidatoDois++;
        }
        if (codigo == 3)
        {
            totalVotosCandidatoTres++;
        }
        if (codigo == 4)
        {
            totalVotosCandidatoQuatro++;
        }
        if (codigo == 5)
        {
            totalNulo++;
        }
        if (codigo == 6)
        {
            totalBranco++;
        }
    }
    std::cout << "Total de votos - Candidato 1: " << totalVotosCandidatoUm << " - "
              << "Candidato 2: " << totalVotosCandidatoDois << " - "
              << "Candidato 3: " << totalVotosCandidatoTres << " - "
              << "Candidato 4: " << totalVotosCandidatoQuatro << "\n";
    std::cout << "Total de votos nulo: " << totalNulo << "\n";
    std::cout << "Total de votos branco: " << totalBranco << "\n";
    std::cout << "Percentagem de votos nulo: " << 100 * totalNulo / totalVotos << "\n";
    std::cout << "Percentagem de votos branco: " << 100 * totalBranco / totalVotos << "\n";

    return 0;
}
