#include <iostream>

int main(int argc, char const *argv[])
{
    int numero, tabuada = 0, resultado;

    std::cout << "digite o número para ver a tabuada: " << "\n";
    std::cin >> numero;

    do
    {
        tabuada = tabuada + 1;
        resultado = numero * tabuada;
        std::cout << tabuada << " * " << numero << " = " << resultado << "\n";

    } while (tabuada < 10);

    return 0;
}
