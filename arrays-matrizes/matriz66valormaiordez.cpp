#include <iostream>

using namespace std;

int main(){

  int matrizSeisPorSeis[6][6];
  int i;
  int j;
  int acumulador;

  cout << "digite os valores inteiros para a matriz: " << "\n";
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      cin >> matrizSeisPorSeis[i][j];
    }
  }
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (matrizSeisPorSeis[i][j] > 10) {
	acumulador = acumulador + 1;
      }
    }
  }
  cout << "existem " << acumulador << " valores maiores que 10" << "\n";
  
  return 0;
}
