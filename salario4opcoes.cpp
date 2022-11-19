#include <iostream>

int main(int argc, char const *argv[])
{
    int opcoes = 0;
    float salario = 0, novoSalario = 0, feriasSalario = 0, mesesDeTrabalho = 0, salarioDecimoTerceiro = 0;

    while (opcoes != 4)
    {
        std::cout << "Digite uma opção, 1 - novo salário, 2 - férias, 3 - décimo terceiro, 4 - sair: " << "\n";
        std::cin >> opcoes;
        switch (opcoes)
        {
        case 1:
            std::cout << "Digite o salário: " << "\n";
            std::cin >> salario;
            if (salario <= 350)
            {
                novoSalario = salario + (salario * 0.15);
                std::cout << "o novo salário é: " << novoSalario << "\n";
            }
            if ((salario > 350) && (salario <= 600))
            {
                novoSalario = salario + (salario * 0.10);
                std::cout << "o novo salário é: " << novoSalario << "\n";
            }
            if (salario > 600)
            {
                novoSalario = salario + (salario * 0.05);
                std::cout << "o novo salário é: " << novoSalario << "\n";
            }

            break;
        case 2:
            std::cout << "Digite o salário: " << "\n";
            std::cin >> salario;
            feriasSalario = salario + (salario / 3);
            std::cout << "o valor do salário de férias: " << feriasSalario << "\n";
            break;
        case 3:
            std::cout << "Digite o salário: " << "\n";
            std::cin >> salario;
            std::cout << "Digite o número de meses trabalhado (máximo 12): " << "\n";
            std::cin >> mesesDeTrabalho;
            salarioDecimoTerceiro = salario + (salario * (mesesDeTrabalho / 12));
            std::cout << "o valor do décimo terceiro é: " << salarioDecimoTerceiro << "\n";
            break;
        case 4:
            std::cout << "Programa encerrado" << "\n";
            break;

        default:
            std::cout << "opção inválida" << "\n";
            break;
        }
    }

    return 0;
}
