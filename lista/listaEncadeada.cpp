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

nodo* removeFrente(nodo* ponteiro);
nodo* removeFim(nodo* ponteiro);

void subtituiNo(nodo* ponteiro, int posicao, int novoValor);

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

void exibe (nodo * ponteiro)
{
	cout << "\nListando\n";
	while (ponteiro)
	{
		cout << "\n" << ponteiro->info;
		ponteiro = ponteiro->prox;
	}
}

nodo* removeFrente(nodo* ponteiro) 
{
	nodo* aux;
	aux = ponteiro;
	ponteiro = ponteiro->prox;
	delete aux;
	return ponteiro;
}

void removeFim(nodo* ponteiro)
{
	nodo* aux, * ultimo;
	if (!ponteiro->prox)
	{
		delete ponteiro;
		ponteiro = NULL;
		return ponteiro;
	}
	else
	{
		aux = ponteiro;
		while (aux->prox->prox)
			aux = aux->prox;
		ultimo = aux ->prox;
		delete ultimo;
		aux ->prox = NULL;
		return ponteiro;
	}
}

void subtituiNo(nodo* ponteiro, int posicao, int novoValor) 
{
	int conta = 1;
	while (conta != posicao)
	{
		ponteiro = ponteiro->prox;
		conta++;
	}
	ponteiro->info = novoValor;
}

int contaNos(nodo* ponteiro) 
{
	int conta = 0;
	while (ponteiro) {
		conta++;
		ponteiro = ponteiro->prox;
	}
	return conta;
}

int buscaSequencial(nodo* ponteiro, int valor) 
{
	while (ponteiro)
	{
		if (ponteiro->info == valor) 
			return 1;
		ponteiro = ponteiro->prox;
	}
	return 0;
}






