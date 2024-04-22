TARGET = main.exe
CXX = c++
LD = c++
OBJS = Main.cpp Veiculo.cpp Cliente.cpp Nodo.cpp Pedido.cpp Recurso.cpp 

main.exe:$(OBJS)
	$(LD) -o $(TARGET) $(OBJS)