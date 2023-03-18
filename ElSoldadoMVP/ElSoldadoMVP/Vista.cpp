#include "Vista.h" 
#include <iostream>
#include "Presentador.h"

void View::MenuPrincipal()
{
	std::cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << std::endl;
	std::cout << "Seleccione la acción que desee efectuar " << std::endl;
	std::cout << "(Seleccione la opción de menu correspondiente)" << std::endl;
	std::cout << "[1] Recoger Arma" << std::endl;
	std::cout << "[2] Dejar Arma" << std::endl;
	std::cout << "[3] Disparar" << std::endl;
	std::cout << "[4] ¿Tengo un arma?" << std::endl;
	std::cout << "[X] - Para Salir" << std::endl;
	std::cout << "-===============================================================================-" << std::endl << std::endl;
}


void View::MenuArmas()
{
	std::cout << "-===============================================================================-" << std::endl << std::endl;
	std::cout << "Seleccione el arma " << std::endl;
	std::cout << "[1] Revolver Magnum .357" << std::endl;
	std::cout << "[2] Rifle M1 Garand" << std::endl;
	std::cout << "[3] Escopeta Remington 870" << std::endl;
	std::cout << "[X] - Volver Atras" << std::endl;
	std::cout << "-===============================================================================-" << std::endl << std::endl;

}

void View::Salir()
{
	std::cout << "-===============================================================================-" << std::endl << std::endl;
	std::cout << "Entrenamiento finalizado \n";
	std::cout << "-===============================================================================-" << std::endl << std::endl;
}

int main()
{
	setlocale(LC_ALL, "");
	
	presentador* PRE = new presentador();
	
	PRE->selecMenu();
}