#include "Empregado.h"
#include <iostream>
#include <string>

Empregado::Empregado() {};

void Empregado::setNome(string nom) {
	nome = nom;
}

void Empregado::setSobrenome(string sobre_nome) {
	sobrenome = sobre_nome;
}

void Empregado::setSalario(double salmen) {
	if (salmen >= 0) {
		salario_mensal = salmen;
	}
	else {
		salario_mensal = 0;
	}
}

void Empregado::setAumentoSalario(double porcentagem) {
	salario_mensal = salario_mensal * (1 + porcentagem / 100);
}


string Empregado::getNome() {
	return nome;
}

string Empregado::getSobrenome() {
	return sobrenome;
}

double Empregado::getSalarioMensal() {
	return salario_mensal;
}

double Empregado::getSalarioAnual() {
	return salario_mensal * 12;
}
