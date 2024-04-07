#include<iostream>
#include<string>

class Veiculos : protected ListasDataNodo{

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
};
