#include <iostream>

int main(int argc, char const *argv[])
{
    int peso = 0, idade = 0, altura = 0, totalPessoas = 0, quantidadePessoasIdadePeso = 0, mediaIdade = 0, somaIdade = 0, percentagemOlhosAzuis = 0, quantidadePessoasRuivas = 0;
    char corDosOlhos, corDoCabelo;

    for (totalPessoas = 0; totalPessoas < 20; totalPessoas++)
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        std::cout << "digite o peso em kg: " << "\n";
        std::cin >> peso;
        std::cout << "digite a altura em cm: " << "\n";
        std::cin >> altura;
        std::cout << "digite a cor dos olhos A - azul, P - preto, V - verde, C - castanho: " << "\n";
        std::cin >> corDosOlhos;
        std::cout << "digite a cor do cabelo P - preto, C - castanho, L - louro, R - ruivo: " << "\n";
        std::cin >> corDoCabelo;
        if (corDosOlhos == 'A')
        {
            percentagemOlhosAzuis = percentagemOlhosAzuis + 1;
        }
        if (altura < 150)
        {
            somaIdade = somaIdade + idade;
        }
        if ((idade > 50) && (peso < 60))
        {
            quantidadePessoasIdadePeso = quantidadePessoasIdadePeso + 1;
        }
        if ((corDoCabelo == 'R') && (corDosOlhos != 'A'))
        {
            quantidadePessoasRuivas = quantidadePessoasRuivas + 1;
        }
    }
    std::cout << "pessoas com idade maior que 50 e peso menor que 60: " << quantidadePessoasIdadePeso << "\n";
    mediaIdade = somaIdade / totalPessoas;
    std::cout << "a média das idades das pessoas com altura inferior a 1,50: " << mediaIdade << "\n";
    std::cout << "percentagem de pessoas com olhos azuis: " << 100 * percentagemOlhosAzuis / 20 << "\n";
    std::cout << "pessoas ruivas que não tem olhos azuis: " << quantidadePessoasRuivas << "\n";

    return 0;
}
