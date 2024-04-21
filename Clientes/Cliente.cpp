#include  "Cliente.h"

int Cliente::setIdade(int newIdade){
  try {
  
    if (newIdade>=18){
      this->setAtributoInt1 (newIdade); 
      return 1;
    }
    else{
      throw(0);
    }
    
  }
  catch(int erro){
    cout << "Cliente com idade menor que 18 anos, nao permitido";
    return erro;
  }
}

int Cliente::getIdade(){
  return this->getAtributoInt1 ();
}

void Cliente::setNome(string newNome){
  
  this->setAtributoString1 (newNome);
  
}

string Cliente::getNome(){
  return this->getAtributoString1 ();
}

void Cliente::setEndereco(string newEndereco){
  this->setAtributoString2 (newEndereco);
}

string Cliente::getEndereco(){
  return this->getAtributoString2 ();
}

void Cliente::setProximoCliente(Nodo* newProximoCliente){
  this->setProximoNodo (newProximoCliente);
}

Nodo* Cliente::getProximoCliente(){
  return this->getProximoNodo ();
}

Cliente::Cliente(Nodo* listaClientes, int idade, string nome, string endereco)
        :Nodo(listaClientes, idade, 0, 0, 0, nome, endereco, NULL, NULL){
        cout<<"CRIADO1";
  //cout<< "Digite idade, nome e endereco do novo cliente:\n";
  //cin >> idade >> nome >> endereco;
  //(listaNodosClientes, 1,2,3,4,"g","f", teste1, teste2)
  
}

Cliente::~Cliente(){
  cout<<"APAGADO1";
}

void Cliente::mostraCliente(){
  this->mostraNodoCliente();
}

void Cliente::mostraListaCliente(){
  this->NodosCliente();
}

 void Cliente::buscaCliente(Nodo* lista, string nome){
  buscaAtributoString1(lista, nome, 1);
 }
