#include <iostream>

int main(int argc, char const *argv[])
{
    int idade = 0, menorIdade = 200, maiorIdade = 0, somaIdade = 0, quantidadeMulheresAteDuzentos = 0, grupo = 0, idadeMenorSalario = 0;
    float salario = 0, somaSalario = 0, mediaSalario = 0, menorSalario = 9999;
    char sexo, sexoMenorSalario;

    while (idade >= 0)
    {

        std::cout << "Digite a idade: " << "\n";
        std::cin >> idade;

        if (idade < 0)
        {
            break;
        }
        somaIdade = somaIdade + idade;
        std::cout << "Digite o sexo, M ou F: " << "\n";
        std::cin >> sexo;
        std::cout << "Digite o salário: " << "\n";
        std::cin >> salario;
        somaSalario = somaSalario + salario;
        grupo++;
        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        if (idade < menorIdade)
        {
            menorIdade = idade;
        }
        if ((sexo == 'F') && (salario <= 200))
        {
            quantidadeMulheresAteDuzentos++;
        }
        if (salario < menorSalario)
        {
            menorSalario = salario;
            idadeMenorSalario = idade;
            sexoMenorSalario = sexo;
        }
    }
    if (grupo)
    {
        mediaSalario = somaSalario / grupo;
    }
    std::cout << "A média dos salários do grupo é: " << mediaSalario << "\n";
    std::cout << "A maior idade do grupo é: " << maiorIdade << " e a menor idade é: " << menorIdade << "\n";
    std::cout << "A quantidade mulheres com salário até 200 é: " << quantidadeMulheresAteDuzentos << "\n";
    std::cout << "A idade e o sexo da pessoa com menor salário é: " << idadeMenorSalario << " - " << sexoMenorSalario << "\n";

    return 0;
}
