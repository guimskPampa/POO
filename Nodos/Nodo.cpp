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

void Nodo::setAtributoNodo1 (Nodo* newNodo){
  this->atributoNodo1 = newNodo;
}

void Nodo::setAtributoNodo2(Nodo* newNodo){
  this->atributoNodo2 = newNodo;
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

Nodo::Nodo(Nodo* listaNodos, int newInt1, int newInt2, int newInt3, int newInt4, string newString1, string newString2, Nodo* newPonteiro1, Nodo* newPonteiro2){

  if (listaNodos==NULL){
  this->anteriorNodo = NULL;
  this->proximoNodo = NULL;
  listaNodos = this;
  }
  else{
  this->anteriorNodo = NULL;
  this->proximoNodo = listaNodos;
  }
  this->setAtributoInt1(newInt1);
  this->setAtributoInt1(newInt2);
  this->setAtributoInt1(newInt3);
  this->setAtributoInt1(newInt4);
  
  this->setAtributoString1(newString1);
  this->setAtributoString2(newString2);
  
  this->setAtributoNodo1(newPonteiro1);
  this->setAtributoNodo2(newPonteiro2);
}

  Nodo::~Nodo(){
  Nodo* aux;
  aux = this->anteriorNodo;
  this->proximoNodo->anteriorNodo = aux;
  delete this;
}

void Nodo::mostraNodoCliente(){
  cout << "Info Cliente:\n" << "Nome: " << this->getAtributoString1() << "\nidade: \n"<< this->getAtributoInt1();
  cout << "\nendereco: "<< this->getAtributoString2();
}

void Nodo::mostraNodoVeiculo(){
  cout << "Info Veiculo:\n" << "tipo: " << this->getAtributoString1();
  cout << "\nCapacidade de carga: " << this->getAtributoInt1();
  cout << "\nAno de Fabricacao: "<< this->getAtributoInt2() << "\nChassi: \n"<< this->getAtributoInt3();
}

void Nodo::mostraListaCliente(){
  if(this!=NULL){
    this->mostraNodoCliente();
  }
  if(this->proximoNodo != NULL){
    this->proximoNodo->mostraListaCliente();
  }
}

void Nodo::mostraListaVeiculo(){
  if(this!=NULL){
    this->mostraNodoVeiculo();
  }
  if(this->proximoNodo != NULL){
    this->proximoNodo->mostraListaVeiculo();
  }
}
