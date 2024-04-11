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

void Clientes::setProximoCliente(Nodo* newProximoCliente){
  setProximoNodo (newProximoCliente);
}

Nodo* Clientes::getProximoCliente(){
  return getProximoNodo ();
}

Clientes::Cliente(Nodo* listaClientes){
  int idade;
  string nome, endereco;
  cout<< "Digite idade, nome e endereco do novo cliente:\n";
  cin >> idade >> nome >> endereco;
  
  Nodo(listaClientes, idade, NULL, NULL, NULL, nome, endereco, NULL, NULL);
}

Clientes::~Cliente(Nodo* cliente){
  ~Nodo(cliente);
}

void Clientes::mostraCliente(Nodo* cliente){
  mostraNodoCliente(cliente);
}
