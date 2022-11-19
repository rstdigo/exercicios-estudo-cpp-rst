#include <iostream>

int main(int argc, char const *argv[])
{
    int i, j;
    for (i = 1; i <= 10; i = i + 1)
    {
        for (j = 1; j <= 10; j = j + 1)
            std::cout << i << " * " << j << " = " << i * j << "\n";
    }

    return 0;
}
