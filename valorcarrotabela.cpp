#include <iostream>

int main(int argc, char const *argv[])
{
    float valorCarro = 0, precoFinal = 0, valorParcela = 0, percentagem = 3;
    int quantidadeParcela = 6;
    std::cout << "digite o valor do carro: " << "\n";
    std::cin >> valorCarro;
    std::cout << "PARCELAS - PREÇO FINAL - VALOR PARCELAS" << "\n";
    do
    {
        precoFinal = valorCarro + (percentagem / 100 * valorCarro);
        valorParcela = precoFinal / quantidadeParcela;
        std::cout << quantidadeParcela << " - " << precoFinal << " - " << valorParcela << "\n";
        quantidadeParcela = quantidadeParcela + 6;
        percentagem = percentagem + 3;

    } while (quantidadeParcela < 60);
    std::cout << "valor à vista: " << valorCarro - (0.20 * valorCarro) << "\n";

    return 0;
}
