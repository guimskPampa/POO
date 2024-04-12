#include  <iostream>
#include  <string>
#include  "Clientes/Cliente.h"
#include  "Veiculos/Veiculo.h"
#include  "Pedidos/Pedido.h"

using namespace std;

int main(){
  
  int escolhaClasse=1, escolhaFuncao=1;
  
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
          Nodo* listaClientes = new Cliente(ListaDataNodo* listaClientes);
        }
        else if (escolhaFuncao == 2){
          Nodo* listaClientes = ~Cliente(ListaDataNodo* cliente);
        }
        else if (escolhaFuncao == 3){
    
        }
        else{
          return 0
        }
        
    case 2:
    
      if (escolhaFuncao == 1){
        Nodo* listaVeiculos = new Veiculo(Nodo* listaVeiculos);
      }
      else if (escolhaFuncao == 2){
        Nodo* listaVeiculos = ~Veiculo(Nodo* veiculo);
      }
      else if (escolhaFuncao == 3){
  
      }
      else{
          return 0
        }
        
    case 3:
  
     if (escolhaFuncao == 1){
        Nodo* listaPedidos = new Pedido(Nodo* listaPedidos);
      }
      else if (escolhaFuncao == 2){
        Nodo* listaPedidos = ~Pedido(Nodo* pedido);
      }
      else if (escolhaFuncao == 3){
  
      }
      else{
          return 0
        }
        
  }
  
  
  return 0;
}



