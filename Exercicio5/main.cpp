#include "Despesa.h"
#include <iostream>
#include "ControleDeGastos.h"

using namespace std;

int main() {
	ControleDeGastos cg;

	Despesa d1 = Despesa("alimentacao", 20);
	Despesa* d2;
	Despesa d3("conta telefone", 50);

	d2 = new Despesa("lazer", 33);

	cg.setDespesa(d1, 0);
	cg.setDespesa(*d2, 1);
	cg.setDespesa(d3, 5);

	cout << "Total de despesas: " << cg.calculaTotalDeDespesas() << endl;

	cout << "Tem despesa lazer? " << (cg.existeDespesaDoTipo("lazer") ? "true" : "false") << endl;
	cout << "Tem despesa telefone? " << (cg.existeDespesaDoTipo("telefone") ? "true" : "false") << endl;

	cout << "Fim" << endl;
}