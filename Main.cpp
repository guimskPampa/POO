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
  
    cout<<"Escolha dentre as opcoes:\n"<<endl;
    cout<<"1-Cliente;\n2- Veiculo\n3- Pedido\n0- Parar programa\n"<<endl;
    cin>>escolhaClasse;
    
    cout<<"Baseada na escolha anterior escolha dentre as opcoes:\n"<<endl;
    cout<<"1-Criar;\n2- Deletar\n3- Informacoes\n0- Parar programa\n"<<endl;
    cin>>escolhaFuncao;
    
    
    switch (escolhaClasse){
    
      case 1:
      
        if (escolhaFuncao == 1){
        
          listaClientes = new Cliente(listaClientes, 0, "0", "0");
          
          dynamic_cast<Cliente*>(listaClientes)->setIdade();
          dynamic_cast<Cliente*>(listaClientes)->setNome();
          dynamic_cast<Cliente*>(listaClientes)->setEndereco();
          
        }
        else if (escolhaFuncao == 2){
          delete listaClientes;//ta tirando o primeiro sempre, criar metodo de escolha
        }
        else if (escolhaFuncao == 3){
          if (listaClientes!=NULL){
          dynamic_cast<Cliente*>(listaClientes)->mostraListaCliente();
          }
        }
        else{
          return 0;
        }
        
      break;
        
      case 2:
    
        if (escolhaFuncao == 1){
      
          listaVeiculos = new Veiculo(listaVeiculos, 0, 0, 0, "0",0,0);
        
         dynamic_cast<Veiculo*>(listaVeiculos)->setTipo();
         dynamic_cast<Veiculo*>(listaVeiculos)->setCapacidadeCarga();
         dynamic_cast<Veiculo*>(listaVeiculos)->setAnoFabricacao();
         dynamic_cast<Veiculo*>(listaVeiculos)->setChassi();
         dynamic_cast<Veiculo*>(listaVeiculos)->setLatitude();
         dynamic_cast<Veiculo*>(listaVeiculos)->setLongitude();

       }
        else if (escolhaFuncao == 2){
          delete listaVeiculos;
        }
        else if (escolhaFuncao == 3){
          if (listaVeiculos!=NULL){
          dynamic_cast<Veiculo*>(listaVeiculos)->mostraListaVeiculo();
          }
        }
        else{
            return 0;
          }

      break;

      case 3:
  
        if (escolhaFuncao == 1){

          listaPedidos = new Pedido(listaPedidos, 0, 0, 0, 0, NULL, NULL,0,0);

          dynamic_cast<Pedido*>(listaPedidos)->setDia();
          dynamic_cast<Pedido*>(listaPedidos)->setMes();
          dynamic_cast<Pedido*>(listaPedidos)->setAno();
          dynamic_cast<Pedido*>(listaPedidos)->setCusto();
          dynamic_cast<Pedido*>(listaPedidos)->setLatitude();
          dynamic_cast<Pedido*>(listaPedidos)->setLongitude();
          dynamic_cast<Pedido*>(listaPedidos)->setClientePedido(listaClientes);
          dynamic_cast<Pedido*>(listaPedidos)->setVeiculoPedido(listaVeiculos);
         
        }
        else if (escolhaFuncao == 2){
          delete listaPedidos;
        }
        else if (escolhaFuncao == 3){
  
        }
        else{
          return 0;
        }

      break;
    }
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
  }
  
  
  return 0;
}
#endif


