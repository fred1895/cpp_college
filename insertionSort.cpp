#include <iostream>
#include <locale>

using namespace std;

void insertionSort(int lista[], int tam);
void printList(int lista[], int tam);

int main() {
	
	
	int lista[5] = {13, 23, 3, 8, 1};
	cout << "Antes da funcao: \n";
	printList(lista, 5);
	insertionSort(lista, 5);
	cout << "Depois da funcao: \n";
	printList(lista, 5);
	
}

void printList(int lista[], int tam) {
	int i;
	
	for (i = 0; i < 5; i++) {
		cout << lista[i] << "\n";
	}
}

void insertionSort(int lista[], int tam) {
	
	int i, j, aux;
	
	for(i = 1; i < tam; i++) {
		aux = lista[i];
		for (j = i; j > 0 && aux < lista[j-1]; j--) {
			lista[j] = lista[j-1];
		}
		lista[j] = aux;
	}
	
}
