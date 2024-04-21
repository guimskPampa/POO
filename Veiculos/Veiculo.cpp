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
  return this->getProximoNodo();
}
void Veiculo::setLongitude(int newLongitude){
  this->setLongitude (newLongitude);
}

int Veiculo::getLongitude(){
  return  this->getLongitude();
}

void Veiculo::setLatitude(int newLatitude){
  this->setLatitude(newLatitude);
}

int Veiculo::getLatitude(){
  return  this->getLatitude();
}

Veiculo:: Veiculo(Nodo* listaNodo, int capacidadeCarga, int anoFabricacao, int chassi, string tipo, int newLongitude, int newLatitude)
        :Nodo(listaNodo, capacidadeCarga, anoFabricacao, chassi, 0, tipo, "", NULL, NULL, newLongitude, newLatitude){
}

Veiculo::~Veiculo(){
}

void Veiculo::mostraVeiculo(){
  this->mostraNodoVeiculo();
}

void Veiculo::mostraListaVeiculo(){
  this->NodosVeiculo();
}

void Veiculo::buscaVeiculo(Nodo* lista, string tipo){
  buscaAtributoString1(lista, tipo, 2);
}
