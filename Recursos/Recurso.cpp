#include "Recurso.h"
#include <math.h>
# define M_PI           3.14159265358979323846 

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

double Recurso::distanciaDoisPontos(double latitude1, double longitude1, double latitude2, double longitude2){

    double diferenca = longitude1 - longitude2;
    double angulo1 = latitude1 * (M_PI/180);
    double angulo2 = latitude2 * (M_PI/180);
    double angulo3 = diferenca * (M_PI/180);

    double distance = 60 * 1.1515 * (180/M_PI) * acos(sin(angulo1) * sin(angulo2) +  cos(angulo1) * cos(angulo2) * cos(angulo3));
   
    return round(distance * 1.609344);
}