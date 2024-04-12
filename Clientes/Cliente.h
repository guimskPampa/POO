#include  <iostream>
#include  <string>
#include  "../Nodos/Nodo.h"

using namespace std;

class Cliente : protected Nodo{
    
  public:

    void setIdade(int minhaIdade);
    int getIdade();

    void setNome(string nome);
    string getNome();
     
    void setEndereco(string newEndereco);
    string getEndereco();
    
    void setProximoCliente(Nodo* newProximoCliente);
    Nodo* getProximoCliente();
    
    Cliente(Nodo* listaClientes);
    ~Cliente();
    
    void mostraCliente();
};
