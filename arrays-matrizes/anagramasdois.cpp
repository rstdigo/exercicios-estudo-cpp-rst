#include <iostream>
#include <cstring>

using namespace std;
 
int checarAnagrama(char *primeiraPalavra, char *segundaPalavra);
 
int main(){
  char primeiraPalavra[5];
  char segundaPalavra[5];
  cout << "digite a primeira palavra: " << "\n";
  cin.getline(primeiraPalavra, 5);
  cout << "digite a segunda palavra: " << "\n";
  cin.getline(segundaPalavra, 5);
  
  if(checarAnagrama(primeiraPalavra, segundaPalavra)){
    cout << "são anagrama" << "\n";
  } else {
    cout << "não são anagrama" << "\n";
  }
     
  return 0;
}

int checarAnagrama(char *primeiraPalavra, char *segundaPalavra){
  int primeiroContador[256] = {0};
  int segundoContador[256] = {0};
  int i;

  if(strlen(primeiraPalavra) != strlen(segundaPalavra)){
    return 0;
  }
  for(i = 0; primeiraPalavra[i] != '\0'; ++i){
    ++primeiroContador[primeiraPalavra[i]];
  }
  for(i = 0; segundaPalavra[i] != '\0'; ++i){
    ++segundoContador[segundaPalavra[i]];
  }
  for(i = 0; i < 256; ++i){
    if(primeiroContador[i] != segundoContador[i])
      return 0;
  }
     
  return 1;
}
