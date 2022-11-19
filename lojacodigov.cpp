#include <iostream>

int main(int argc, char const *argv[])
{
    char codigo;
    int transacoes = 0;
    float totalVista = 0, totalPrazo = 0, totalEfetuada = 0, valorPrimeiraPrestacao = 0, valor = 0;

    for (transacoes = 0; transacoes < 15; transacoes++)
    {
        std::cout << "digite o código: " << "\n";
        std::cin >> codigo;
        std::cout << "digite o valor da transação: "  << "\n";
        std::cin >> valor;
        if (codigo == 'v')
        {
            totalVista = totalVista + valor;
        }
        if (codigo == 'p')
        {
            totalPrazo = totalPrazo + valor;
        }
    }
    std::cout << "valor total à vista: " << totalVista << "\n";
    std::cout << "valor total a prazo: " << totalPrazo << "\n";
    totalEfetuada = totalVista + totalPrazo;
    std::cout << "valor total: " << totalEfetuada << "\n";
    valorPrimeiraPrestacao = totalPrazo / 3;
    std::cout << "valor prestação: " << valorPrimeiraPrestacao << "\n";

    return 0;
}
