#include <iostream>

int main(int argc, char const *argv[])
{
    int idade = 0, peso = 0, somaPeso110 = 0, somaPeso1120 = 0, somaPeso2130 = 0, somaPeso31 = 0, mediaPeso110 = 0, mediaPeso1120 = 0, mediaPeso2130 = 0, mediaPeso31 = 0, i = 0;

    for (i = 0; i < 15; i++)
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        std::cout << "digite o peso: " << "\n";
        std::cin >> peso;
        if ((idade >= 1) && (idade <= 10))
        {
            somaPeso110 = somaPeso110 + peso;
        }
        if ((idade >= 11) && (idade <= 20))
        {
            somaPeso1120 = somaPeso1120 + peso;
        }
        if ((idade >= 21) && (idade <= 30))
        {
            somaPeso2130 = somaPeso2130 + peso;
        }
        if (idade >= 31)
        {
            somaPeso31 = somaPeso31 + peso;
        }
    }
    mediaPeso110 = somaPeso110 / i;
    mediaPeso1120 = somaPeso1120 / i;
    mediaPeso2130 = somaPeso2130 / i;
    mediaPeso31 = somaPeso31 / i;
    std::cout << "a média dos pesos entre 1 e 10 anos é: " << mediaPeso110 << "\n";
    std::cout << "a média dos pesos entre 11 e 20 anos é: " << mediaPeso1120 << "\n";
    std::cout << "a média dos pesos entre 21 e 30 anos é: " << mediaPeso2130 << "\n";
    std::cout << "a média dos pesos maior que 31 anos é: " << mediaPeso31 << "\n";

    return 0;
}
