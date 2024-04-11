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
    
void Pedidos::setClientePedido(string newCliente, Nodo* listaClientes){
  setNodoCondicionalString(newCliente, listaClientes, 1);
}

void Pedidos::setVeiculoPedido(string newVeiculo, Nodo* listaVeiculos){
  setNodoCondicionalString(newVeiculo, listaVeiculos, 2);
}

Nodo* Pedidos::getClientePedido(){
  return getAtributoNodo1();
}

Nodo* Pedidos::getVeiculoPedido(){
  return getAtributoNodo2();
}

Pedidos:: Pedido(){
  int ano, mes, dia, custo;
  string cliente, veiculo;
  cout << "escolha cliente, veiculo, ano, mes, dia, custo do pedido\n";
  cin >> cliente >> veiculo >> ano >> mes >> dia >> custo;
  Nodo(listaPedidos, );
}

Pedidos::~Pedido(Nodo* pedido){
  ~Nodo(pedido, ano, mes, dia, custo, NULL, NULL, cliente, veiculo);
}
void Pedidos::mostraPedido(Nodo* veiculo, Nodo* cliente){
  mostraNodoVeiculo(veiculo);
  mostraNodoCliente(cliente);
}
