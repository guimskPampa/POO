#include  <iostream>
#include  <string>
#include  "Nodo.h"

using namespace std;

class Pedidos : protected  Nodo{
       
  public:
  
    void setDia(int newDia);
    int getDia() const;

    void setMes(int newMes);
    int getMes() const;
    
    void setAno(int newAno);
    int getAno() const;
    
    void setCusto(int newCusto);
    int getCusto() const;
    
    void setClientePedido(string newCliente, Nodo* listaClientes);
    Nodo* getClientePedido(Nodo* pedido) const;
    
    void setVeiculoPedido(string newTipo, Nodo* listaVeiculos);
    Nodo* getVeiculoPedido(Nodo* pedido) const;
    
    Pedido(Nodo* listaPedidos);
    ~Pedido(Nodo* pedido);
    
    void mostraPedido(Nodo* veiculo, Nodo* cliente) const;
};
