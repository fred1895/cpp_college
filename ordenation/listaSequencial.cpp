#include <iostream>
#include <locale>
# define MAX_LISTA 10
#include "conio.h"

using namespace std;

void printList(float list[], int &posUltimoElemLista);
bool inserirFinal(float list[], float valor, int &posUltimoElemLista);
bool inserir(float list[], float valor, int posicaoParaInserir, int &posUltimoElemLista);
int pegaIndex(float list[], int &posUltimoElemLista);
float pegaValor();
float pegaPosicao();

int main() {
	float listaNotas[MAX_LISTA] = {4.50, 80.40, 30.60, 70.50};
	 
	int posUltimoElemLista = 3;
	
	//Inserir valor no final da lista;
	float valor = pegaValor();
	inserirFinal(listaNotas, valor, posUltimoElemLista);
	printList(listaNotas, posUltimoElemLista);
	
	//Insere valor em determinada posição;
	float valor2 = pegaValor();
	float posicao = pegaPosicao();
	inserir(listaNotas, valor2, posicao, posUltimoElemLista);
	printList(listaNotas, posUltimoElemLista);
	
	//Pesquisa valor na lista;
	int index = pegaIndex(listaNotas, posUltimoElemLista);
	if (index >= 0) {
		cout << "Elemento se encontra na posição: " << index;
	}
	
	
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

float pegaPosicao() {
	float valor;
	cout << "Digite uma posicao a ser inserida na lista: ";
	cin >> valor;
	return valor;
}


bool inserirFinal(float list[], float valor, int &posUltimoElemLista) {
	if(posUltimoElemLista == MAX_LISTA) {
		cout << "ERRO: LISTA CHEIA. ";
		return false;
	} else {
		posUltimoElemLista++;
		list[posUltimoElemLista] = valor;
	}
	return true;
	
}

bool inserir(float list[], float valor, int posicaoParaInserir, int &posUltimoElemLista) {
	if(posUltimoElemLista == MAX_LISTA) {
		cout << "ERRO: LISTA CHEIA. ";
		return false;
	} else {
		int i;
		for (i = posUltimoElemLista; i > posicaoParaInserir; i--) {
			list[i] = list[i-1];
		}
		list[posicaoParaInserir] = valor;
		posUltimoElemLista++;
	}
	return true;
}

int pegaIndex(float list[], int &posUltimoElemLista) {
	float valor;
	cout << "Digite o valor que deseja pesquisar: ";
	cin >> valor;
	int i;
	for (i = 0; i < posUltimoElemLista; i++) {
		if (list[i] == valor) {
			return i;
		}		
	}
	return -1;
}


