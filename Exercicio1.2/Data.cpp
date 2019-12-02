#include "Data.h"
#include <iostream>

// Definindo as funções da classe Data
void Data::dataValida(int dia, int mes, int ano) {

	if (mes == 2) {
		if (dia >= 29) { // Apenas fevereiro
			std::cout << "Data invalida " << std::endl;
		}
		else {
			std::cout << "Data valida " << std::endl;
		}
	}

	else if (mes != 4 && mes != 6 && mes != 9 && mes != 11) { // Meses que possuem 31 dias
		if (dia > 31) {
			std::cout << "Data invalida " << std::endl;
		}
		else {
			std::cout << "Data valida " << std::endl;
		}
	}
	else {
		if (dia > 30) {
			std::cout << "Data invalida " << std::endl;
		}
		else {
			std::cout << "Data valida " << std::endl;
		}
	}

};

void Data::avancarDia(int dia, int mes, int ano) {

	if (mes == 2) {
		if (dia < 28) { // Apenas fevereiro
			dia++;
		}
		else {
			mes++;
			dia = 1;
		}
	}

	else if (mes != 4 && mes != 6 && mes != 9 && mes != 11) { // Meses que possuem 31 dias
		if (dia < 31) {
			dia++;
		}
		else {
			if (mes == 12) {// se o mes for dezembro e a data avancar para al�m do dia 31, o mes e dia serao 1 e o ano sera adicionado de 1
				mes = 1;
				dia = 1;
				ano++;
			}
			else {
				mes++;
				dia = 1;
			}
		}
	}
	else {
		if (dia < 30) {
			dia++;
		}
		else {
			mes++;
			dia = 1;
		}
	}

	// avanco de data printada
	std::cout << "Data do dia seguinte:" << std::endl;

	std::cout << dia << "/" << mes << "/" << ano << std::endl;
};

