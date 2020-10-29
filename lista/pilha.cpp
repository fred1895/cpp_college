#include <iostream>
#include <locale>
#include <string>

#define MAX_TAM 10

using namespace std;

void empilha(int pilha[], int& tam, int valor);
int desempilha(int pilha[], int& tam, int valor);
void acessoTopo(int pilha[], int& tam);
void situacaoPilha(int pilha[], int& tam);

int main() {
	
	int opcao, valor, topo = -1, pilha[MAX_TAM], resposta;
	
	do {
		cout <<"\nPILHA (LIFO - LAST IN FIRST OUT)\n\n";
		cout << "\n1 - Inserir um valor na pilha;";
		cout << "\n2 - Remover um valor na pilha;";
		cout << "\n3 - Mostrar um elemento no topo da pilha;";
		cout << "\n4 - Mostrar situacao da pilha;";
		cout << "\n5 - Sair;";
		
		cout <<"\nOpcao: ";
		cin >> opcao;
		
		switch (opcao) {
			case 1: 
				cout <<"Digite o valor a ser empilhado: ";
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
	} while (opcao != 5);
	
}

void empilha(int pilha[], int& tam, int valor) {
	if (tam == MAX_TAM - 1) {
		cout << "\n ATENCAO: PILHA CHEIA";
	} 
	else {
		tam++;
		pilha[tam] = valor;
	}
}

int desempilha(int pilha[], int& tam, int valor) {
	if (tam == -1) {
		return 0;
	}
	else {
		valor = pilha[tam];//Guarda o valor do topo
		tam--; // Atualiza o topo
		return 1;
	}
}

void acessoTopo(int pilha[], int& tam) {
	if (tam == -1) {
		cout << "\nA PILHA ESTA VAZIA!";
	} 
	else {
		cout << "Elemnto do topo da pilha: " << pilha[tam];	
	}
}

void situacaoPilha(int pilha[], int& tam) {
	if (tam == -1) {
		cout << "\nA PILHA ESTA VAZIA!";
	} 
	else if (tam == MAX_TAM - 1) {
		cout << "\nATENCAO: PILHA CHEIA";
	}
	else {
		cout <<"\nTotal de elementos na pilha: " << tam + 1 << "\n";
		cout<< "\nEspaco disponivel na pilha: " << MAX_TAM - (tam + 1) << "\n";
		
	}
	
}


