#pragma once
#include "includes.h"
#include "Presentador.h"

class View
{
private:
	presentador* presentobj;
	char opc;
public:
	View(presentador* _presentobj);
	void MenuPrincipal();
	void MenuArmas();
	void Salir();
};