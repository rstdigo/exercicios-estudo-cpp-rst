#include <iostream>

using namespace std;

int main(){

  int matrizCincoPorCinco[5][5];
  int i;
  int j;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++) {
      if (i == j) {
	matrizCincoPorCinco[i][j] = 1;
	cout << matrizCincoPorCinco[i][j]  << "\n";
      }
      else {
	matrizCincoPorCinco[i][j] = 0;
	cout <<  matrizCincoPorCinco[i][j] << "\n";
      }
    }
  }
  
  return 0;
}
