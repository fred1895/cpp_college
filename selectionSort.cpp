#include <iostream>
#include <locale>

using namespace std;

void selectionSort(int lista[], int tam);
void printList(int lista[], int tam);

int main() {
	
	
	int lista[5] = {13, 23, 3, 8, 1};
	cout << "Antes da funcao: \n";
	printList(lista, 5);
	selectionSort(lista, 5);
	cout << "Depois da funcao: \n";
	printList(lista, 5);
	
}

void printList(int lista[], int tam) {
	int i;
	
	for (i = 0; i < 5; i++) {
		cout << lista[i] << "\n";
	}
}

void selectionSort(int lista[], int tam) {
	
	int i, j, aux, temp;
	for (i = 0; i < (tam - 1); i++) {
		aux = i;
		for (j = (i+1); j < tam; j++)  {
			if(lista[j] < lista[aux]) {
				aux = j;
			}
		}
		if (i != aux) {
			temp = lista[i];
			lista[i] = lista[aux];
			lista[aux] = temp;
		}
	}
	
	
}
