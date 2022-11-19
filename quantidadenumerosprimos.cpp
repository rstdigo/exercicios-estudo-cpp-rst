#include <iostream>

int main(int argc, char const *argv[])
{
    int numero = 0, numeroTotal = 0, numeroPrimo = 0, i = 0, numeroPrimoSoma = 0;
    for (numeroTotal = 0; numeroTotal < 10; numeroTotal++)
    {
        std::cout << "digite um número: " << "\n";
        std::cin >> numero;
        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                numeroPrimoSoma++;
            }
            if (numeroPrimoSoma == 2)
            {
                numeroPrimo++;
            }
        }
    }
    std::cout << "quantidade números primos: " << numeroPrimo << "\n";

    return 0;
}
