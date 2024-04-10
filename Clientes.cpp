#include  <iostream>
#include  <string>
#include  "Clientes.h"

using namespace std;

void Clientes::setIdade(int newIdade){
  setAtributoInt1 (newIdade);
}

int Clientes::getIdade(){
  return getAtributoInt1 ();
}

void Clientes::setNome(string newNome){
  setAtributoString1 (newNome);
}

string Clientes::getNome(){
  return getAtributoString1 ();
}

void Clientes::setEndereco(string newEndereco){
  setAtributoString2 (newEndereco);
}

string Clientes::getEndereco(){
  return getAtributoString2 ();
}

void Clientes::setProximoCliente(ListaDataNodo* newProximoCliente){
  setProximoNodo (newProximoCliente);
}

ListaDataNodo* Clientes::getProximoCliente(){
  return getProximoNodo ();
}

void Clientes::criarCliente(ListaDataNodo* listaClientes){
  criarNodo(listaClientes);
}

void Clientes::apagaCliente(ListaDataNodo* cliente){
  apagaNodo(cliente);
}
