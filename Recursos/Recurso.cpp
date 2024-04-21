
#include <string>
#include "Recurso.h"
#include <cctype>

Recurso::string toLowerString(string palavra){
  int i;
  char letras[]=palavra;
  while((strlen(letra)-1)!=i){
    letras[i] = tolower(letras[i]);
  }
  return (string)letras;
}
