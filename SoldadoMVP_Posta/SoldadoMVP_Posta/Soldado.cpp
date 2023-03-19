#include "Soldado.h"

Arma* soldado::preSeleccionArma(char selec)
{
	Arma* r = new revolver();
	Arma* rf = new rifle();
	Arma* es = new escopeta();
	switch (selec)
	{
	case '1':
		return r;
	case '2':
		return rf;
	case '3':
		return es;
	}
}
void soldado::RecogerArma(Arma* arma)
{

	if (armaActual == nullptr)

	{
		armaActual = arma;

		std::cout << "\n Se ha recogido " << armaActual->devolverNombre() << "\n";

	}
	else
	{
		std::cout << "\n Ya posee un arma equipada \n";
	}

}
void soldado::DejarArma()
{
	armaActual = nullptr;
	std::cout << "\n Se ha dejado el arma que estaba equipada \n";

}
void soldado::Disparar()
{
	if (armaActual != nullptr)
	{
		armaActual->Disparar();
	}
	else
	{
		std::cout << "\n No hay arma para disparar \n";
	}
}
void soldado::VerArma()
{
	if (armaActual != nullptr)
	{
		std::cout << "\n Arma equipada \n" << " La cual es :" << armaActual->devolverNombre() << "\n";

	}
	else
	{
		std::cout << "\n No hay ningun arma equipada \n";
	}
}