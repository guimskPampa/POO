#ifndef VEICULO_H
#define VEICULO_H

#include  <iostream>
#include  <string>
#include "../Nodos/Nodo.h"


using namespace std;
  
class Veiculo : public Nodo{
  private:
    Nodo* listaNodo;
  public:
  
    void setTipo();
    string getTipo();
     
    void setCapacidadeCarga();
    int getCapacidadeCarga();
    
    void setAnoFabricacao();
    int getAnoFabricacao();
    
    void setChassi();
    int getChassi();
    
    void setProximoVeiculo(Nodo* newProximoVeiculo);
    Nodo* getProximoVeiculo();
    
    void setLongitude();
    int getLongitude();
    
   virtual void setLatitude();
   virtual int getLatitude();
    
    Veiculo(Nodo* listaNodo, int capacidadeCarga, int anoFabricacao, int chassi, string tipo, int newLongitude, int newLatitude);
    virtual ~Veiculo();
    
    void mostraVeiculo();
    void mostraListaVeiculo();
    
    void buscaVeiculo(Nodo* lista, string tipo);
};

#endif
