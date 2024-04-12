# Definição de variáveis
EXECUTAVEL := main.exe
SOURCES := Main.cpp Veiculos/Veiculo.cpp Clientes/Cliente.cpp Pedidos/Pedido.cpp Nodos/Nodo.cpp

# Regras
all: $(EXECUTAVEL)

$(EXECUTAVEL): $(SOURCES)
	g++ -o $@ -s $^

.PHONY: clean

clean:
	rm -f $(EXECUTAVEL)
