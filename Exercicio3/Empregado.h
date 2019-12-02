#pragma once
#include <iostream>
#include <string>

using namespace std;

class Empregado
{
private:
	string nome;
	string sobrenome;
	double salario_mensal;

public:
	Empregado();

	void setNome(string nom);
	void setSobrenome(string sobre_nome);
	void setSalario(double salmen);
	void setAumentoSalario(double porcentagem);

	string getNome();
	string getSobrenome();
	double getSalarioMensal();
	double getSalarioAnual();
};

