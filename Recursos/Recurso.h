#ifndef RECURSO_H
#define RECURSO_H

#include <cctype>
#include <string.h>
#include <string>

using namespace std;

class Recurso {

  public:

    string toLowerString(string palavra);

    double distanciaDoisPontos(double latitude1, double longitude1, double latitude2, double longitude2);
    
};

#endif
