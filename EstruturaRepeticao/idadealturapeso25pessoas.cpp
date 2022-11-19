#include <iostream>

int main(int argc, char const *argv[])
{
    int pessoas = 0, idade = 0, altura = 0, quantidadeIdadeSuperior = 0;
    float peso = 0, quantidadeAltura = 0, percentagemInferior = 0, mediaAltura = 0, somaAlturaPessoas = 0;

    for (pessoas = 0; pessoas < 25; pessoas++)
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        std::cout << "digite a altura em cm: " << "\n";
        std::cin >> altura;
        std::cout << "digite o peso em kgs: " << "\n";
        std::cin >> peso;
        if (idade > 50)
        {
            quantidadeIdadeSuperior = quantidadeIdadeSuperior + 1;
        }
        if (idade >= 10 && idade <= 20)
        {
            somaAlturaPessoas = somaAlturaPessoas + altura;
            quantidadeAltura = quantidadeAltura + 1;
        }
        if (peso < 40)
        {
            percentagemInferior = percentagemInferior + 1;
        }
    }
    std::cout << "quantidade de pessoas acima de 50 anos: " << quantidadeIdadeSuperior << "\n";
    mediaAltura = somaAlturaPessoas / quantidadeAltura;
    std::cout << "média das alturas das pessoas entre 10 e 20 anos: " << mediaAltura << "\n";
    std::cout << "a percentagem de pessoas com peso inferior a 40kgs: " << 100 * percentagemInferior / 25 << "\n";

    return 0;
}
