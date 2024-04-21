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
  
    void setTipo(string newTipo);
    string getTipo();
     
    void setCapacidadeCarga(int newCapacidadeCarga);
    int getCapacidadeCarga();
    
    void setAnoFabricacao(int newAnoFabricacao);
    int getAnoFabricacao();
    
    void setChassi(int newChassi);
    int getChassi();
    
    void setProximoVeiculo(Nodo* newProximoVeiculo);
    Nodo* getProximoVeiculo();
    
    void setLongitude(int newLongitude);
    int getLongitude();
    
    void setLatitude(int newLatitude);
    int getLatitude();
    
    Veiculo(Nodo* listaNodo, int capacidadeCarga, int anoFabricacao, int chassi, string tipo, int newLongitude, int newLatitude);
    virtual ~Veiculo();
    
    void mostraVeiculo();
    virtual void mostraListaVeiculo();
    
    void buscaVeiculo(Nodo* lista, string tipo);
};

#endif
