#pragma once

#include "Soldado.h"
#include <cstdlib>

class presentador
{

	char opc;
	
	soldado* ptr_soldado;

public:
	presentador(soldado* _ptr_soldado);
	void Preguntar_agarrarArma(char entrada);
	void Preguntar_DejarArma();
	void Preguntar_Disparar();
	void Preguntar_VerArma();

};