#include <iostream>
#include <locale>
# define MAX_LISTA 10
#include "conio.h"

using namespace std;

void printList(float list[], int &posUltimoElemLista);
bool inserir(float list[], float valor, int &posUltimoElemLista);
float pegaValor();

int main() {
	float listaNotas[MAX_LISTA];
	 
	int posUltimoElemLista = 0;
	
	//Inserir valor na lista
	float valor = pegaValor();
	inserir(listaNotas, valor, posUltimoElemLista);
	
	printList(listaNotas, posUltimoElemLista);
	
}

void printList(float list[], int &posUltimoElemLista) {
	int i;
	for(i = 0; i < posUltimoElemLista; i++) {
		cout << list[i] << "\n";
	} 
}

float pegaValor() {
	float valor;
	cout << "Digite um valor a ser inserido na lista: ";
	cin >> valor;
	return valor;
}

bool inserir(float list[], float valor, int &posUltimoElemLista) {
	if(posUltimoElemLista == MAX_LISTA) {
		cout << "ERRO: LISTA CHEIA. ";
		return false;
	} else {
		list[posUltimoElemLista] = valor;
		posUltimoElemLista++;
	}
	return true;
	
}
