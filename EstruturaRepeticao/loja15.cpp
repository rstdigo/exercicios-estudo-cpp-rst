#include <iostream>

int main(int argc, char const *argv[])
{
    char nomeCliente[50];
    float compra;
    float bonus;
    int numeroCliente = 0;
    do
    {
        std::cout << "digite o nome do cliente" << "\n";
        std::cin >> nomeCliente;
        numeroCliente = numeroCliente + 1;
        std::cout << "valor da compra: " << "\n";
        std::cin >> compra;
        if (compra <= 1000)
        {
            bonus = 0.10 * compra;
            std::cout << "o bonus é: " << bonus << "\n";
        }
        else
        {
            bonus = 0.15 * compra;
            std::cout << "o bonus é: " << bonus << "\n";
        }

    } while (numeroCliente < 15);

    return 0;
}
