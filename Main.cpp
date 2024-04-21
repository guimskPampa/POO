#ifndef MAIN_CPP
#define MAIN_CPP

#include  <iostream>
#include  <string>
#include  "Clientes/Cliente.h"
#include  "Veiculos/Veiculo.h"
#include  "Pedidos/Pedido.h"
#include "Nodos/Nodo.h"


using namespace std;

int main(){
  
  
  Nodo* listaClientes = NULL;
  Nodo* listaVeiculos = NULL;
  Nodo* listaPedidos = NULL;
 
  
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
          listaClientes = new Cliente(listaClientes, 15, "Jonatan", "Alegrete");
          //Usa castinga para transformar Nodo* em cliente*
        }
        else if (escolhaFuncao == 2){
          delete listaClientes;//ta tirando o primeiro sempre, criar metodo de escolha
        }
        else if (escolhaFuncao == 3){
           listaClientes->NodosCliente();
        }
        else{
          return 0;
        }
        
    case 2:
    
      if (escolhaFuncao == 1){
        listaVeiculos = new Veiculo(listaVeiculos, 1, 2, 3, "fusca",1,1);
      }
      else if (escolhaFuncao == 2){
        delete listaVeiculos;
      }
      else if (escolhaFuncao == 3){
        listaVeiculos->NodosVeiculo();
      }
      else{
          return 0;
        }
        
    case 3:
  
     if (escolhaFuncao == 1){
         listaPedidos = new Pedido(listaPedidos, 1, 2, 3, 4, listaClientes, listaVeiculos,1,1);
      }
      else if (escolhaFuncao == 2){
        delete listaPedidos;
      }
      else if (escolhaFuncao == 3){
  
      }
      else{
          return 0;
      }
    }
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  }
  
  
  return 0;
}
#endif


