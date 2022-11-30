#include <iostream>

using namespace std;

int main(){

  int matrizSeisPorSeis[6][6];
  int i;
  int j;

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      matrizSeisPorSeis[i][j] = rand() % 5 + 1;
    }
  }
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (matrizSeisPorSeis[i][j] > 0) {
	cout << matrizSeisPorSeis[i][j]  << "\n";
      }
    }
  }
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if ((matrizSeisPorSeis[i][j] < 0) && (i != j) && (i + j != 7)) {
	matrizSeisPorSeis[i][j] = 0;
      }
    }
  }
  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      cout << matrizSeisPorSeis[i][j]  << "\n";
    }
  }
  
  return 0;
}
