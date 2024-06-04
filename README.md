#include <iostream>
#include "DataManager.h"
#include "Geocoding.h"

using namespace std;

int main() {
    DataManager dataManager("data.csv"); // Assumindo que o CSV se chama "data.csv"

    for (const auto& cliente : dataManager.clientes) {
        cout << "Cliente: " << cliente->getNome() << ", " << cliente->getEmail() << endl;
    }

    for (const auto& pedido : dataManager.pedidos) {
        Coordenadas coordColeta = Geocoding::converterEndereco(pedido->getEnderecoColeta());
        Coordenadas coordEntrega = Geocoding::converterEndereco(pedido->getEnderecoEntrega());
        cout << "Pedido de " << pedido->getCliente()->getNome()
             << " de " << coordColeta.latitude << ", " << coordColeta.longitude
             << " para " << coordEntrega.latitude << ", " << coordEntrega.longitude << endl;
    }

    return 0;
}
