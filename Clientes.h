#include  <iostream>
#include  <string>
#include  "ListasDataNodo.h"

using namespace std;

class Clientes : protected ListaDataNodo{
    
  public:

    void setIdade(int minhaIdade);
    int getIdade();

    void setNome(string nome);
    string getNome();
     
    void setEndereco(string newEndereco);
    string getEndereco();
    
    void setProximoCliente(ListasDataNodo* newProximoCliente);
    ListaDataNodo* getProximoCliente();
    
    ListaDataNodo* criarCliente(ListaDataNodo* listaClientes);
    void apagaCliente(ListaDataNodo* cliente);
};
