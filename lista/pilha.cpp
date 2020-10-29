#include <iostream>
#include <locale>
#include <string>

#define MAX_TAM 5

using namespace std;

void empilha(int pilha[], int& tam, int valor);
void desempilha(int pilha[], int& tam, int valor);
void acessoTopo(int pilha[], int& tam);
void situacaoPilha(int pilha[], int& tam);

int main() {
	
	int operacao, valor, topo = -1, pilha[MAX_TAM], resposta;
	
	do {
		
	} while ();
	
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
		t--; // Atualiza o topo
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
		cout<< "\nEspaco disponivel na pilha: " << MAX_TAM - (tam + 1); << "\n";
		
	}
	
}


