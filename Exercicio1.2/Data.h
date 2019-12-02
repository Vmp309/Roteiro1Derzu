#pragma once
#include <iostream>


class Data
{

public:
	int dia;
	int mes;
	int ano;

	void dataValida(int dia, int mes, int ano);

	void avancarDia(int dia, int mes, int ano);

};


