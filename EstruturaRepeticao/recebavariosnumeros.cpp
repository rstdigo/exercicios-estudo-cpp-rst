#include <iostream>

int main(int argc, char const *argv[])
{
    int numero = 999, numeroInferiorTrintaCinco = 0, numeroInferiorCinquenta = 0, somaPositivo = 0, mediaPositivo = 0, percentagemEntreCinquentaECem = 0, percentagemMenorCinquenta = 0, contagemNumeros = 0;

    while (numero > 0)
    {
        std::cout << "digite um número: " << "\n";
        std::cin >> numero;
        if (numero < 0)
        {
            break;
        }
        if (numero < 35)
        {
            numeroInferiorTrintaCinco++;
        }
        if (numero < 50)
        {
            numeroInferiorCinquenta++;
        }

        somaPositivo = somaPositivo + numero;
        contagemNumeros++;
        if ((numero >= 50) && (numero <= 100))
        {
            percentagemEntreCinquentaECem++;
        }
        if ((numero >= 10) && (numero <= 20))
        {
            percentagemMenorCinquenta++;
        }
    }
    std::cout << "a quantidade de números inferiores a 35: " << numeroInferiorTrintaCinco << "\n";
    mediaPositivo = somaPositivo / contagemNumeros;
    std::cout << "a média dos números positivos é: " << mediaPositivo << "\n";
    std::cout << "a percentagem de números entre 50 e 100: " << 100 * percentagemEntreCinquentaECem / contagemNumeros << "\n";
    std::cout << "a percentagem de números entre 10 e 20 entre números menores que 50: " << 100 * percentagemMenorCinquenta / numeroInferiorCinquenta << "\n";

    return 0;
}
