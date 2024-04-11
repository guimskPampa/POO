#include  <iostream>
#include  <string>
#include  "Nodo.h"

using namespace std;

class Clientes : protected Nodo{
    
  public:

    void setIdade(int minhaIdade);
    int getIdade() const;

    void setNome(string nome);
    string getNome() const;
     
    void setEndereco(string newEndereco);
    string getEndereco() const;
    
    void setProximoCliente(Nodo* newProximoCliente);
    Nodo* getProximoCliente() const;
    
    Cliente(Nodo* listaClientes);
    ~Cliente(Nodo* cliente);
    
    void mostraCliente(Nodo* nodo) const;
};
