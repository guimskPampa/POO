#ifndef MAIN_H
#define MAIN_H

#include  <iostream>
#include  <string>
#include  "Clientes/Cliente.h"
#include  "Veiculos/Veiculo.h"
#include  "Pedidos/Pedido.h"
#include "Nodos/Nodo.h"


using namespace std;

int main(){
  
  int escolhaClasse=1, escolhaFuncao=1;
  Nodo* listaClientes = NULL, * listaVeiculos = NULL, * listaPedidos = NULL;
  
  Cliente* clientes = new Cliente(listaClientes, 15, "Jonatan", "Alegrete");
  Veiculo* veiculos = new Veiculo(listaVeiculos, 1, 2, 3);
  Pedido* pedidos = new Pedido(listaPedidos, 1, 2, 3, 4, listaClientes, listaVeiculos);
  
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
          Cliente* listaClientes = new Cliente(15, "Jonatan", "Alegrete");
          //Usa castinga para transformar Nodo* em cliente*
        }
        else if (escolhaFuncao == 2){
          listaClientes->~Cliente();//ta tirando o primeiro sempre, criar metodo de escolha
        }
        else if (escolhaFuncao == 3){
    
        }
        else{
          return 0;
        }
        
    case 2:
    
      if (escolhaFuncao == 1){
        Veiculo* veiculos = new Veiculo(listaVeiculos, 1, 2, 3);
      }
      else if (escolhaFuncao == 2){
        listaVeiculos->~Veiculo();
      }
      else if (escolhaFuncao == 3){
  
      }
      else{
          return 0;
        }
        
    case 3:
  
     if (escolhaFuncao == 1){
        Pedido* pedidos = new Pedido(listaPedidos, 1, 2, 3, 4, listaClientes, listaVeiculos);
      }
      else if (escolhaFuncao == 2){
        listaPedidos->~Pedido();
      }
      else if (escolhaFuncao == 3){
  
      }
      else{
          return 0;
      }
    }  
  }
  
  
  return 0;
}
#endif


