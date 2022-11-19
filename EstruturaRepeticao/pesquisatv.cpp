#include <iostream>

int main(int argc, char const *argv[])
{
    int canal = 1, pessoas = 0, totalPessoas = 0, canalQuatro = 0, canalCinco = 0, canalSete = 0, canalDoze = 0;

    while (canal != 0)
    {
        std::cout << "Digite o canal desejado, 4 - 5 - 7 - 12: " << "\n";
        std::cin >> canal;
        if (canal != 0)
        {
            if (canal == 4)
            {
                std::cout << "Digite quantas pessoas viam esse canal: " << "\n";
                std::cin >> pessoas;
                canalQuatro = canalQuatro + pessoas;
            }
            if (canal == 5)
            {
                std::cout << "Digite quantas pessoas viam esse canal: " << "\n";
                std::cin >> pessoas;
                canalCinco = canalCinco + pessoas;
            }
            if (canal == 7)
            {
                std::cout << "Digite quantas pessoas viam esse canal: " << "\n";
                std::cin >> pessoas;
                canalSete = canalSete + pessoas;
            }
            if (canal == 12)
            {
                std::cout << "Digite quantas pessoas viam esse canal: " << "\n";
                std::cin >> pessoas;
                canalDoze = canalDoze + pessoas;
            }
        }
        else
        {
            totalPessoas = canalQuatro + canalCinco + canalSete + canalDoze;
            std::cout << "programa terminado" << "\n";
            std::cout << "a percentagem de audiência do canal 4 é: " << 100 * canalQuatro / totalPessoas << "\n";
            std::cout << "a percentagem de audiência do canal 5 é: " << 100 * canalCinco / totalPessoas << "\n";
            std::cout << "a percentagem de audiência do canal 7 é: " << 100 * canalSete / totalPessoas << "\n";
            std::cout << "a percentagem de audiência do canal 12 é: " << 100 * canalDoze / totalPessoas << "\n";
        }
    }

    return 0;
}
