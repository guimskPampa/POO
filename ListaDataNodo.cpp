#include  <iostream>
#include  <string>
#include  "ListaDataNodo.h"
//Botar para as classes dos itens herdarem do lista

int setAtributoInt1 (int newAtributoInt1){
  this atributoInt1 = newAtributoInt1;
}
void getAtributoInt1 (){
  return this atributoInt1;
}
int setAtributoInt2 (int newAtributoInt2){
  this atributoInt2 = newAtributoInt2;
}
void getAtributoInt2 (){
  return this atributoInt2;
}
int setAtributoInt3 (int newAtributoInt3){
  this atributoInt3 = newAtributoInt3;
}
void getAtributoInt3 (){
  return this atributoInt3;
}
int setAtributoInt4 (int newAtributoInt4){
  this atributoInt4 = newAtributoInt4;
}
void getAtributoInt4 (){
  return this atributoInt4;
}
String setAtributoString1 (string newAtributoString1){
  this atributoString1 = newAtributoString1;
}
void getAtributoString1 (){
  return this atributoString1;
}
String setAtributoString2 (string newAtributoString2){
  this atributoString2 = newAtributoString2;
}
void getAtributoString2 (){
  return this atributoString2;
}
ListaDataNodo* setProximoNodo (ListaDataNodo* newProximoNodo){
  this proximoNodo = newProximoNodo;
}
void getProximoNodo(){
  return this proximoNodo;
}

ListaDataNodo* setAnteriorNodo (ListaDataNodo* newAnteriorNodo){
  this anteriorNodo = newAnteriorNodo;
}
void getAnteriorNodo(){
  return this anteriorNodo;
}

void setNodoCondicionalString(string newNodo, ListaDataNodo *listaNodos, int escolhaAtributo){

  ListaDataNodo *aux = listaNodos;
           
  while (aux!=NULL){
    if(aux->getAtributoString1()==newNodo){
      if(escolhaAtributo==1){
        this atributoNodo1-> = aux;
      }
      else if(escolhaAtributo==2){
        this atributoNodo2-> = aux;
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
  
void getAtributoNodo1(){
  return this atributoNodo1;
}

void getAtributoNodo2(){
  return this atributoNodo2;
}

ListaDataNodo* criarNodo(ListaDataNodo* listaNodos){
  
  ListaDataNodo* aux = new ListaDataNodo;
  
  if (listaNodos==NULL){
  aux->anteriorNodo = NULL;
  aux->proximoNodo = NULL;
  listaNodos = aux;
  }
  else{
  aux->anteriorNodo = NULL;
  aux->proximoNodo = listaNodos;
  listaNodos->anteriorNodo = aux;
  }
  
  return aux;
}

Void apagaNodo(ListaDataNodo* nodo){
  ListaDataNodo* aux;
  aux = nodo->anteriorNodo;
  nodo->proximoNodo->anteriorNodo = aux;
  delete nodo;
}

