#include "Invoice.h"
#include <iostream>
#include <string>


int main() {
	// Criação de objetos e utilização das funções declaradas em Invoive.h e Invoice.cpp

	Invoice compra1 = Invoice();
	Invoice compra2 = Invoice();
	Invoice compra3 = Invoice();

	//Primeiro objeto
	compra1.setNumero(1);
	compra1.setDescricao("Notebook mais caro que os olhos da cara");
	compra1.setQuantidade(1);
	compra1.setPreco(5000);
	
	cout <<"Numero do item: " << compra1.getNumero() <<endl;
	cout << "Descricao do produto: " << compra1.getDescricao() << endl;
	cout << "Preco unitario do produto: " << compra1.getPreco() << endl;
	cout << "Quantidade: " << compra1.getQuantidade() << endl;
	cout << "Total da fatura: " << compra1.getInvoiceAmount() << endl;
	
	//Segundo objeto
	compra2.setNumero(3);
	compra2.setDescricao("Celular Multilaser from hell");
	compra2.setQuantidade(3);
	compra2.setPreco(650.90);

	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "Numero do item: " << compra2.getNumero() << endl;
	cout << "Descricao do produto: " << compra2.getDescricao() << endl;
	cout << "Preco unitario do produto: " << compra2.getPreco() << endl;
	cout << "Quantidade: " << compra2.getQuantidade() << endl;
	cout << "Total da fatura: " << compra2.getInvoiceAmount() << endl;

	//Terceiro objeto
	compra3.setNumero(3);
	compra3.setDescricao("Iphone de ouro que vale mais que dineiro");
	compra3.setQuantidade(1);
	compra3.setPreco(10500);

	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "Numero do item: " << compra3.getNumero() << endl;
	cout << "Descricao do produto: " << compra3.getDescricao() << endl;
	cout << "Preco unitario do produto: " << compra3.getPreco() << endl;
	cout << "Quantidade: " << compra3.getQuantidade() << endl;
	cout << "Total da fatura: " << compra3.getInvoiceAmount() << endl;
	
}