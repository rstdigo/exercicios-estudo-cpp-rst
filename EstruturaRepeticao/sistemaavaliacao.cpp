#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 0, matricula = 0, frequencia = 0, totalReprovados = 0, percentagemReprovadosFrequencia = 0;
    float notaUm = 0, notaDois = 0, notaTres = 0, notaFinal = 0, maiorNota = 0, menoNota = 0;

    for (i = 0; i < 10; i++)
    {
        std::cout << "Digite o número de matrícula: " << "\n";
        std::cin >> matricula;
        std::cout << "Digite a primeira nota: " << "\n";
        std::cin >> notaUm;
        std::cout << "Digite a segunda nota: " << "\n";
        std::cin >> notaDois;
        std::cout << "Digite a terceira nota: " << "\n";
        std::cin >> notaTres;
        std::cout << "digite a frequência: " << "\n";
        std::cin >> frequencia;
        notaFinal = (notaUm + notaDois + notaTres) / 3;
        std::cout << "número de matrícula " << matricula << "\n";
        std::cout << "a nota final é " << notaFinal << "\n";
        if (notaFinal >= 6)
        {
            std::cout << "aprovado" << "\n";
        }
        else
        {
            std::cout << "reprovado" << "\n";
        }
        if (notaFinal < 6)
        {
            totalReprovados++;
        }
        if (frequencia < 40)
        {
            percentagemReprovadosFrequencia++;
        }
    }
    std::cout << "total alunos reprovados: " << totalReprovados << "\n";
    std::cout << "percentagem de alunos reprovados por falta: " << 100 * percentagemReprovadosFrequencia / 10 << "\n";

    return 0;
}
