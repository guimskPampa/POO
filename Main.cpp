#include  <iostream>
#include  <string>
#include  "Clientes.h"
#include  "Veiculos.h"
#include  "Pedidos.h"

using namespace std;

int main(){

  ListaDataNodo* listaClientes = NULL;
  ListaDataNodo* listaVeiculos = NULL;
  ListaDataNodo* listaPedidos = NULL;
  
  listaClientes = criarCliente(ListaDataNodo* listaClientes);
  listaVeiculos = criarVeiculo(ListaDataNodo* listaVeiculos);
  listaPedidos = criarPedido(ListaDataNodo* listaPedidos);
  
  return 0;
}



