#include <iostream>

using namespace std;

int main(){

  int principalArranjo[9] = {0};
  int primeiroArranjo[9] = {0};
  int segundoArranjo[9] = {0};
  int terceiroArranjo[9] = {0};
  int i;
  int j;
  int k;
  int l;
    

  for (int i; i < 9; ++i) {
    cout << "digite 9 valores para o primeiro arranjo: " << "\n";
    cin >> primeiroArranjo[i];
  }
  for (int j; j < 9; ++j) {
    cout << "digite 9 valores para o segundo arranjo: " << "\n";
    cin >> segundoArranjo[j];    
  }
  for (int k; k < 9; ++k) {
    cout << "digite 9 valores para o terceiro arranjo: " << "\n";
    cin >> terceiroArranjo[k];
  }

  while (l < 3) {
    principalArranjo[l] = primeiroArranjo[l];
    ++l;
  }
  while (l < 6) {
    principalArranjo[l] = segundoArranjo[l];
    ++l;
  }
  while (l < 9) {
    principalArranjo[l] = terceiroArranjo[l];
    ++l;
  }
  cout << "o arranjo com um terço de cada outro é: " << "\n";
  for (l = 0; l < 9; ++l) {
    cout << principalArranjo[l] << "\n";
  }
  
  return 0;
}
