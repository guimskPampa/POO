#ifndef PEDIDO_H
#define PEDIDO_H 

#include  <iostream>
#include  <string>
#include "../Nodos/Nodo.h"

using namespace std;

class Pedido : public Nodo{
  private:
  
    Nodo* listaNodo;
    
  public:
  
    void setDia(int newDia);
    int getDia();

    void setMes(int newMes);
    int getMes();
    
    void setAno(int newAno);
    int getAno();
    
    void setCusto(int newCusto);
    int getCusto();
    
    void setClientePedido(string newCliente, Nodo* listaClientes);
    Nodo* getClientePedido();
    
    void setVeiculoPedido(string newTipo, Nodo* listaVeiculos);
    Nodo* getVeiculoPedido();
    
    void setLongitude(int newLongitude);
    string getLongitude();
    
    void setLatitude(int newLatitude);
    string getLatitude();

    Pedido(Nodo* listaNodo,int ano, int mes, int dia, int custo, Nodo* cliente, Nodo* veiculo, int newLongitude, int newLatitude);
    virtual ~Pedido();
    
    void mostraPedido();
};
#endif
