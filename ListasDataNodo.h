#include  <iostream>
#include  <string>

using namespace std;

class ListaDataNodo{

  private:
  
    int atributoInt1;//Clientes::Idade      ; Veiculos::CapacidadeCarga           ; Pedidos:: Dia;
    int atributoInt2;//Clientes::           ; Veiculos::AnoFabricacao             ; Pedidos:: Mes;
    int atributoInt3;//Clientes::           ; Veiculos::Chassi                    ; Pedidos:: Ano;
    int atributoInt4;//Clientes::           ; Veiculos::                          ; Pedidos:: ;
    
    string atributoString1;//Clientes::Nome           ; Veiculos::Tipo            ; Pedidos:: ;
    string atributoString2;//Clientes::Endereco       ; Veiculos::                ; Pedidos:: ;
    
    ListaDataNodo* atributoNodo1;//Clientes::           ; Veiculos::                          ; Pedidos:: Cliente;
    ListaDataNodo* atributoNodo2;//Clientes::           ; Veiculos::                          ; Pedidos:: Veiculo;
    
    ListaDataNodo* proximoNodo;
    ListaDataNodo* anteriorNodo;
    
  protected:
  
    void setAtributoInt1 (int newAtributoInt1);
    int getAtributoInt1 ();
    
    void setAtributoInt2 (int newAtributoInt2);
    int getAtributoInt2 ();
    
    void setAtributoInt3 (int newAtributoInt3);
    int getAtributoInt3 ();
    
    void setAtributoInt4 (int newAtributoInt4);
    int getAtributoInt4 ();
    
    void setAtributoString1 (string newAtributoString1);
    string getAtributoString1 ();
    
    void setAtributoString2 (string newAtributoString2);
    string getAtributoString2 ();
    
    void setProximoNodo (ListaDataNodo* newProximoNodo);
    ListaDataNodo* getProximoNodo();
    
    void setAnteriorNodo (ListaDataNodo* newAnteriorNodo);
    ListaDataNodo* getAnteriorNodo();
    
    void setNodoCondicionalString(string newNodo, ListaDataNodo *listaNodos, int escolhaAtributo);
    
    ListaDataNodo* getAtributoNodo1();
    ListaDataNodo* getAtributoNodo2();
    
    void criarNodo(ListaDataNodo* listaNodos);
    void apagaNodo(ListaDataNodo* nodo);
};
