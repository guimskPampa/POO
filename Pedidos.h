#include  <iostream>
#include  <string>
#include  "ListasDataNodo.h"

using namespace std;

class Pedidos : protected  ListaDataNodo{
       
  public:
  
    void setDia(int newDia);
    int getDia();

    void setMes(int newMes);
    int getMes();
    
    void setAno(int newAno);
    int getAno();
    
    void setCusto(int newCusto);
    int getCusto();
    
    void setClientePedido(string newCliente, ListaDataNodo* listaClientes);
    void getClientePedido();
    
    void setVeiculoPedido(string newTipo, ListaDataNodo* listaVeiculos);
    void getVeiculoPedido();
    
    ListaDataNodo* criarPedido(ListaDataNodo* listaPedidos);
    Void apagaPedido(ListaDataNodo* pedido);
};
