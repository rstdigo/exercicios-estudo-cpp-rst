#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{

  int vetorNumeroImpar[10] = {0};
  int posicaoImpar = 0;
  int i = 0;

  do
    {
      if (i % 2 == 1)
	{
	  vetorNumeroImpar[posicaoImpar] = i;
	  posicaoImpar++;
	}
      i++;
    } while (posicaoImpar < 10);
 

  i = 0;
  
  std::cout << "10 primeiros números ímpares: " << '\n';
  for (size_t i = 0; i < 10; ++i) {
    std::cout << vetorNumeroImpar[i] << '\n';
  }
  

  return 0;
}
