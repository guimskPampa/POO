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

void Veiculos::setProximoVeiculo(ListaDataNodo* newProximoVeiculo){
  setProximoNodo (newProximoVeiculo);
}

ListaDataNodo* Veiculos::getProximoVeiculo(){
  return getProximoNodo ();
}

void Veiculos::criarVeiculo(ListaDataNodo* listaVeiculos){
  criarNodo(listaVeiculos);
}

void Veiculos::apagaVeiculo(ListaDataNodo* veiculo){
  apagaNodo(veiculo);
}
