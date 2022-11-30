#include <iostream>

using namespace std;

int main()
{
  char frase[20];
  int i;
  int j;

  cout << "digite uma frase: " << "\n";
  cin.getline(frase, 20);

  for (i = 0; frase[i] != '\0'; ++i) {
    while (frase[i] == ' ') {
      for (j = i; frase[j] != '\0'; ++j) {
	frase[j] = frase[j + 1];
      }
    }        
  }
  cout << frase << "\n";

  return 0;
}
