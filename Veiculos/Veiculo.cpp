#include  <iostream>
#include  <string>
#include  "Veiculo.h"

void Veiculo::setTipo(string newTipo){
  this->setAtributoString1 (newTipo);
}

string Veiculo::getTipo(){
  return  this->getAtributoString1 ();
}
     
void Veiculo::setCapacidadeCarga(int newCapacidadeCarga){
  this->setAtributoInt1 (newCapacidadeCarga); 
}

int Veiculo::getCapacidadeCarga(){
  return this->getAtributoInt1 (); 
}

void Veiculo::setAnoFabricacao(int newAnoFabricacao){
  this->setAtributoInt2 (newAnoFabricacao);
}

int Veiculo::getAnoFabricacao(){
  return  this->getAtributoInt2 ();
}
     
void Veiculo::setChassi(int newChassi){
  this->setAtributoInt3 (newChassi);
}

int Veiculo::getChassi(){
  return this->getAtributoInt3 ();
}

void Veiculo::setProximoVeiculo(Nodo* newProximoVeiculo){
  this->setProximoNodo (newProximoVeiculo);
}

Nodo* Veiculo::getProximoVeiculo(){
  return this->getProximoNodo ();
}

Veiculo:: Veiculo(Nodo* listaVeiculos){
  string tipo;
  int capacidadeCarga, anoFabricacao, chassi;
  
  cout << "escolha capacidade carga, anoFabricacao, chassi e tipo";
  cin >> capacidadeCarga >> anoFabricacao >> chassi >> tipo;
  
  Nodo(listaVeiculos, capacidadeCarga, anoFabricacao, chassi, NULL, tipo, NULL, NULL, NULL);
}

Veiculo::~Veiculo(){
  this->~Nodo();
}

void Veiculo::mostraVeiculo(){
  this->mostraNodoVeiculo();
}
