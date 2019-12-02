#pragma once
#include <string>

using namespace std;

class Invoice
{
private:
	int numero; // n�mero do produto
	string descricao; // descri��o do produto
	int quantidade;// quantidade do produto
	double preco;// preco do produto

public:
	Invoice(); // construtor
	
	
	// Utilizando set() para acessar os atributos do private
	void setNumero(int num);
	
	void setDescricao(string desc);
	
	void setQuantidade(int quant);
	
	void setPreco(double pr);


	// Utilizando get() para retornar os valores dos atributos de private
	int getNumero();

	string getDescricao();

	int getQuantidade();

	double getPreco();

	double getInvoiceAmount();

};

