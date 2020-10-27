#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	struct ProdCad {
		int cod;
		float precoCompra, precoVenda;
	};
	
	ProdCad produto[2];
	
	int num, i, j;
	
	for (i = 0; i < 2; i++) {
		
		cout << "Digite o cogigo do produto " << i+1 << ": ";
		cin >> num;
		
		while (num < 0 || num > 1000) {
			cout << "Codigo do produto deve ser entre 0 e 1000";
			cout << "\nDigite o cogigo do produto " << i+1;
			cin >> num;
		};
		
		produto[i].cod = num;
		
		cout << "Digite o preco do produto " << i+1 << ": ";
		cin >> produto[i].precoCompra;
		
		produto[i].precoVenda = produto[i].precoCompra * 1.6;
		cout << "Produto " << produto[i].cod << " possui preco de venda de: "<< produto[i].precoVenda << " Reais\n"; 	
	}
	
	
	for (j = 0; j > 2; j++) {
		cout << "Produto " << produto[j].cod << " possui preco de venda de: "<< produto[j].precoVenda << " Reais"; 	
	}
	
}

