#include  <iostream>
#include  <string>
#include  "Clientes.h"
#include  "Veiculos.h"
#include  "Pedidos.h"

using namespace std;

int main(){
  
  int escolhaClasse=1, escolhaFuncao=1;
  
  ListaDataNodo* listaClientes = NULL;
  ListaDataNodo* listaVeiculos = NULL;
  ListaDataNodo* listaPedidos = NULL;
  
  listaClientes = criarCliente(ListaDataNodo* listaClientes);
  listaVeiculos = criarVeiculo(ListaDataNodo* listaVeiculos);
  listaPedidos = criarPedido(ListaDataNodo* listaPedidos);
  
  while(escolhaClasse!=0&&escolhaFuncao!=0){
  
    cout<<"Escolha dentre as opcoes:\n";
    cout<<"1-Cliente;\n2- Veiculo\n3- Pedido\n0- Parar programa\n";
    cin>>escolhaClasse;
    
    cout<<"Baseada na escolha anterior escolha dentre as opcoes:\n";
    cout<<"1-Criar;\n2- Deletar\n3- Informacoes\n0- Parar programa\n";
    cin>>escolhaFuncao;
    
    
    switch (escolhaClasse){
    
      case 1:
      
        if (escolhaFuncao == 1){
          listaClientes = criarCliente(ListaDataNodo* listaClientes);
        }
        else if (escolhaFuncao == 2){
          listaClientes = apagaCliente(ListaDataNodo* cliente);
        }
        else if (escolhaFuncao == 3){
    
        }
        else{
          return 0
        }
        
    case 2:
    
      if (escolhaFuncao == 1){
        listaVeiculos = criarVeiculo(ListaDataNodo* listaVeiculos);
      }
      else if (escolhaFuncao == 2){
        listaVeiculos = apagaVeiculo(ListaDataNodo* veiculo);
      }
      else if (escolhaFuncao == 3){
  
      }
      else{
          return 0
        }
        
    case 3:
  
     if (escolhaFuncao == 1){
        listaPedidos = criarPedido(ListaDataNodo* listaPedidos);
      }
      else if (escolhaFuncao == 2){
        listaPedidos = apagaPedido(ListaDataNodo* pedido);
      }
      else if (escolhaFuncao == 3){
  
      }
      else{
          return 0
        }
        
  }
  
  
  return 0;
}



