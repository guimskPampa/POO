#include  <iostream>
#include  <string>
#include  "../Nodos/Nodo.h"

using namespace std;

class Veiculo : protected Nodo{

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
    
    Veiculo(Nodo* listaVeiculos);
    ~Veiculo();
    
    void mostraVeiculo();
};
