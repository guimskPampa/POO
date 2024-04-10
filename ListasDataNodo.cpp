#include  <iostream>
#include  <string>
#include  "ListasDataNodo.h"


void ListaDataNodo::setAtributoInt1 (int newAtributoInt1){
  this->atributoInt1 = newAtributoInt1;
}
int ListaDataNodo::getAtributoInt1 (){
  return this->atributoInt1;
}
void ListaDataNodo::setAtributoInt2 (int newAtributoInt2){
  this->atributoInt2 = newAtributoInt2;
}
int ListaDataNodo::getAtributoInt2 (){
  return this->atributoInt2;
}
void ListaDataNodo::setAtributoInt3 (int newAtributoInt3){
  this->atributoInt3 = newAtributoInt3;
}
int ListaDataNodo::getAtributoInt3 (){
  return this->atributoInt3;
}
void ListaDataNodo::setAtributoInt4 (int newAtributoInt4){
  this->atributoInt4 = newAtributoInt4;
}
int ListaDataNodo::getAtributoInt4 (){
  return this->atributoInt4;
}
void ListaDataNodo::setAtributoString1 (string newAtributoString1){
  this->atributoString1 = newAtributoString1;
}
string ListaDataNodo::getAtributoString1 (){
  return this->atributoString1;
}
void ListaDataNodo::setAtributoString2 (string newAtributoString2){
  this->atributoString2 = newAtributoString2;
}
string ListaDataNodo::getAtributoString2 (){
  return this->atributoString2;
}
void ListaDataNodo::setProximoNodo (ListaDataNodo* newProximoNodo){
  this->proximoNodo = newProximoNodo;
}
ListaDataNodo* ListaDataNodo::getProximoNodo(){
  return this->proximoNodo;
}

void ListaDataNodo::setAnteriorNodo (ListaDataNodo* newAnteriorNodo){
  this->anteriorNodo = newAnteriorNodo;
}
ListaDataNodo*  ListaDataNodo::getAnteriorNodo(){
  return this->anteriorNodo;
}

void ListaDataNodo::setNodoCondicionalString(string newNodo, ListaDataNodo *listaNodos, int escolhaAtributo){

  ListaDataNodo* aux = listaNodos;
           
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
  
ListaDataNodo*  ListaDataNodo::getAtributoNodo1(){
  return this->atributoNodo1;
}

ListaDataNodo*  ListaDataNodo::getAtributoNodo2(){
  return this->atributoNodo2;
}

void ListaDataNodo::criarNodo(ListaDataNodo* listaNodos){
//mudar recebbimento assim como dito linha abaixo
  //Recebe endereco e muda endereco apontado por ponteiro
  ListaDataNodo* aux = new ListaDataNodo;
  
  if (listaNodos==NULL){
  aux->anteriorNodo = NULL;
  aux->proximoNodo = NULL;
  listaNodos = aux;
  }
  else{
  aux->anteriorNodo = listaNodos;
  aux->proximoNodo = NULL;
  }
}

void ListaDataNodo::apagaNodo(ListaDataNodo* nodo){
  ListaDataNodo* aux;
  aux = nodo->anteriorNodo;
  nodo->proximoNodo->anteriorNodo = aux;
  delete nodo;
}

