#include <iostream>

int main(int argc, char const *argv[])
{
    long numero = 0, maiorNumero = 0, menorNumero = 999999999999, entradaLista = 0, numerosNegativosZero = 0, valorNegativo = 0;

    while (entradaLista = !0)
    {
        std::cout << "digite um número inteiro positivo ou digite 0 para encerrar: " << "\n";
        std::cin >> numero;
        if (numero == 0)
        {
            std::cout << "programa encerrado" << "\n";
            break;
        }

        if (numero > 0)
        {
            entradaLista++;
            if (numero > maiorNumero)
            {
                maiorNumero = numero;
            }
            if (numero < menorNumero)
            {
                menorNumero = numero;
            }
        }
        if (numero < 0)
        {
            std::cout << "número negativo não é aceito" << "\n";
            break;
        }
    }
    std::cout << "o maior número é: " << maiorNumero << "\n";
    std::cout << "o menor número é: " << menorNumero << "\n";

    return 0;
}
