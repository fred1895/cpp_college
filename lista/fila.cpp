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
void desenfileira(queue& fill);
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
				enfileira(fila);
				break;
			
			case 2: 
				desenfileira(queue& fill);
				break;
				
			case 3:
				void elemPrimeiro(queue& fill);
				break;
			case 4: 
				void situacaoFila(queue& fill);
			case 5:
				cout << "\nPrograma basico de fila.\n";
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
		cout << "\nA fila est� cheia";
	else 
	{
		cout << "\nDigite o valor a ser enfileirado: ";
		cin >> valor;
		
		fill.fim++;
		fill.fill[fill.fim] = valor;
	}
}

void desenfileira(queue& fill) 
{
	if (fill.inicio > fill.fim)	//testando se a fila esta vazia
		cout << "\nAtencao lista vazia";
	else 
	{
		cout <<"\nValor removido: " << fill.fill[fill.inicio]; //Exibe o valor removido
		fill.inicio++;//Atualiza a fila
	}
}

void elemPrimeiro(queue& fill) {
	if (fill.inicio > fill.fim)	//testando se a fila esta vazia
		cout << "\nAtencao lista vazia";
	else 
	{
		cout << "\nPrimeiro elemento da fila: " << fill.fill[fill.inicio];
		
	}
}

void situacaoFila(queue& fill) {
	if (fill.inicio > fill.fim)	//testando se a fila esta vazia
		cout << "\nAtencao lista vazia";
	else 
	{
		cout << "\nTotal de elementos na fila: " << fill.fim - fill.inicio + 1 << "\n";
		cout << "\n\nEspaco disponivel na fila: " << MAX_TAM - (fill.fim + 1) << "\n";
		cout << "\n\nPosicao do primeiro elemento na fila: " << fill.inicio << "\n";
		cout << "\n\nPosicao do ultimo elemento na fila: " << fill.fim << "\n";
		
		cout << "\nValor\tPosicao no Vetor\n";
		
		for (int i = fill.inicio; i <= fill.fim; i++) {
			cout << "\n" << fill.fill[i] << "\t" << i;
		}
	}
}









