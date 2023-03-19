#pragma once
#include "includes.h"
#include "Arma.h"

class rifle : public Arma
{
public:
	std::string nombre = " Rifle ";
	std::string devolverNombre() { return nombre; };
	std::string Disparar();
};

