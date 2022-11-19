#include <iostream>

int main(int argc, char const *argv[])
{
    float precoIngresso, precoIngressoLucroMaximo, despesa, lucro, lucroMaximo;
    int quantidadeIngresso, quantidadeIngressoLucroMaximo;

    precoIngresso = 5;
    despesa = 200;
    quantidadeIngresso = 120;
    lucro = (quantidadeIngresso * precoIngresso) - despesa;
    precoIngressoLucroMaximo = precoIngresso;
    lucroMaximo = lucro;
    quantidadeIngressoLucroMaximo = quantidadeIngresso;
    do
    {
        std::cout << precoIngresso << "\n";
        std::cout << "venda total: " << quantidadeIngresso << "\n";
        std::cout << "despesa: " << despesa << "\n";
        std::cout << "lucro: " << lucro << "\n";
        precoIngresso = precoIngresso + 0.50;
        quantidadeIngresso = quantidadeIngresso + 26;
        lucro = (quantidadeIngresso * precoIngresso) - despesa;
        if (lucro > lucroMaximo)
        {
            precoIngressoLucroMaximo = precoIngresso;
            lucroMaximo = lucro;
            quantidadeIngressoLucroMaximo = quantidadeIngresso;
        }
        std::cout << "maior lucro: " << precoIngressoLucroMaximo << "\n";
        std::cout << "venda total: " << quantidadeIngressoLucroMaximo << "\n";
        std::cout << "despesa: " << despesa << "\n";
        std::cout << "lucro: " << lucroMaximo << "\n";
    } while (precoIngresso <= 5);

    return 0;
}
