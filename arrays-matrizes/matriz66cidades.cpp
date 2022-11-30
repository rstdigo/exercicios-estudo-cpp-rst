#include <iostream>

using namespace std;

int main(){

  int matrizDistancia[6][6];
  int arrayViagem[6];
  int i;
  int distanciaTotal;
  int auxiliar;

  matrizDistancia[2][1] = 63;
  matrizDistancia[1][2] = 63;
  matrizDistancia[3][1] = 210;
  matrizDistancia[1][3] = 210;
  matrizDistancia[4][1] = 190;
  matrizDistancia[1][4] = 190;
  matrizDistancia[6][1] = 190;
  matrizDistancia[1][6] = 190;
  matrizDistancia[3][2] = 160;
  matrizDistancia[2][3] = 160;
  matrizDistancia[4][2] = 150;
  matrizDistancia[2][4] = 150;
  matrizDistancia[5][2] = 95;
  matrizDistancia[2][5] = 95;
  matrizDistancia[4][3] = 10;
  matrizDistancia[3][4] = 10;
  matrizDistancia[6][5] = 80;
  matrizDistancia[5][6] = 80;
  arrayViagem[1] = matrizDistancia[3][4];
  arrayViagem[2] = matrizDistancia[2][4];
  arrayViagem[3] = matrizDistancia[2][5];
  arrayViagem[4] = matrizDistancia[5][6];
  arrayViagem[5] = matrizDistancia[6][1];

  for (i = 0; i < 6; i++) {
    distanciaTotal = distanciaTotal + arrayViagem[i];
  }
  cout << "a distância percorrida na viagem é: " << distanciaTotal << "\n";
  
    return 0;
}
