#pragma once
#include "includes.h"
class Arma
{
protected:
	std::string nombre;
public:
	virtual std::string Disparar();
	virtual std::string devolverNombre();

};
