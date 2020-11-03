#include <iostream>
#include <locale>
# define MAX_LISTA 10
#include "conio.h"

using namespace std;

// Nó ou nodo
struct nodo 
{
	int info;
	
	nodo* prox;
}

nodo* insereFrente(node* ponteiro, int valor);
nodo* insereFim(node* ponteiro, int valor);

void exibe(nodo* ponteiro);

void removeFrente(nodo* ponteiro);
void removeFim(nodo* ponteiro);

int subtituiNo(nodo* ponteiro, int posicao, int novoValor);

int buscaSequencial(nodo* ponteiro, int valor);
int contaNos(nodo* ponteiro);

void libera(nodo* ponteiro);

int main () {
	
}

nodo* insereFrente(node* ponteiro, int valor)
{
	node* temp = new nodo;
	if (!temp)
	{
		cout << "\nNao foi possivel fazer a alocacao de memoria.\n";
	}
	temp->info = valor;
	temp ->prox = ponteiro;
	return temp;
}

nodo* insereFim(node* ponteiro, int valor)
{
	nodo* novo, * aux;
	
	novo = new nodo;	
	
	if (!novo)
	{
		cout << "\nNao foi possivel fazer a alocacao de memoria.\n";
	}
	novo->info = valor;
	novo->prox = NULL;
	if (!ponteiro) {
		ponteiro = novo;
	}
	else {
		aux = ponteiro;
		while (aux->prox) {
			aux = aux->prox;
		}
	}
	return ponteiro;
}











