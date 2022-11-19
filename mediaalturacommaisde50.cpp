#include <iostream>

int main(int argc, char const *argv[])
{
    int idade = 999, altura = 0, somaAltura = 0, mediaAltura = 0, pessoas = 0;

    while (idade > 0)
    {
        std::cout << "Digite a idade: " << "\n";
        std::cin >> idade;
        if (idade <= 0)
        {
            break;
        }
        std::cout << "Digite a altura em cm: " << "\n";
        std::cin >> altura;
        pessoas++;

        if (idade > 50)
        {
            somaAltura = somaAltura + altura;
        }
    }
    mediaAltura = somaAltura / pessoas;
    std::cout << "média da altura das pessoas com mais de 50 anos: " << mediaAltura << "cm" << "\n";

    return 0;
}
