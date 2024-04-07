#include<iostream>
#include<string>

class Pedidos{
       
  public:
  
    void setDia(int newDia);
    int getDia();

    void setMes(int newMes);
    int getMes();
    
    void setAno(int newAno);
    int getAno();
    
    void setCusto(int newCusto);
    int getCusto();
    
    void setClientePedido(string newCliente, Clientes *listaClientes);
    void getClientePedido();
    
    void setVeiculoPedido(string newTipo, Veiculos *listaVeiculos);
    void getVeiculoPedido();
};
