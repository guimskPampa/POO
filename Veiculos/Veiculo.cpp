#include  "Veiculo.h"

void Veiculo::setTipo(){
  
  string newTipo;
  cout<<"informe o tipo de veiculo: carro, moto, caminhao ou aviao:\n"<<endl;
  cin>>newTipo;

  this->setAtributoString1 (newTipo);
}

string Veiculo::getTipo(){
  return  this->getAtributoString1 ();
}
     
void Veiculo::setCapacidadeCarga(){

  int newCapacidadeCarga;
  cout<<"informe a quantia de capacidade de carga:\n"<<endl;
  cin>>newCapacidadeCarga;
  
  this->setAtributoInt1 (newCapacidadeCarga); 
}

int Veiculo::getCapacidadeCarga(){
  return this->getAtributoInt1 (); 
}

void Veiculo::setAnoFabricacao(){
  
  int newAnoFabricacao;
  cout<<"informe o ano de fabricação:\n"<<endl;
  cin>>newAnoFabricacao;

  this->setAtributoInt2 (newAnoFabricacao);
}

int Veiculo::getAnoFabricacao(){
  return  this->getAtributoInt2 ();
}
     
void Veiculo::setChassi(){

  int newChassi;
  cout<<"informe o chassi:\n"<<endl;
  cin>>newChassi;

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
void Veiculo::setLongitude(){

  int newLongitude;
  cout<<"informe a Longitude do veiculo:\n"<<endl;
  cin>>newLongitude;

  this->Nodo::setLongitude (newLongitude);
}

int Veiculo::getLongitude(){
  return  this->getLongitude();
}

void Veiculo::setLatitude(){
  
  int newLatitude;
  cout<<"informe a Latitude do veiculo:\n"<<endl;
  cin>>newLatitude;

  this->Nodo::setLatitude(newLatitude);
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
