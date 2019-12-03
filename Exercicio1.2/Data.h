#pragma once
#include <iostream>

class Data
{

private:
	int dia;
	int mes;
	int ano;

public:
	void setData(int dia_para, int mes_para, int ano_para);

	bool dataValida(int dia, int mes, int ano);

	void avancarDia(int dia, int mes, int ano);

	int getDia();
	int getMes();
	int getAno();
};


