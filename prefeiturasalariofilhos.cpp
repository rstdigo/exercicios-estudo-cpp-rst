#include <iostream>

int main(int argc, char const *argv[])
{
    float mediaFilhos = 0, salario = 0, mediaSalario = 0, maiorSalario = 0, somaSalario = 0, totalPessoas = 0, filhos = 0, totalFilhos = 0, percentagemAte150 = 0;

    while (salario != -1)
    {
        std::cout << "Digite o salário: " << "\n";
        std::cin >> salario;
        if (salario == -1)
        {
            break;
        }
        somaSalario = somaSalario + salario;
        std::cout << "Digite o número de filhos: " << "\n";
        std::cin >> filhos;
        totalFilhos = totalFilhos + filhos;
        if (salario <= 150)
        {
            percentagemAte150++;
        }
        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
        totalPessoas++;
    }
    if (totalPessoas)
    {
        mediaSalario = somaSalario / totalPessoas;
    }
    if (totalPessoas)
    {
        mediaFilhos = totalFilhos / totalPessoas;
    }
    if (totalPessoas)
    {
        percentagemAte150 = 100 * percentagemAte150 / totalPessoas;
    }
    std::cout << "a média de salário da populção é: " << mediaSalario << "\n";
    std::cout << "a média de filhos da populacão é: " << mediaFilhos << "\n";
    std::cout << "a percentagem de pessoas com salário até 150: " << percentagemAte150 << "\n";
    std::cout << "o maior salário: " << maiorSalario << "\n";

    return 0;
}
