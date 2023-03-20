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
std::string soldado::RecogerArma(Arma* arma)
{

	if (armaActual == nullptr)

	{
		armaActual = arma;

		//std::cout << "\n Se ha recogido " << armaActual->devolverNombre() << "\n";
		return retorno_param_soldado = armaActual->devolverNombre();

	}
	else
	{
		/*std::cout << "\n ya posee un arma equipada \n";*/
		return retorno_param_soldado = "\n ya posee un arma equipada \n";
	}

}
std::string soldado::DejarArma()
{
	armaActual = nullptr;
	/*std::cout << "\n Se ha dejado el arma que estaba equipada \n";*/
	return retorno_param_soldado = "\n Se ha dejado el arma que estaba equipada \n";

}
std::string soldado::Disparar()
{
	if (armaActual != nullptr)
	{
		//armaActual->Disparar();
		return retorno_param_soldado = armaActual->Disparar();
	}
	else
	{
		//std::cout << "\n No hay arma para disparar \n";
		return retorno_param_soldado = "\n No hay arma para disparar \n";
	}
}
std::string soldado::VerArma()
{
	if (armaActual != nullptr)
	{
		/*std::cout << "\n Arma equipada \n" << " La cual es :" << armaActual->devolverNombre() << "\n";*/

		return retorno_param_soldado = armaActual->devolverNombre();

	}
	else
	{
		//std::cout << "\n No hay ningun arma equipada \n";

		return retorno_param_soldado = "\n No hay ningun arma equipada \n";
	}
}