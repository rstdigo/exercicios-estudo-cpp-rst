#include <iostream>

int main(int argc, char const *argv[])
{
    int codigo = 0, totalProdutos = 0;
    float preco = 0, novoPreco = 0, mediaPrecoAumento = 0, mediaPrecoNormal = 0, somaPrecoAumeto = 0, somaPrecoNormal = 0;

    while (codigo >= 0)
    {
        std::cout << "Digite o código do produto: " << "\n";
        std::cin >> codigo;
        if (codigo < 0)
        {
            break;
        }
        std::cout << "Digite o preço de custo: " << "\n";
        std::cin >> preco;
        novoPreco = preco * 0.20;
        totalProdutos++;
        somaPrecoAumeto = somaPrecoAumeto + novoPreco;
        somaPrecoNormal = somaPrecoNormal + preco;
        std::cout << "código do produto: " << codigo << "\n";
        std::cout << "novo preço do produto " << novoPreco << "\n";
    }
    if (totalProdutos)
    {
        mediaPrecoAumento = somaPrecoAumeto / totalProdutos;
    }
    if (totalProdutos)
    {
        mediaPrecoNormal = somaPrecoNormal / totalProdutos;
    }

    std::cout << "média dos preços sem aumento: " << mediaPrecoNormal << "\n";
    std::cout << "média dos preços com aumento: " << mediaPrecoAumento << "\n";

    return 0;
}
