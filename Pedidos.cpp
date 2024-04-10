#include  <iostream>
#include  <string>
#include  "Pedidos.h"


void Pedidos::setDia(int newDia){
  setAtributoInt1 (newDia);
}
    
int Pedidos::getDia(){
  return getAtributoInt1 ();
}

void Pedidos::setMes(int newMes){
  setAtributoInt2 (newMes);
}
    
int Pedidos::getMes(){
  return getAtributoInt2 ();
}
    
void Pedidos::setAno(int newAno){
  setAtributoInt3 (newAno); 
}
    
int Pedidos::getAno(){
  return getAtributoInt3 ();
}
    
void Pedidos::setCusto(int newCusto){
  setAtributoInt4 (newCusto); 
}
    
int Pedidos::getCusto(){
  return getAtributoInt4 ();
}
    
void Pedidos::setClientePedido(string newCliente, ListaDataNodo* listaClientes){
  setNodoCondicionalString(newCliente, listaClientes, 1);
}

void Pedidos::setVeiculoPedido(string newVeiculo, ListaDataNodo* listaVeiculos){
  setNodoCondicionalString(newVeiculo, listaVeiculos, 2);
}

void Pedidos::getClientePedido(ListaDataNodo* cliente){
}

void Pedidos::getVeiculoPedido(ListaDataNodo* veiculo){
}

void Pedidos::criarPedido(ListaDataNodo* pedido){
  criarNodo(pedido);
}

void Pedidos::apagaPedido(ListaDataNodo* pedido){
  apagaNodo(pedido);
}

