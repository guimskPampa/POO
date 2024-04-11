#include  <iostream>
#include  <string>

using namespace std;

class Nodo{

  private:
  
    int atributoInt1;//Clientes::Idade      ; Veiculos::CapacidadeCarga           ; Pedidos:: Dia;
    int atributoInt2;//Clientes::           ; Veiculos::AnoFabricacao             ; Pedidos:: Mes;
    int atributoInt3;//Clientes::           ; Veiculos::Chassi                    ; Pedidos:: Ano;
    int atributoInt4;//Clientes::           ; Veiculos::                          ; Pedidos:: ;
    
    string atributoString1;//Clientes::Nome           ; Veiculos::Tipo            ; Pedidos:: ;
    string atributoString2;//Clientes::Endereco       ; Veiculos::                ; Pedidos:: ;
    
    Nodo* atributoNodo1;//Clientes::           ; Veiculos::                          ; Pedidos:: Cliente;
    Nodo* atributoNodo2;//Clientes::           ; Veiculos::                          ; Pedidos:: Veiculo;
    
    Nodo* proximoNodo;
    Nodo* anteriorNodo;
    
  protected:
  
    void setAtributoInt1 (int newAtributoInt1);
    int getAtributoInt1 () const;
    
    void setAtributoInt2 (int newAtributoInt2);
    int getAtributoInt2 () const;
    
    void setAtributoInt3 (int newAtributoInt3);
    int getAtributoInt3 () const;
    
    void setAtributoInt4 (int newAtributoInt4);
    int getAtributoInt4 () const;
    
    void setAtributoString1 (string newAtributoString1);
    string getAtributoString1 () const;
    
    void setAtributoString2 (string newAtributoString2);
    string getAtributoString2 () const;
    
    void setProximoNodo (Nodo* newProximoNodo);
    Nodo* getProximoNodo() const;
    
    void setAnteriorNodo (Nodo* newAnteriorNodo);
    Nodo* getAnteriorNodo() const;
    
    void setNodoCondicionalString(string newNodo, Nodo *listaNodos, int escolhaAtributo);
    
    Nodo* getAtributoNodo1() const;
    Nodo* getAtributoNodo2() const;
    
    Nodo(Nodo* listaNodos);
    ~Nodo(Nodo* nodo);
    
    void mostraNodoVeiculo(Nodo* veiculo) const;
    void mostraNodoCliente(Nodo* cliente) const;
};
