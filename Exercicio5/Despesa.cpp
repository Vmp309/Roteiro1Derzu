#include "Despesa.h"

#include <iostream>

using namespace std;
Despesa::Despesa() {
	valor = 0;
}
Despesa::Despesa(std::string t, double v) {
	setTipoDespesa(t);
	setValor(v);
}

std::string Despesa::getTipoDespesa() {
	return tipoDespesa;
}
double Despesa::getValor() {
	return valor;
}

void Despesa::setTipoDespesa(std::string t) {
	if (t.size() > 3)
		tipoDespesa = t;
	else
		cout << "Tipo invalido: " << t;
}
void Despesa::setValor(double v) {
	if (v >= 0)
		valor = v;
	else
		cout << "Valor invalido: " << v;
}
