#pragma once
#include "includes.h"
#include "Arma.h"
#include "Escopeta.h"
#include "Revolver.h"
#include "Rifle.h"

class soldado
{
private:
	Arma* r;
	Arma* rf;
	Arma* es;
	std::string retorno_param_soldado;
public:
	Arma* armaActual;
	soldado() { Arma* armaActual = nullptr; }
	Arma* preSeleccionArma(char selec);
	std::string RecogerArma(Arma* arma);
	std::string DejarArma();
	std::string Disparar();
	std::string VerArma();
};