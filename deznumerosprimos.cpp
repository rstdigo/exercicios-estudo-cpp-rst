#include <iostream>

int main(int argc, char const *argv[])
{
    int numero = 0, numeroTotal = 0, somaPares = 0, somaPrimos = 0, i = 0, numeroPrimo = 0;

    for (numeroTotal = 0; numeroTotal < 10; numeroTotal++)
    {
        std::cout << "digite um número: " << "\n";
        std::cin >> numero;
        if (numero % 2 == 0)
        {
            somaPares = somaPares + numero;
        }
        for (i = 1; i <= numero; i++)
        {
            if (numero % i == 0)
            {
                somaPrimos++;
            }
            if (somaPrimos == 2)
            {
                numeroPrimo = numeroPrimo + numero;
            }
        }
    }
    std::cout << "soma dos números pares: " << somaPares << "\n";
    std::cout << "soma dos números primos: " << numeroPrimo << "\n";

    return 0;
}
