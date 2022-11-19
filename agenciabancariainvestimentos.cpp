#include <iostream>

int main(int argc, char const *argv[])
{
    long opcoes = 0, codigoCliente = 99999999999;
    float valor = 0, rendimentoMensal = 0, totalInvestido = 0, totalJuros = 0;

    while (codigoCliente != 0)
    {
        std::cout << "Digite o código do cliente: " << "\n";
        std::cin >> codigoCliente;
        if (codigoCliente <= 0)
        {
            break;
        }

        std::cout << "Digite uma das opções de investimentos 1 - Poupança, 2 - Poupança plus, 3 - Fundos de renda fixa: " << "\n";
        std::cin >> opcoes;
        switch (opcoes)
        {
        case 1:
            std::cout << "Digite o valor do investimento: " << "\n";
            std::cin >> valor;
            rendimentoMensal = valor + (valor * 0.015);
            std::cout << "O valor mensal é: " << rendimentoMensal << "\n";
            totalInvestido = rendimentoMensal * 12;
            totalJuros = (valor * 0.04) * 12;
            std::cout << "O total investido é: " << totalInvestido << "\n";
            std::cout << "Total de juros pagos: " << totalJuros << "\n";
            break;
        case 2:
            std::cout << "Digite o valor do investimento: " << "\n";
            std::cin >> valor;
            rendimentoMensal = valor + (valor * 0.02);
            std::cout << "O valor mensal é: " << rendimentoMensal << "\n";
            totalInvestido = rendimentoMensal * 12;
            totalJuros = (valor * 0.04) * 12;
            std::cout << "O total investido é: " << totalInvestido << "\n";
            std::cout << "Total de juros pagos: " << totalJuros << "\n";
            break;
        case 3:
            std::cout << "Digite o valor do investimento: " << "\n";
            std::cin >> valor;
            rendimentoMensal = valor + (valor * 0.04);
            std::cout << "O valor mensal é: " << rendimentoMensal << "\n";
            totalInvestido = rendimentoMensal * 12;
            totalJuros = (valor * 0.04) * 12;
            std::cout << "O total investido é: " << totalInvestido << "\n";
            std::cout << "Total de juros pagos: " << totalJuros << "\n";
            break;

        default:
            std::cout << "opção inválida" << "\n";
            break;
        }
    }

    return 0;
}
