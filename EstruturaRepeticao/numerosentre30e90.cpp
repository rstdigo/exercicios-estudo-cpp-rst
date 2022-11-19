#include <iostream>

int main(int argc, char const *argv[])
{
    int receberNumero = 0, totalNumeros = 0, quantidadeNumeros = 0;

    for (totalNumeros = 0; totalNumeros < 10; totalNumeros++)
    {
        std::cout << "digite um número: " << "\n";
        std::cin >> receberNumero;
        if ((receberNumero >= 30) && (receberNumero <= 90))
        {
            quantidadeNumeros = quantidadeNumeros + 1;
        }
    }
    std::cout << "a quantidade de números entre 30 e 90 são: " << quantidadeNumeros << "\n";

    return 0;
}
