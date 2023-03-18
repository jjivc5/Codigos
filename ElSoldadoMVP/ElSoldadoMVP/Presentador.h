#pragma once
#include "Modelo.h"
#include "Vista.h"
class presentador
{
	View* ptr_vista;
	soldado* ptr_soldado;
	char opc;
	Arma* r;
	Arma* rf;
	Arma* es;
	
public:
	void selecMenu();
	void selecArma();

};