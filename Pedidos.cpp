#include  <iostream>
#include  <string>
#include  "Pedidos.h"
#include  "Veiculos.h"
#include  "Clientes.h"
#include  "ListasDataNodo.h"

void Pedidos::setDia(int newDia){
  ListaDataNodo::setAtributoInt1 (newDia);
}
    
int Pedidos::getDia(){
  return ListaDataNodo::getAtributoInt1 ();
}

void Pedidos::setMes(int newMes){
  ListaDataNodo::setAtributoInt2 (newMes);
}
    
int Pedidos::getMes(){
  return ListaDataNodo::getAtributoInt2 ();
}
    
void Pedidos::setAno(int newAno){
  ListaDataNodo::setAtributoInt3 (newAno); 
}
    
int Pedidos::getAno(){
  return ListaDataNodo::getAtributoInt3 ();
}
    
void Pedidos::setCusto(int newCusto){
  ListaDataNodo::setAtributoInt4 (newCusto); 
}
    
int Pedidos::getCusto(){
  return ListaDataNodo::getAtributoInt4 ();
}
    
void Pedidos::setClientePedido(string newCliente, ListaDataNodo* listaClientes){
  ListaDataNodo::setNodoCondicionalString(newCliente, listaClientes, 1);
}

void Pedidos::setVeiculoPedido(string newVeiculo, ListaDataNodo* listaVeiculos){
  ListaDataNodo::setNodoCondicionalString(newVeiculo, listaVeiculos, 2);
}

void Pedidos::getClientePedido(ListaDataNodo* cliente){

  cout << "Info Cliente:\n" << "Nome: " << cliente->getNome() << "\nidade: "<< cliente->getIdade();
  cout << "\nendereco: "<< cliente->getEndereco();
  
}

void Pedidos::getVeiculoPedido(ListaDataNodo* veiculo){
  
  cout << "Info Veiculo:\n" << "tipo: " << veiculo->getTipo();
  cout << "\nCapacidade de carga: " << veiculo->getCapacidadeCarga();
  cout << "\nAno de Fabricacao: "<< veiculo->getAnoFabricacao() << "\nChassi: "<< veiculo->getChassi();
  
}

ListaDataNodo* criarPedido(ListaDataNodo* listaPedidos){
  return ListaDataNodo::criarNodo(ListaDataNodo* listaPedidos);
}

void apagaPedido(ListaDataNodo* pedido){
  void apagaNodo(ListaDataNodo* pedido);
}

