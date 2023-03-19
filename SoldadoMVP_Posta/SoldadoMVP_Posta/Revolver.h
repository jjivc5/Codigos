#pragma once
#include "includes.h"
#include "Arma.h"

class revolver : public Arma
{
public:
	std::string nombre = " Revolver ";
	std::string devolverNombre() { return nombre; };
	std::string Disparar();
};
