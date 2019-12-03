#include "Data.h"
#include <iostream>

using namespace std;

int main() {

	bool sair = false;
	int opcao;
	int dia, mes, ano;
	bool flag;

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
			cin >> dia;
			cout << "Digite o mes:" << endl;
			cin >> mes;
			cout << "Digite o ano:" << endl;
			cin >> ano;

			data1->setData(dia, mes, ano);

			flag = data1->dataValida(data1->getDia(), data1->getMes(), data1->getAno());

			if (flag == true)
			data1->avancarDia(data1->getDia(), data1->getMes(), data1->getAno());

			delete data1;
		}
	}

	return 0;
}
