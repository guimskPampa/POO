#include  "Pedido.h"


void Pedido::setDia(){

  int newDia;
  cout<<"Informe o dia do pedido:\n"<<endl;
  cin>>newDia;

  this->setInt1 (newDia);
}
    
int Pedido::getDia(){
  return this->getInt1 ();
}

void Pedido::setMes(){

  int newMes;
  cout<<"Informe o mes do pedido:\n"<<endl;
  cin>>newMes;

  this->setInt2 (newMes);
}
    
int Pedido::getMes(){
  return this->getInt2 ();
}
    
void Pedido::setAno(){

  int newAno;
  cout<<"Informe o ano do pedido:\n"<<endl;
  cin>>newAno;

  this->setInt3 (newAno); 
}
    
int Pedido::getAno(){
  return this->getInt3 ();
}
    
void Pedido::setCusto(){

  int newCusto;
  cout<<"Informe o custo do pedido:\n"<<endl;
  cin>>newCusto;

  this->setInt4 (newCusto); 
}
    
int Pedido::getCusto(){
  return this->getInt4 ();
}
    
void Pedido::setClientePedido(Nodo* listaClientes){

  string newCliente;
  cout<<"Informe o nome do cliente deste pedido:\n"<<endl;
  cin>>newCliente;

  this->setNodoCondicionalString(newCliente, listaClientes, 1);
}

void Pedido::setVeiculoPedido(Nodo* listaVeiculos){

  string newVeiculo;
  cout<<"Informe o tipo do veiculo deste pedido:\n"<<endl;
  cin>>newVeiculo;

  this->setNodoCondicionalString(newVeiculo, listaVeiculos, 2);
}

Nodo* Pedido::getClientePedido(){
  return this->getNodo1();
}

Nodo* Pedido::getVeiculoPedido(){
  return this->getNodo2();
}

void Pedido::setLatitude(){

  int newLatitude;
  cout<<"informe a Latitude do pedido:\n"<<endl;
  cin>>newLatitude;

  this->Nodo::setLatitude(newLatitude);
}

string Pedido::getLatitude(){
  return  this->getLatitude();
}

void Pedido::setLongitude(){

  int newLongitude;
  cout<<"informe a Longitude do pedido:\n"<<endl;
  cin>>newLongitude;

  this->Nodo::setLongitude(newLongitude);
}

string Pedido::getLongitude(){
  return  this->getLongitude();
}

Pedido:: Pedido(Nodo* listaNodo,int ano, int mes, int dia, int custo, Nodo* cliente, Nodo* veiculo, int newLongitude, int newLatitude)
       :Nodo(listaNodo, ano, mes, dia, custo, "", "", cliente, veiculo, newLongitude, newLatitude){
  
  //cout << "escolha cliente, veiculo, ano, mes, dia, custo do pedido\n";
  //cin >> cliente >> veiculo >> ano >> mes >> dia >> custo;
}

Pedido::~Pedido(){

}
void Pedido::mostraPedido(){
  this->mostraNodoVeiculo();
  this->mostraNodoCliente();
}
