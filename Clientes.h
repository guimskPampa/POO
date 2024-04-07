#include  <iostream>
#include  <string>

class Clientes : protected ListasDataNodo{
    
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
    Void apagaCliente(ListaDataNodo* cliente);
};
