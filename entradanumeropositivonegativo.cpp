#include <iostream>

int main(int argc, char const *argv[])
{
    int numero = 0, entradaLista = 99999, somaParcialNegativo = 0, somaParcialPositivo = 0, totalSoma = 0, somaDasParciais = 0;

    while (entradaLista = !0)
    {
        std::cout << "digite um número: " << "\n";
        std::cin >> numero;
        totalSoma++;
        if (numero == 0)
        {
            break;
        }
        if (numero > 0)
        {
            somaParcialPositivo = somaParcialPositivo + numero;
        }
        if (numero < 0)
        {
            somaParcialNegativo = somaParcialNegativo + numero;
        }
    }
    std::cout << "a soma dos números positvos é: " << somaParcialPositivo << "\n";
    std::cout << "a soma dos números positivos é " << somaParcialNegativo << "\n";
    somaDasParciais = somaParcialPositivo + somaParcialNegativo;
    std::cout << "a soma total é: " << somaDasParciais << "\n";

    return 0;
}
