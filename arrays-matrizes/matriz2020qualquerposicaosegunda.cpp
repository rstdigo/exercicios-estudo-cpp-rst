#include <iostream>

using namespace std;

int main(){

  int matrizUm[20][20];
  int matrizDois[20][20];
  int i;
  int j;
  int k;
  int p;

  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      matrizUm[i][j] = rand() % 399 + 1;
      matrizDois[i][j] = rand() % 399 +1;
    }
  }
  for (i = 0; i < 20; i++) {
    for (j = 0; j < 20; j++) {
      for (k = 0; k < 20; k++) {
	for (p = 0; p < 20; p++) {
	  if (matrizUm[i][j] == matrizDois[k][p]) {
	    cout << "valores das matrizes: " << matrizUm[i][j]  << "\n";
	    cout << "linha: " << k << " coluna: " << p << "\n";
	  }
	}
      }
    }
  }
  
  return 0;
}
