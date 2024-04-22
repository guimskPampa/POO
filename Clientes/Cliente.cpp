#include  "Cliente.h"

void Cliente::setIdade(){
  
    int newIdade;
    cout << "Informe a idade do cliente:\n"<< endl;
    cin >> newIdade;
    
    if (newIdade>=18){
    
      this->setInt1 (newIdade); 
      return;
    }
    else{
    
      cout << "Cliente com idade menor que 18 anos, nao permitido\n"<< endl;
      this->setIdade();
    }
}

int Cliente::getIdade(){
  return this->getInt1 ();
}

void Cliente::setNome(){

  string newNome;
  cout << "Informe o nome do cliente:\n"<< endl;
  cin >> newNome;
  
  //if(buscaCliente(listaClientes, newNome)!=0){
  
    this->setString1 (newNome);
    return;
 // }
 // else{
    
      //cout << "Cliente com nome ja cadastrado, nao permitido\n"<< endl;
      //this->setNome();
  //  }
  
}

string Cliente::getNome(){
  return this->getString1 ();
}

void Cliente::setEndereco(){

  string newEndereco;
  cout << "Informe o endereco do cliente:\n"<< endl;
  cin >> newEndereco;
  
  this->setString2 (newEndereco);
  return;
}

string Cliente::getEndereco(){
  return this->getString2 ();
}

void Cliente::setProximoCliente(Nodo* newProximoCliente){
  this->setProximoNodo (newProximoCliente);
}

Nodo* Cliente::getProximoCliente(){
  return this->getProximoNodo ();
}

Cliente::Cliente(Nodo* listaClientes, int idade, string nome, string endereco)
        :Nodo(listaClientes, idade, 0, 0, 0, nome, endereco, NULL, NULL,0,0){  
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
  buscaString1(lista, nome, 1);
 }
