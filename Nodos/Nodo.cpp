#include  "Nodo.h"

void Nodo::setInt1 (int newAtributoInt1){
  this->int1 = newAtributoInt1;
}
int Nodo::getInt1 (){
  return this->int1;
}
void Nodo::setInt2 (int newAtributoInt2){
  this->int2 = newAtributoInt2;
}
int Nodo::getInt2 (){
  return this->int2;
}
void Nodo::setInt3 (int newAtributoInt3){
  this->int3 = newAtributoInt3;
}
int Nodo::getInt3 (){
  return this->int3;
}
void Nodo::setInt4 (int newAtributoInt4){
  this->int4 = newAtributoInt4;
}
int Nodo::getInt4 (){
  return this->int4;
}
void Nodo::setLongitude (int newLongitude){
  this->longitude = newLongitude;
}
int Nodo::getLongitude (){
  return this->longitude;
}
void Nodo::setLatitude (int newLatitude){
  this->latitude= newLatitude;
}
int Nodo::getLatitude (){
  return this->latitude;
}
void Nodo::setString1 (string newAtributoString1){
  this->string1 = newAtributoString1;
}
string Nodo::getString1 (){
  return this->string1;
}
void Nodo::setString2 (string newAtributoString2){
  this->string2 = newAtributoString2;
}
string Nodo::getString2 (){
  return this->string2;
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

void Nodo::setNodo1 (Nodo* newNodo){
  this->nodo1 = newNodo;
}

void Nodo::setNodo2(Nodo* newNodo){
  this->nodo2 = newNodo;
}

void Nodo::setNodoCondicionalString(string newNodo, Nodo *listaNodos, int escolhaAtributo){

  Nodo* aux = listaNodos;
           
  while (aux!=NULL){
    if(aux->getString1() == newNodo){
      if(escolhaAtributo == 1){
        this->nodo1 = aux;
      }
      else if(escolhaAtributo == 2){
        this->nodo2 = aux;
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
  
Nodo*  Nodo::getNodo1(){
  return this->nodo1;
}

Nodo* Nodo::getNodo2(){
  return this->nodo2;
}

Nodo::Nodo(Nodo* listaNodos, int newInt1, int newInt2, int newInt3, int newInt4, string newString1, string newString2, Nodo* newPonteiro1, Nodo* newPonteiro2, int newLongitude, int newLatitude){
  cout<<"CRIADO2"; 
  
  if (listaNodos==NULL){
  this->anteriorNodo = NULL;
  this->proximoNodo = NULL;
  listaNodos = this;
  }
  else{
  this->anteriorNodo = NULL;
  this->proximoNodo = listaNodos;
  listaNodos = this;
  }
  this->setInt1(newInt1);
  this->setInt2(newInt2);
  this->setInt3(newInt3);
  this->setInt4(newInt4);
  
  this->setString1(newString1);
  this->setString2(newString2);
  
  this->setNodo1(newPonteiro1);
  this->setNodo2(newPonteiro2);
  
  this->setLongitude (newLongitude);
  this->setLatitude (newLatitude);
}

  Nodo::~Nodo(){
  cout<<"APAGADO2";
  Nodo* aux;
  aux = this->anteriorNodo;
  this->proximoNodo->anteriorNodo = aux;
  delete this;
}

void Nodo::mostraNodoCliente(){
  cout << "\nInfo Cliente:\n" << "Nome: " << this->getString1() << "\nidade: "<< this->getInt1();
  cout << "\nendereco: "<< this->getString2() << "\n"<< endl;
  return;
}

void Nodo::mostraNodoVeiculo(){
  cout << "\nInfo Veiculo:\n" << "tipo: " << this->getString1();
  cout << "\nCapacidade de carga: " << this->getInt1();
  cout << "\nAno de Fabricacao: "<< this->getInt2();
  cout << "\nChassi: "<< this->getInt3() << "\n"<< endl;
  return;
}

void Nodo::NodosCliente(){

  this->mostraNodoCliente();

  if (this->proximoNodo!=NULL){
    this->proximoNodo->NodosCliente();
  }

  return;
}

void Nodo::NodosVeiculo(){

  this->mostraNodoVeiculo();

  if (this->proximoNodo!=NULL){
    this->proximoNodo->NodosVeiculo();
  }
  
  return;
}

void Nodo::buscaAtributoString1(Nodo* lista, string target, int objeto){
  Nodo* aux = lista;
      
  while(aux!=NULL){
    if(toLowerString(aux->string1) == toLowerString(target)){
      switch(objeto){
      
        case 1: mostraNodoCliente();

        break;
  
        case 2: mostraNodoVeiculo();

        break;
      }
      return;
    } 
    aux = aux->proximoNodo;
  }
  cout << "objeto de busca inexistente"<<endl;
 }
