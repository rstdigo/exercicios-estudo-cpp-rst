#include <iostream>

using namespace std;

int main(){

  int matrizVintePorVinte[20][20];
  int valorX;
  int i;
  int j;

  cout << "digite os valores inteiros para o array bidimensional: " << "\n";
  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      matrizVintePorVinte[i][j] = rand() % 399 + 1;
    }
  }
  cout << "digite o valor inteiro de X: " << "\n";
  cin >> valorX;
  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      if (valorX == matrizVintePorVinte[i][j]) {
	cout << "linha: " << i << " coluna: " << j << "\n";
      }
      if (valorX != matrizVintePorVinte[i][j]) {
	cout << "linha " << i << " não encontrado " << " coluna " << j << " não encontrado " << "\n";
      }
    }
  }
  
  return 0;
}
