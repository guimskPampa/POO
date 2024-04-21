#ifndef NODO_H
#define NODO_H

#include  <iostream>
#include  <string>
#include  "../Recursos/Recurso.h"

using namespace std;

class Nodo {

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
    
    void setProximoNodo (Nodo* newProximoNodo);
    Nodo* getProximoNodo();
    
    void setAnteriorNodo (Nodo* newAnteriorNodo);
    Nodo* getAnteriorNodo();
    
    void setAtributoNodo1 (Nodo* newNodo);
    void setAtributoNodo2 (Nodo* newNodo);
    void setNodoCondicionalString(string newNodo, Nodo *listaNodos, int escolhaAtributo);
    
    Nodo* getAtributoNodo1();
    Nodo* getAtributoNodo2();
    
    void mostraNodoVeiculo();
    void mostraNodoCliente();
    
    Nodo(Nodo* listaNodos, int newInt1, int newInt2, int newInt3, int newInt4, string newString1, string newString2, Nodo* newNodo1, Nodo* newNodo2);
    
    void buscaAtributoString1(Nodo* lista, string target, int objeto);
    
    
  public:
  
    virtual void NodosCliente();
    virtual void NodosVeiculo();
    
    virtual ~Nodo();
};

#endif
