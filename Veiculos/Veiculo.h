#ifndef VEICULO_H
#define VEICULO_H

#include  <iostream>
#include  <string>
#include "../Nodos/Nodo.h"


using namespace std;
  
class Veiculo : protected Nodo{
  private:
    Nodo* listaNodo;
  public:
  
    void setTipo(string newTipo);
    string getTipo();
     
    void setCapacidadeCarga(int newCapacidadeCarga);
    int getCapacidadeCarga();
    
    void setAnoFabricacao(int newAnoFabricacao);
    int getAnoFabricacao();
    
    void setChassi(int newChassi);
    int getChassi() const;
    
    void setProximoVeiculo(Nodo* newProximoVeiculo);
    Nodo* getProximoVeiculo();
    
    Veiculo();
    ~Veiculo();
    
    void mostraVeiculo();
};

#endif
