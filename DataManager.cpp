#include "DataManager.h"

DataManager::DataManager(const std::string& filename) {
    readCSV(filename);
}

void DataManager::readCSV(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream s(line);
        std::string field;
        std::vector<std::string> fields;

        while (std::getline(s, field, ',')) {
            fields.push_back(field);
        }

        if (fields.size() == 10) { 
            Cliente* cliente = new Cliente(fields[0], fields[1], fields[2], fields[3], fields[4]);
            Pedido* pedido = new Pedido(cliente, fields[5], fields[6], std::stod(fields[7]), std::stod(fields[8]), std::stoi(fields[9]));

            clientes.push_back(cliente);
            pedidos.push_back(pedido);
        }
    }

    file.close();
}
