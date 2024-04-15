
Classes{

Cliente - Responsavel por modificar a lista de clientes, criando, alterando ou deletando nodos cliente atraves da classe base (Nodo).

Veiculo - Responsavel por modificar a lista de veiculos, criando, alterando ou deletando nodos veiculo atraves da classe base (Nodo).

Pedido - Responsavel por modificar a lista de pedidos, criando, alterando ou deletando nodos pedido atraves da classe base (Nodo) .

Nodo- Responsavel por fornecer os metodos e atributos genericos para que as classes derivadas possam realizar suas funcoes.

}

Ideia Geral{

	Classe Nodo serve como base, onde tudo acontece. Demais classes derivadas servem apenas como intermedio para que nao se tenha acesso direto as funcoes da classe Nodo. Atributos nomeados de forma generica pois a indentificacao e alteracao dos atributos devera ser feita atraves das classes derivadas, onde as funcoes sao usadas para indentificar e alterar os atributos.


}
