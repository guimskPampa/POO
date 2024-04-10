#include  <iostream>
#include  <string>
#include  "ListasDataNodo.h"

using namespace std;

class Veiculos : protected ListaDataNodo{

  public:
  
    void setTipo(string newTipo);
    string getTipo();
     
    void setCapacidadeCarga(int newCapacidadeCarga);
    int getCapacidadeCarga();
    
    void setAnoFabricacao(int newAnoFabricacao);
    int getAnoFabricacao();
    
    void setChassi(int newChassi);
    int getChassi();
    
    void setProximoVeiculo(ListaDataNodo* newProximoVeiculo);
    ListaDataNodo* getProximoVeiculo();
    
    void criarVeiculo(ListaDataNodo* listaVeiculos);
    void apagaVeiculo(ListaDataNodo* veiculo);
};
