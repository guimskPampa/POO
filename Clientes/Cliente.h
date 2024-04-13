#ifndef CLIENTE_H
#define CLIENTE_H

#include  <iostream>
#include  <string>
#include "../Nodos/Nodo.h"

using namespace std;
class Cliente : protected Nodo{

  private:
  
    Nodo* listaNodo = NULL;
  
  public:

    void setIdade(int minhaIdade);
    int getIdade();

    void setNome(string nome);
    string getNome();
     
    void setEndereco(string newEndereco);
    string getEndereco();
    
    void setProximoCliente(Nodo* newProximoCliente);
    Nodo* getProximoCliente();
    
    Cliente(int idade, string nome, string endereco);
    ~Cliente();
    
    void mostraCliente();
};

#endif
