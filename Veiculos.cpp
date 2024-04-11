#include  <iostream>
#include  <string>
#include  "Veiculos.h"

void Veiculos::setTipo(string newTipo){
  setAtributoString1 (newTipo);
}

string Veiculos::getTipo(){
  return  getAtributoString1 ();
}
     
void Veiculos::setCapacidadeCarga(int newCapacidadeCarga){
  setAtributoInt1 (newCapacidadeCarga); 
}

int Veiculos::getCapacidadeCarga(){
  return getAtributoInt1 (); 
}

void Veiculos::setAnoFabricacao(int newAnoFabricacao){
  setAtributoInt2 (newAnoFabricacao);
}

int Veiculos::getAnoFabricacao(){
  return  getAtributoInt2 ();
}
     
void Veiculos::setChassi(int newChassi){
  setAtributoInt3 (newChassi);
}

int Veiculos::getChassi(){
  return getAtributoInt3 ();
}

void Veiculos::setProximoVeiculo(Nodo* newProximoVeiculo){
  setProximoNodo (newProximoVeiculo);
}

Nodo* Veiculos::getProximoVeiculo(){
  return getProximoNodo ();
}

Veiculos:: Veiculo(Nodo* listaVeiculos){
  string tipo;
  int capacidadeCarga, anoFabricacao, chassi;
  
  cout << "escolha capacidade carga, anoFabricacao, chassi e tipo";
  cin >> capacidadeCarga >> anoFabricacao >> chassi >> tipo;
  
  Nodo(listaVeiculos, capacidadeCarga, anoFabricacao, chassi, NULL, tipo, NULL, NULL, NULL);
}

Veiculos::~Veiculo(Nodo* veiculo){
  ~Nodo(veiculo);
}

void Veiculos::mostraVeiculo(Nodo* veiculo){
  mostraNodoVeiculo(veiculo);
}
