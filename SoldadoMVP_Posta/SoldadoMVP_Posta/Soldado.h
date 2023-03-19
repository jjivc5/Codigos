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
public:
	Arma* armaActual;
	soldado() { Arma* armaActual = nullptr; }
	Arma* preSeleccionArma(char selec);
	void RecogerArma(Arma* arma);
	void DejarArma();
	void Disparar();
	void VerArma();
};