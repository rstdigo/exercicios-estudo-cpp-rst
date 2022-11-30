#include <iostream>

using namespace std;

int main(){

  int dezPosicoes[10] = {0};
  int valoresIguais;
  int i;
  int j;

  cout << "digite dez valores inteiros: " << "\n";
  for (i = 0; i < 10; ++i) {
    cin >> dezPosicoes[i];
  }
  cout << "números iguais: " << "\n";
  for (i = 0; i < 10; ++i) {
    for (j = i + 1; j < 10; ++j) {
      if (dezPosicoes[i] == dezPosicoes[j]) {
	valoresIguais = dezPosicoes[i];
	cout << valoresIguais << "\n";
      }      
    }
  }
  
  return 0;
}
