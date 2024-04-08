#include  <iostream>
#include  <string>
#include  "Clientes.h"
#include  "ListasDataNodo.h"

using namespace std;

void Clientes::setIdade(int newIdade){
  ListaDataNodo::setAtributoInt1 (newIdade);
}

int Clientes::getIdade(){
  return ListaDataNodo::getAtributoInt1 ();
}

void Clientes::setNome(string newNome){
  ListaDataNodo::setAtributoString1 (newNome);
}

string Clientes::getNome(){
  return ListaDataNodo::getAtributoString1 ();
}

void Clientes::setEndereco(string newEndereco){
  ListaDataNodo::setAtributoString2 (newEndereco);
}

string Clientes::getEndereco(){
  return ListaDataNodo::getAtributoString2 ();
}

void Clientes::setProximoCliente(ListasDataNodo* newProximoCliente){
  ListaDataNodo::setProximoNodo (newProximoCliente);
}

ListaDataNodo* Clientes::getProximoCliente(){
  return ListaDataNodo::getProximoNodo ();
}

ListaDataNodo* Clientes::criarCliente(ListaDataNodo* listaClientes){
  ListaDataNodo::criarNodo(ListaDataNodo* listaClientes);
}

Void Clientes::apagaCliente(ListaDataNodo* cliente){
  ListaDataNodo::apagaNodo(ListaDataNodo* cliente);
}
