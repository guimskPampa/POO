#include  <iostream>
#include  <string>
#include  "Clientes.h"
#include  "ListaDataNodo.h"

void Clientes::setIdade(int newMinhaIdade){
  setAtributoInt1 (minhaIdade);
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

void Clientes::setProximoCliente(ListasDataNodo* newProximoCliente){
  setProximoNodo (newProximoCliente);
}

ListaDataNodo* Clientes::getProximoCliente(){
  return getProximoNodo ();
}

ListaDataNodo* criarCliente(ListaDataNodo* listaClientes){
  ListaDataNodo* criarNodo(ListaDataNodo* listaClientes);
}

Void apagaCliente(ListaDataNodo* cliente){
  Void apagaNodo(ListaDataNodo* cliente);
}
