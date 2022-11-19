#include <iostream>

int main(int argc, char const *argv[])
{
    float precoCompra = 0, precoVenda = 0, lucroAcao = 0, lucroEmpresa = 0;
    int quantidadeSuperiorMil = 0, quantidadeInferiorDuzentos = 0, totalAcoes = 0;
    char acao;

    while (acao != 'F')
    {
        std::cout << "digite a letra da ação: " << "\n";
        std::cin >> acao;
        if (acao == 'F')
        {
            break;
        }
        std::cout << "Digite o preço da compra: " << "\n";
        std::cin >> precoCompra;
        std::cout << "Digite o preço da venda: " << "\n";
        std::cin >> precoVenda;
        totalAcoes++;
        lucroAcao = precoVenda - precoCompra;
        std::cout << "Ação da empresa: " << acao << "\n";
        std::cout << "Lucro da ação: " << lucroAcao << "\n";
        if (lucroAcao > 1000)
        {
            quantidadeSuperiorMil++;
        }
        if (lucroAcao < 200)
        {
            quantidadeInferiorDuzentos++;
        }
        lucroEmpresa = lucroEmpresa + lucroAcao;
    }
    std::cout << "quantidade de ações com lucro acima de 1000: " << quantidadeSuperiorMil << "\n";
    std::cout << "quantidade de ações com lucro abaixo de 200: " << quantidadeInferiorDuzentos << "\n";
    std::cout << "lucro total da empresa: " << lucroEmpresa << "\n";

    return 0;
}
