#include  <iostream>
#include  <string>
#include  "../Nodos/Nodo.h"

using namespace std;

class Pedido : protected  Nodo{
       
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
    
    Pedido(Nodo* listaPedidos);
    ~Pedido();
    
    void mostraPedido();
};
