#pragma once
#include "Presentador.h"
#include "includes.h"


class View
{
private:
	presentador* presentobj;
	char opc;
public:
	View();
	View(presentador* _presentobj);
	void MenuPrincipal();
	
	void MenuArmas();
	void Salir();
};