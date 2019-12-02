#include "Invoice.h"
#include <iostream>

using namespace std;

// Implementação das funções

Invoice::Invoice() {

}

void Invoice::setNumero(int num) {
	numero = num;
}

void Invoice::setDescricao(string desc) {
	descricao = desc;
}

void Invoice::setQuantidade(int quant) {
	if (quant < 0) {
		quantidade = 0;
	}else {
		quantidade = quant;
	}
}

void Invoice::setPreco(double pr) {
	if (pr < 0) {
		preco = 0;
	}else {
		preco = pr;
	}
	
}

int Invoice::getNumero() {
	return numero;
}

string Invoice::getDescricao() {
	return descricao;
}

int Invoice::getQuantidade() {
	return quantidade;
}

double Invoice::getPreco() {
	return preco;
}

double Invoice::getInvoiceAmount() {
	return quantidade * preco;
}
