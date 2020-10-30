#include <iostream>
#include <locale>
#include <string>

#define MAX_TAM 10

struct queue 
{
	float fill[MAX_TAM];
	int inicio, fim;
}

void enfileira(queue& fill);
void desenfileira(queue& fill)
void elemPrimeiro(queue& fill);
void situacaoFila(queue& fill);

int main() {
	queue fila;
	char resp[10];
	int opcao;
	
	//Inicializa a fila
	fila.inicio = 0;
	fila.fim = -1;
	
	do
	{
		cout <<"\nFILA (FIFO - FIRST IN FIRST OUT)\n\n";
		cout << "\n1 - Inserir um valor na fila;";
		cout << "\n2 - Remover um valor na fila;";
		cout << "\n3 - Mostrar o elemento no inicio da fila;";
		cout << "\n4 - Mostrar situacao da fila;";
		cout << "\n5 - Sair;";
		
		cout <<"\nOpcao: ";
		cin >> opcao;
		
		switch (opcao) {
			case 1: 
				cout <<"Digite o valor a ser inserido: ";
				cin >> valor;
				empilha(pilha, topo, valor);
				break;
			
			case 2: 
				resposta = desempilha(pilha, topo, valor);
				if (resposta == 0) 
					cout << "\nAtencao. Pilha vazia.";
				else 
					cout << "\nValor removido.";
				break;
				
			case 3:
				acessoTopo(pilha, topo);
				break;
			case 4: 
				situacaoPilha(pilha, topo);
			case 5:
				cout << "\nPrograma basico de pilha.\n";
				break;
			default:
				cout << "\nOpcao invalida.\n";
		
	}
	while (opcao != 5);
	
}

void enfileira(queue& fill) 
{
	float valor;
	if (fill.fim == MAX_TAM - 1) 
		cout << "A fila está cheia";
	else 
	{
		cout << "Digite o valor a ser enfileirado: ";
		cin >> valor;
		
		fill.fim++;
		fill.fill[fill.fim] = valor;
	}
}





