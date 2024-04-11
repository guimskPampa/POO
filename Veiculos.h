#include  <iostream>
#include  <string>
#include  "Nodo.h"

using namespace std;

class Veiculos : protected Nodo{

  public:
  
    void setTipo(string newTipo);
    string getTipo() const;
     
    void setCapacidadeCarga(int newCapacidadeCarga);
    int getCapacidadeCarga() const;
    
    void setAnoFabricacao(int newAnoFabricacao);
    int getAnoFabricacao() const;
    
    void setChassi(int newChassi);
    int getChassi() const;
    
    void setProximoVeiculo(Nodo* newProximoVeiculo);
    Nodo* getProximoVeiculo() const;
    
    Veiculo(Nodo* listaVeiculos);
    ~Veiculo(Nodo* veiculo);
    
    void mostraVeiculo(Nodo* nodo) const;
};
