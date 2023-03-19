#pragma once
#include "includes.h"
#include "Arma.h"

class escopeta : public Arma
{
public:
	std::string nombre = " Escopeta ";
	std::string devolverNombre() { return nombre; };
	std::string Disparar();
};
