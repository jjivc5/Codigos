#include "Modelo.h"


void soldado::RecogerArma(Arma* arma)
{
	
	if (actual != nullptr)
		
	{
		actual = arma;

		std::cout << "\n se ha recogido " << actual->Nombre() << "\n";

	}
	else
	{
		std::cout << "\n Ya posee un arma equipada \n";
	}

}
void soldado::DejarArma()
{
	actual = nullptr;
	std::cout << "\n Se ha dejado el arma que estaba equipada \n";

}
void soldado::Disparar()
{
	if (actual != nullptr)
	{
		actual->Disparar();
	}
	else
	{
		std::cout << "\n No hay arma para disparar \n";
	}
}
void soldado::VerArma()
{
	if (actual != nullptr )
	{
		std::cout << "\n Arma equipada \n";
		actual->Nombre();
	}
	else
	{
		std::cout << "\n No hay ningun arma equipada \n";
	}
}

// Declaraciones de armas

std::string revolver::Disparar()
{
	std::string _nombre = " Revolver ";
	std::cout << "\n P�m \n";
	return _nombre;
}

std::string rifle::Disparar()
{
	std::string _nombre = " Rifle ";
	std::cout << "\n P�m P�m P�m! \n";
	return _nombre;
}


std::string escopeta::Disparar()
{
	std::string _nombre = " Escopeta ";
	std::cout << "\n P����! \n";
	return _nombre;
}

