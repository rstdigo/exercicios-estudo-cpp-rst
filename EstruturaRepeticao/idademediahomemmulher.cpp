#include <iostream>

int main(int argc, char const *argv[])
{
    int idade = 0, idadeMediaGrupo = 0, idadeMediaMulher = 0, somaIdadeMulher = 0, idadeMediaHomem = 0, somaIdadeHomem = 0, somaIdade = 0, totalPessoas = 0;
    char sexo;

    for (totalPessoas = 0; totalPessoas < 7; totalPessoas++)
    {
        std::cout << "digite a idade: " << "\n";
        std::cin >> idade;
        std::cout << "digite o sexo F ou M: " << "\n";
        std::cin >> sexo;
        somaIdade = somaIdade + idade;
        if (sexo == 'M')
        {
            somaIdadeHomem = somaIdadeHomem + idade;
        }
        if (sexo == 'F')
        {
            somaIdadeMulher = somaIdadeMulher + idade;
        }
    }
    idadeMediaGrupo = somaIdade / totalPessoas;
    std::cout << "média de idade do grupo: " << idadeMediaGrupo << "\n";
    idadeMediaHomem = somaIdadeHomem / totalPessoas;
    std::cout << "média de idade dos homens: " << idadeMediaHomem << "\n";
    idadeMediaMulher = somaIdadeMulher / totalPessoas;
    std::cout << "média de idade das mulheres: " << idadeMediaMulher << "\n";

    return 0;
}
