#include  <iostream>
#include  <string>
#include  "Nodo.h"


void Nodo::setAtributoInt1 (int newAtributoInt1){
  this->atributoInt1 = newAtributoInt1;
}
int Nodo::getAtributoInt1 (){
  return this->atributoInt1;
}
void Nodo::setAtributoInt2 (int newAtributoInt2){
  this->atributoInt2 = newAtributoInt2;
}
int Nodo::getAtributoInt2 (){
  return this->atributoInt2;
}
void Nodo::setAtributoInt3 (int newAtributoInt3){
  this->atributoInt3 = newAtributoInt3;
}
int Nodo::getAtributoInt3 (){
  return this->atributoInt3;
}
void Nodo::setAtributoInt4 (int newAtributoInt4){
  this->atributoInt4 = newAtributoInt4;
}
int Nodo::getAtributoInt4 (){
  return this->atributoInt4;
}
void Nodo::setAtributoString1 (string newAtributoString1){
  this->atributoString1 = newAtributoString1;
}
string Nodo::getAtributoString1 (){
  return this->atributoString1;
}
void Nodo::setAtributoString2 (string newAtributoString2){
  this->atributoString2 = newAtributoString2;
}
string Nodo::getAtributoString2 (){
  return this->atributoString2;
}
void Nodo::setProximoNodo (Nodo* newProximoNodo){
  this->proximoNodo = newProximoNodo;
}
Nodo* Nodo::getProximoNodo(){
  return this->proximoNodo;
}

void Nodo::setAnteriorNodo (Nodo* newAnteriorNodo){
  this->anteriorNodo = newAnteriorNodo;
}
Nodo* Nodo::getAnteriorNodo(){
  return this->anteriorNodo;
}

void Nodo::setNodoCondicionalString(string newNodo, Nodo *listaNodos, int escolhaAtributo){

  Nodo* aux = listaNodos;
           
  while (aux!=NULL){
    if(aux->getAtributoString1() == newNodo){
      if(escolhaAtributo == 1){
        this->atributoNodo1 = aux;
      }
      else if(escolhaAtributo == 2){
        this->atributoNodo2 = aux;
      }
      else{
      //ERRO
      }
    }
    aux = aux->getProximoNodo();
  }
  
  if(aux==NULL){
    //ERRO
  }
}
  
Nodo*  Nodo::getAtributoNodo1(){
  return this->atributoNodo1;
}

Nodo* Nodo::getAtributoNodo2(){
  return this->atributoNodo2;
}

Nodo::Nodo(Nodo* listaNodos, int newInt1, int newInt2, int newInt3, int newInt4, string newString1, string newString2, Nodo* newNodo1, Nodo* newNodo2){
//mudar recebbimento assim como dito linha abaixo
  //Recebe endereco e muda endereco apontado por ponteiro
  Nodo* newNodo = new Nodo;
  
  if (listaNodos==NULL){
  newNodo->anteriorNodo = NULL;
  newNodo->proximoNodo = NULL;
  listaNodos = newNodo;
  }
  else{
  newNodo->anteriorNodo = listaNodos;
  newNodo->proximoNodo = NULL;
  }
  newNodo->setAtributoInt1(newInt1);
  newNodo->setAtributoInt1(newInt2);
  newNodo->setAtributoInt1(newInt3);
  newNodo->setAtributoInt1(newInt4);
  
  newNodo->setAtributoString1(newString1);
  newNodo->setAtributoString2(newString2);
  
  newNodo->setAtributoNodo1(newNodo1);
  newNodo->setAtributoNodo2(newNodo2);
}

Nodo::~Nodo(Nodo* nodo){
  Nodo* aux;
  aux = nodo->anteriorNodo;
  nodo->proximoNodo->anteriorNodo = aux;
  delete nodo;
}

void Nodo::mostraNodoCliente(Nodo* cliente){
  cout << "Info Cliente:\n" << "Nome: " << cliente->getAtributoString1() << "\nidade: \n"<< cliente->getAtributoInt1();
  cout << "\nendereco: "<< cliente->getAtributoString2();
}

void Nodo::mostraNodoVeiculo(Nodo* veiculo){
  cout << "Info Veiculo:\n" << "tipo: " << veiculo->getAtributoString1();
  cout << "\nCapacidade de carga: " << veiculo->getAtributoInt1();
  cout << "\nAno de Fabricacao: "<< veiculo->getAtributoInt2() << "\nChassi: \n"<< veiculo->getAtributoInt3();
}

