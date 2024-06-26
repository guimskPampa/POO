#ifndef NODO_H
#define NODO_H

#include  <iostream>
#include  <string>
#include  "../Recursos/Recurso.h"

using namespace std;

class Nodo: public Recurso {

  private:
  
    int int1;//Clientes::Idade      ; Veiculos::CapacidadeCarga           ; Pedidos:: Dia;
    int int2;//Clientes::           ; Veiculos::AnoFabricacao             ; Pedidos:: Mes;
    int int3;//Clientes::           ; Veiculos::Chassi                    ; Pedidos:: Ano;
    int int4;//Clientes::           ; Veiculos::                          ; Pedidos:: ;
    
    double longitude;
    double latitude;
    
    string string1;//Clientes::Nome           ; Veiculos::Tipo            ; Pedidos:: ;
    string string2;//Clientes::Endereco       ; Veiculos::                ; Pedidos:: ;
    
    Nodo* nodo1;//Clientes::           ; Veiculos::                          ; Pedidos:: Cliente;
    Nodo* nodo2;//Clientes::           ; Veiculos::                          ; Pedidos:: Veiculo;
    
    Nodo* proximoNodo;
    Nodo* anteriorNodo;
    
  protected:
  
    void setInt1 (int newAtributoInt1);
    int getInt1 ();
    
    void setInt2 (int newAtributoInt2);
    int getInt2 ();
    
    void setInt3 (int newAtributoInt3);
    int getInt3 ();
    
    void setInt4 (int newAtributoInt4);
    int getInt4 ();
    
    void setLongitude (int newLongitude);
    double getLongitude();
    
    void setLatitude (int newLatitude);
    double getLatitude();
    
    void setString1 (string newAtributoString1);
    string getString1 ();
    
    void setString2 (string newAtributoString2);
    string getString2 ();
    
    void setProximoNodo (Nodo* newProximoNodo);
    Nodo* getProximoNodo();
    
    void setAnteriorNodo (Nodo* newAnteriorNodo);
    Nodo* getAnteriorNodo();
    
    void setNodo1 (Nodo* newNodo);
    Nodo* getNodo1();

    void setNodo2 (Nodo* newNodo);
    Nodo* getNodo2();    
    
    void mostraNodoVeiculo();
    void mostraNodoCliente();
    
    Nodo(Nodo* listaNodos, int newInt1, int newInt2, int newInt3, int newInt4, string newString1, string newString2, Nodo* newNodo1, Nodo* newNodo2, int newLongitude, int newLatitude);
    virtual ~Nodo();

    void setNodoCondicionalString(string newNodo, Nodo *listaNodos, int escolhaAtributo);
    void buscaString1(Nodo* lista, string target, int objeto);
    
    virtual void NodosCliente();
    virtual void NodosVeiculo();
    void NodosPedido();

    Nodo* menorDistancia(Nodo* listaVeiculos);

};

#endif
