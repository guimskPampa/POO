#include  <iostream>
#include  <string>
#include  "Pedido.h"


void Pedido::setDia(int newDia){
  this->setAtributoInt1 (newDia);
}
    
int Pedido::getDia(){
  return this->getAtributoInt1 ();
}

void Pedido::setMes(int newMes){
  this->setAtributoInt2 (newMes);
}
    
int Pedido::getMes(){
  return this->getAtributoInt2 ();
}
    
void Pedido::setAno(int newAno){
  this->setAtributoInt3 (newAno); 
}
    
int Pedido::getAno(){
  return this->getAtributoInt3 ();
}
    
void Pedido::setCusto(int newCusto){
  this->setAtributoInt4 (newCusto); 
}
    
int Pedido::getCusto(){
  return this->getAtributoInt4 ();
}
    
void Pedido::setClientePedido(string newCliente, Nodo* listaClientes){
  this->setNodoCondicionalString(newCliente, listaClientes, 1);
}

void Pedido::setVeiculoPedido(string newVeiculo, Nodo* listaVeiculos){
  this->setNodoCondicionalString(newVeiculo, listaVeiculos, 2);
}

Nodo* Pedido::getClientePedido(){
  return this->getAtributoNodo1();
}

Nodo* Pedido::getVeiculoPedido(){
  return this->getAtributoNodo2();
}

Pedido:: Pedido(Nodo* listaPedidos,int ano,int mes,int dia,int custo,string nulo1,string nulo2,Nodo* cliente,Nodo* veiculo){
  //cout << "escolha cliente, veiculo, ano, mes, dia, custo do pedido\n";
  //cin >> cliente >> veiculo >> ano >> mes >> dia >> custo;
  Nodo(listaPedidos, ano, mes, dia, custo, nulo1, nulo2, cliente, veiculo);
}

Pedido::~Pedido(){
  this->~Nodo();
}
void Pedido::mostraPedido(){
  this->mostraNodoVeiculo();
  this->mostraNodoCliente();
}
