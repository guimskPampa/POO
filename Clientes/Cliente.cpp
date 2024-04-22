#include  "Cliente.h"

void Cliente::setIdade(){
  
    int newIdade;
    cout << "Informe a idade do cliente:\n"<< endl;
    cin >> newIdade;
    
    if (newIdade>=18){
    
      this->setAtributoInt1 (newIdade); 
    }
    else{
    
      cout << "Cliente com idade menor que 18 anos, nao permitido\n"<< endl;
      this->setIdade();
    }
}

int Cliente::getIdade(){
  return this->getAtributoInt1 ();
}

void Cliente::setNome(){

  string newNome;
  cout << "Informe o nome do cliente:\n"<< endl;
  cin >> newNome;
  
  //if(buscaCliente(listaClientes, newNome)!=0){
  
    this->setAtributoString1 (newNome);
 // }
 // else{
    
      //cout << "Cliente com nome ja cadastrado, nao permitido\n"<< endl;
      //this->setNome();
  //  }
  
}

string Cliente::getNome(){
  return this->getAtributoString1 ();
}

void Cliente::setEndereco(){

  string newEndereco;
  cout << "Informe o endereco do cliente:\n"<< endl;
  cin >> newEndereco;
  
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
        :Nodo(listaClientes, idade, 0, 0, 0, nome, endereco, NULL, NULL,0,0){
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
