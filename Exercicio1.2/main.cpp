#include "Data.h"
#include <iostream>

using namespace std;

int main() {

	bool sair = false;
	int opcao;

	while (sair == false)
	{

		Data* data1 = new Data();
		cout << "Para sair do programa, pressione 1" << endl;
		cin >> opcao;

		if (opcao == 1) {
			sair = true;
		}
		else {

			cout << "Digite o dia:" << endl;
			cin >> data1->dia;
			cout << "Digite o mes:" << endl;
			cin >> data1->mes;
			cout << "Digite o ano:" << endl;
			cin >> data1->ano;

			data1->dataValida(data1->dia, data1->mes, data1->ano);

			data1->avancarDia(data1->dia, data1->mes, data1->ano);

			delete data1;
		}
	}

	return 0;
}