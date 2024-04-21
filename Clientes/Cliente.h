#ifndef CLIENTE_H
#define CLIENTE_H

#include  <iostream>
#include  <string>
#include "../Nodos/Nodo.h"

using namespace std;
class Cliente : public Nodo{

  private:
  
    Nodo* listaNodo = NULL;
  
  public:

    void setIdade();
    int getIdade();

    void setNome();
    string getNome();
     
    void setEndereco();
    string getEndereco();
    
    void setProximoCliente(Nodo* newProximoCliente);
    Nodo* getProximoCliente();
    
    Cliente(Nodo* listaClientes, int idade, string nome, string endereco);
    ~Cliente();
    
    void mostraCliente();
    void mostraListaCliente();
    
    void buscaCliente(Nodo* lista, string nome);
};

#endif
