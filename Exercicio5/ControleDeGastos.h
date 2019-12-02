#pragma once
#include <string>
#include "Despesa.h"

class ControleDeGastos {

	public:
		ControleDeGastos();

		void setDespesa(Despesa d, int pos);
		double calculaTotalDeDespesas();
		bool existeDespesaDoTipo(std::string t);

	private:
		const static int max = 10;

		Despesa despesas[max];

};

