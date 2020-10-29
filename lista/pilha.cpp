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
		cout << "\n ATENCAO: PILHA CHEIA"
	} 
	else {
		tam++;
		pilha[tam] = valor;
	}
}
