#include "Recurso.h"

using namespace std;

string Recurso::toLowerString(string palavra){
  int i, tam = palavra.length();

  char letras[tam];
  strcpy(letras, palavra.c_str());
  while((tam-1)!=i){
    letras[i] = tolower(letras[i]);
  }
  return (string)letras;
}
