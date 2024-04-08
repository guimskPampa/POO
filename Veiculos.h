#include  <iostream>
#include  <string>

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
    
    void setProximoCliente(ListasDataNodo* newProximoCliente);
    ListaDataNodo* getProximoCliente();
    
    ListaDataNodo* criarVeiculo(ListaDataNodo* listaVeiculos);
    void apagaVeiculo(ListaDataNodo* veiculo);
};
