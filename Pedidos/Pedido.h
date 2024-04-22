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
  
    void setDia();
    int getDia();

    void setMes();
    int getMes();
    
    void setAno();
    int getAno();
    
    void setCusto();
    int getCusto();
    
    void setClientePedido(Nodo* listaClientes);
    Nodo* getClientePedido();
    
    void setVeiculoPedido(Nodo* listaVeiculos);
    Nodo* getVeiculoPedido();
    
    void setLongitude();
    double getLongitude();
    
    void setLatitude();
    double getLatitude();

    Pedido(Nodo* listaNodo,int ano, int mes, int dia, int custo, Nodo* cliente, Nodo* veiculo, int newLongitude, int newLatitude);
    virtual ~Pedido();
    
    void mostraPedido();
};
#endif
