#pragma once

#include "Presentador.h"
#include "Soldado.h"
#include <cstdlib>

class presentador
{

	char opc;
	std::string retorno_Vista;
	soldado* ptr_soldado;

public:
	presentador(soldado* _ptr_soldado);
	void Preguntar_agarrarArma(char entrada);
	void Preguntar_DejarArma();
	void Preguntar_Disparar();
	void Preguntar_VerArma();

};