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
	void Impresion(std::string dato);
	void MenuArmas();
	void Salir();
};