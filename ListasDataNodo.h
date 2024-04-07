#include  <iostream>
#include  <string>

class ListasDataNodo (){

  private:
  
    int atributoInt1;//Clientes::Idade      ; Veiculos::CapacidadeCarga           ; Pedidos:: Dia;
    int atributoInt2;//Clientes::           ; Veiculos::AnoFabricacao             ; Pedidos:: Mes;
    int atributoInt3;//Clientes::           ; Veiculos::Chassi                    ; Pedidos:: Ano;
    int atributoInt4;//Clientes::           ; Veiculos::                          ; Pedidos:: ;
    
    String atributoString1;//Clientes::Nome           ; Veiculos::Tipo            ; Pedidos:: ;
    String atributoString2;//Clientes::Endereco       ; Veiculos::                ; Pedidos:: ;
    
    ListaDataNodo* atributoNodo1;//Clientes::           ; Veiculos::                          ; Pedidos:: Cliente;
    ListaDataNodo* atributoNodo2;//Clientes::           ; Veiculos::                          ; Pedidos:: Veiculo;
    
    ListaDataNodo* proximoNodo;
    ListaDataNodo* anteriorNodo;
    
  protected:
  
    int setAtributoInt1 (int newAtributoInt1);
    void getAtributoInt1 ();
    
    int setAtributoInt2 (int newAtributoInt2);
    void getAtributoInt2 ();
    
    int setAtributoInt3 (int newAtributoInt3);
    void getAtributoInt3 ();
    
    int setAtributoInt4 (int newAtributoInt4);
    void getAtributoInt4 ();
    
    String setAtributoString1 (int newAtributoString1);
    void getAtributoString1 ();
    
    String setAtributoString2 (int newAtributoString2);
    void getAtributoString2 ();
    
    ListaDataNodo* setProximoNodo (ListaDataNodo* newProximoNodo);
    void getProximoNodo();
    
    ListaDataNodo* setAnteriorNodo (ListaDataNodo* newAnteriorNodo);
    void getAnterior();
    
    void setNodoCondicionalString(string newNodo, ListaDataNodo *listaNodos, int escolhaAtributo);
    
    void getAtributoNodo1();
    void getAtributoNodo2();
    
    ListaDataNodo* criarNodo(ListaDataNodo* listaNodos);
    Void apagaNodo(ListaDataNodo* nodo);
}
