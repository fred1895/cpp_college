#include <iostream>
#include <locale>

using namespace std;

void bubblueSort(int lista[], int tam);
void printList(int lista[], int tam);

int main() {
	
	
	int lista[5] = {13, 23, 3, 8, 1};
	cout << "Antes da funcao: \n";
	printList(lista, 5);
	bubblueSort(lista, 5);
	cout << "Depois da funcao: \n";
	printList(lista, 5);
	
}

void printList(int lista[], int tam) {
	int i;
	
	for (i = 0; i < 5; i++) {
		cout << lista[i] << "\n";
	}
}

void bubblueSort(int lista[], int tam) {
	
	int i, j, aux;
	for(j=(tam - 1); j >= 1; j--) {
		for(i = 0; i < j; i++) {
			if(lista[i] > lista[i+1]) {
				aux = lista[i];
				lista[i] = lista[i+1];
				lista[i+1] = aux;
			}
		}
	}
	
}
