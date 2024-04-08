#include  <iostream>
#include  <string>
#include  "Veiculos.h"
#include  "ListasDataNodo.h"

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
  return ListaDataNodo::getAtributoInt1 (); 
}

void Veiculos::setAnoFabricacao(int newAnoFabricacao){
  ListaDataNodo::setAtributoInt2 (newAnoFabricacao);
}

int Veiculos::getAnoFabricacao(){
  return  ListaDataNodo::getAtributoInt2 ();
}
     
void Veiculos::setChassi(int newChassi){
  ListaDataNodo::setAtributoInt3 (newChassi);
}

int Veiculos::getChassi(){
  return ListaDataNodo::getAtributoInt3 ();
}

void Veiculos::setProximoCliente(ListasDataNodo* newProximoCliente){
  ListaDataNodo::setProximoNodo (newProximoCliente);
}

ListaDataNodo* Veiculos::getProximoCliente(){
  return ListaDataNodo::getProximoNodo ();
}

ListaDataNodo* Veiculos::criarVeiculo(ListaDataNodo* listaVeiculos){
  ListaDataNodo::criarNodo(ListaDataNodo* listaVeiculos);
}

void Veiculos::apagaCliente(ListaDataNodo* veiculo){
  ListaDataNodo::apagaNodo(ListaDataNodo* veiculo);
}
