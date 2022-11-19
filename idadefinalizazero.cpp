#include <iostream>

int main(int argc, char const *argv[])
{
    int i = 0, idade = 0, mediaIdade = 0, somaIdade = 0;

    do
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        if (idade > 0)
        {
            somaIdade = somaIdade + idade;
            i = i + 1;
        }

    } while (idade != 0);
    if (i > 0)
    {
        mediaIdade = somaIdade / i;
        std::cout << "a média das idades é: " << mediaIdade << "\n";
    }

    return 0;
}
