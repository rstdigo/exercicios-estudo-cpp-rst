#include <iostream>

int main(int argc, char const *argv[])
{
    int valorN = 0, i = 0;
    long fatorial = 1;
    std::cout << "digite um número: " << "\n";
    std::cin >> valorN;
    for (i = 1; i <= valorN; ++i)
    {
        fatorial = fatorial * i;
    }
    std::cout << "fatorial do número digitado: " << fatorial << "\n";

    return 0;
}
