#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	
	float carInitialPrice = 0;
	int option1Chosen = 0, option2Chosen = 0, option3Chosen = 0, option4Chosen = 0, option5Chosen = 0;
		
	char answer = 's';
	
	cout << "Informe o valor de produção do carro: ";
	cin >> carInitialPrice;
	
	cout <<"\n Opcionais: ";
	cout <<"\n 1 - Básico: ";
	cout <<"\n 2 - Trio elétrico (alarme, vidro elétrico e tranca elétrica)";
	cout <<"\n 3 - Ar condicionado";
	cout <<"\n 4 - Direção hidráulica";
	cout <<"\n 5 - Completo (trio elétrico, ar condicionado e direção hidráulica) \n";

	do {
		int option;
		cout << "\nDigite a opçaõ que você deseja escolher: ";
		cin >> option;
		
		while (option < 1 || option > 5){
			cout << "Digite a opçaõ correta (de 1 a 5) que você deseja escolher: ";
			cin >> option;
		}
		
		//Calculators
		float
		IPI = 8.0,
		additionPorcentage = 2.0,
		discountPorcentage = 3.5,
		carFinalPrice = carInitialPrice, 
		IPI_CALCULATED = carFinalPrice*IPI/100,
		additionPrice = carInitialPrice*additionPorcentage/100.0;
		
		switch (option){
			case 1:
				carFinalPrice += IPI_CALCULATED;
				option1Chosen ++;
				break;
				
			case 2:
				carFinalPrice += IPI_CALCULATED;
				carFinalPrice += carFinalPrice*additionPorcentage/100.0;
				option2Chosen ++;
				break;
				
			case 3:
				carFinalPrice += additionPrice + IPI_CALCULATED;
				option3Chosen ++;
				break;
				
			case 4:
				carFinalPrice += additionPrice + IPI_CALCULATED;
				option4Chosen ++;
				break;
				
			case 5:
				carFinalPrice += IPI_CALCULATED + additionPrice*3;
				carFinalPrice -= carFinalPrice*discountPorcentage/100;
				option5Chosen ++;
				break;
				
			default:
				cout <<"Operação inválida.";
		}
		
		printf( "O valor total do carro foi %.2f \n", carFinalPrice);
		
		cout <<"\nDeseja repetir a operação? (s/n) ";
		cin >> answer;
		
	} while (answer == 's' || answer == 'S');
	
	cout << "\nA opção 1 foi escolhida " << option1Chosen << " vez(es).";
	cout << "\nA opção 2 foi escolhida " << option2Chosen << " vez(es).";
	cout << "\nA opção 3 foi escolhida " << option3Chosen << " vez(es).";
	cout << "\nA opção 4 foi escolhida " << option4Chosen << " vez(es).";
	cout << "\nA opção 5 foi escolhida " << option5Chosen << " vez(es).";
	
	return 0;
}
