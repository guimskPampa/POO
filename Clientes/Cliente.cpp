#include  <iostream>
#include  <string>
#include  "Cliente.h"

using namespace std;

void Cliente::setIdade(int newIdade){
  this->setAtributoInt1 (newIdade);
}

int Cliente::getIdade(){
  return this->getAtributoInt1 ();
}

void Cliente::setNome(string newNome){
  this->setAtributoString1 (newNome);
}

string Cliente::getNome(){
  return this->getAtributoString1 ();
}

void Cliente::setEndereco(string newEndereco){
  this->setAtributoString2 (newEndereco);
}

string Cliente::getEndereco(){
  return this->getAtributoString2 ();
}

void Cliente::setProximoCliente(Nodo* newProximoCliente){
  this->setProximoNodo (newProximoCliente);
}

Nodo* Cliente::getProximoCliente(){
  return this->getProximoNodo ();
}

Cliente::Cliente(Nodo* listaClientes){
  int idade;
  string nome, endereco;
  cout<< "Digite idade, nome e endereco do novo cliente:\n";
  cin >> idade >> nome >> endereco;
  
  Nodo(listaClientes, idade, NULL, NULL, NULL, nome, endereco, NULL, NULL);
}

Cliente::~Cliente(){
 this->~Nodo();
}

void Cliente::mostraCliente(){
  this->mostraNodoCliente();
}
