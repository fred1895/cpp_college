#include <iostream>
#include <locale>
#include <string>


using namespace std;

int main() {
	
	struct FICHA_PACIENTE {
		string nome;
		float altura;
		float peso;
		float imc;
		int classificacao;
		int telefone;
	};
	
	struct FICHA_PACIENTE primeiroPaciente;
	
	cout << "Digite o nome do primeiro paciente: ";
	cin >> primeiroPaciente.nome;
	
	cout << "\nDigite a altura do primeiro paciente: ";
	cin >> primeiroPaciente.altura;
	
	cout << "\nDigite o peso do primeiro paciente: ";
	cin >> primeiroPaciente.peso;
	
	primeiroPaciente.imc = primeiroPaciente.peso / (primeiroPaciente.altura * primeiroPaciente.altura);
	
	cout << "\nDigite a classificacao do primeiro paciente: ";
	cin >> primeiroPaciente.classificacao;
	
	cout << "\nDigite o telefone do primeiro paciente: ";
	cin >> primeiroPaciente.telefone;
	
	cout << "O paciente " << primeiroPaciente.nome << " tem " << primeiroPaciente.altura << "m de altura e pesa " 
	<< primeiroPaciente.peso <<"kg, tendo um imc de " << primeiroPaciente.imc <<". Esta classificado em " << primeiroPaciente.classificacao;
	
	
	
	
	
	
}
