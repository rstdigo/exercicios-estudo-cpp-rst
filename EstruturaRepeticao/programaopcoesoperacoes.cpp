#include <iostream>

int main(int argc, char const *argv[])
{
    int opcoes = 0;
    float primeiroNumero = 0, segundoNumero = 0, resultado = 0;

    while (opcoes != 5)
    {
        std::cout << "Digite uma opção: 1 - soma, 2 - subtração, 3 - multiplicacão, 4 - divisão, 5 - encerrar" << "\n";
        std::cin >> opcoes;

        switch (opcoes)
        {
        case 1:
            std::cout << "digite o primeiro número: " << "\n";
            std::cin >> primeiroNumero;
            std::cout << "digite o segundo número: " << "\n";
            std::cin >> segundoNumero;
            resultado = primeiroNumero + segundoNumero;
            std::cout << "a soma dos números é: " << resultado << "\n";
            break;
        case 2:
            std::cout << "digite o maior número: " << "\n";
            std::cin >> primeiroNumero;
            std::cout << "digite o menor número: " << "\n";
            std::cin >> segundoNumero;
            resultado = primeiroNumero - segundoNumero;
            std::cout << "a subtração dos números é " << resultado << "\n";
            break;
        case 3:
            std::cout << "digite o primeiro número: " << "\n";
            std::cin >> primeiroNumero;
            std::cout << "digite o segundo número: " << "\n";
            std::cin >> segundoNumero;
            resultado = primeiroNumero * segundoNumero;
            std::cout << "a multiplicação dos números é " << resultado << "\n";
        case 4:
            std::cout << "digite o maior número: " << "\n";
            std::cin >> primeiroNumero;
            std::cout << "digite o menor número: " << "\n";
            std::cin >> segundoNumero;
            resultado = primeiroNumero / segundoNumero;
            std::cout << "a divisão dos números é " << resultado << "\n";
        case 5:
            std::cout << "programa encerrado";
            break;

        default:
            std::cout << "opção inválida" << "\n";
        }
    }

    return 0;
}
