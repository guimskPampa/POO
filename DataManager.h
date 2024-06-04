#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Cliente.h"
#include "Veiculo.h"
#include "Pedido.h"

class DataManager {
public:
    std::vector<Cliente*> clientes;
    std::vector<Pedido*> pedidos;

    DataManager(const std::string& filename);
    void readCSV(const std::string& filename);
};

#endif
