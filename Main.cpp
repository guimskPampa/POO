#include  <iostream>
#include  <string>
#include  "Clientes.h"
#include  "Veiculos.h"
#include  "Pedidos.h"

using namespace std;

int main(){

  Clientes *clientes = NULL;
	
  Veiculos *veiculos = NULL;
	
  string nomeClientePedido;
  string tipoVeiculoPedido;
	
  //inicia primeiro pedido
  Pedidos pedido1;
  cout << "selecione nome de cliente para pedido";
  cin >> nomeClientePedido;
  pedido1.setClientePedido(nomeClientePedido, clientes);
  cout << "selecione tipo de veiculo para pedido";
  cin >> tipoVeiculoPedido;
  pedido1.setVeiculoPedido(tipoVeiculoPedido, veiculos);
  pedido1.setDia(12);
  pedido1.setMes(12);
  pedido1.setAno(2012);
  pedido1.setCusto(10000);
       
  return 0;
}



