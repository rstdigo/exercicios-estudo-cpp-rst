#include <iostream>

int main(int argc, char const *argv[])
{
    int opcoes = 0;
    float notaUm = 0, notaDois = 0, notaTres = 0, mediaAritmetica = 0, mediaPonderada = 0;

    while (opcoes != 3)
    {
        std::cout << "Digite uma opção: 1 - Média aritmética, 2 - Média ponderada, 3 - Sair" << "\n";
        std::cin >> opcoes;

        switch (opcoes)
        {
        case 1:
            std::cout << "digite a primeira nota: " << "\n";
            std::cin >> notaUm;
            std::cout << "digite a segunda nota: " << "\n";
            std::cin >> notaDois;
            mediaAritmetica = (notaUm + notaDois) / 2;
            std::cout << "a média das duas notas é: " << mediaAritmetica << "\n";
            break;
        case 2:
            std::cout << "digite a primeira nota: " << "\n";
            std::cin >> notaUm;
            std::cout << "digite a segunda nota: " << "\n";
            std::cin >> notaDois;
            std::cout << "digite a terceira nota: " << "\n";
            std::cin >> notaTres;
            mediaPonderada = ((notaUm * 1) + (notaDois * 2) + (notaTres * 3)) / 6;
            std::cout << "a média ponderada das três notas é: " << mediaPonderada << "\n";
            break;
        case 3:
            std::cout << "programa encerrado";
            break;

        default:
            std::cout << "opção inválida" << "\n";
        }
    }

    return 0;
}
