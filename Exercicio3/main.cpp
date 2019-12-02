#include "Empregado.h"
#include <iostream>
#include <string>
#include <vector>
#define TAM 50

using namespace std;

int main() {

	vector<Empregado> listaFuncionarios[TAM];// Uso futuro
	string nome;
	string sobrenome;
	double salario;
	int mudanca_salario;
	double porcentagem;

	// desenvovendo intera�ao com o usu�rio

	for (size_t i = 0; i < 2; i++) {
		Empregado funcionario1 = Empregado();

		cout << "Digite o primeiro nome do funcionario: " << endl;
		cin >> nome;
		funcionario1.setNome(nome);

		cout << "Digite o sobrenome do funcionario:" << endl;
		cin >> sobrenome;
		funcionario1.setSobrenome(sobrenome);

		cout << "Digite o salario mensal:" << endl;
		cin >> salario;
		funcionario1.setSalario(salario);

		cout << "Salario anual do funcionario: ";
		cout << funcionario1.getSalarioAnual() << endl;

		cout << "Deseja aumentar o salario desse funcionario?" << endl;
		cout << "[1] Nao" << endl; 
		cout << "[2] Sim" << endl; 
		cin >> mudanca_salario;

		if (mudanca_salario == 2) {
			cout << "Digite a porcentagem de aumento:" << endl;
			cin >> porcentagem;
			funcionario1.setAumentoSalario(porcentagem);

			cout << "Com o aumento, o salario anual do seu funcionario eh: " << funcionario1.getSalarioAnual() << endl;

		}

		listaFuncionarios->push_back(funcionario1);
		
	}

	for (size_t j = 0; j < 2; j++) {
		cout << listaFuncionarios->at(j).getNome() << endl;
		cout << listaFuncionarios->at(j).getSobrenome() << endl;
		cout << listaFuncionarios->at(j).getSalarioMensal() << endl;
	}

	return 0;
}
