#include "Vista.h"


View::View(presentador* _presentobj)
{
	presentobj = _presentobj;
}


void View::MenuPrincipal()
{
	do {

	std::cout << "\n\n-== Bienvenido al campo de entrenamiento, Soldado ==-" << std::endl;
	std::cout << "Seleccione la acción que desee efectuar " << std::endl;
	std::cout << "(Seleccione la opción de menu correspondiente)" << std::endl;
	std::cout << "[1] Recoger Arma" << std::endl;
	std::cout << "[2] Dejar Arma" << std::endl;
	std::cout << "[3] Disparar" << std::endl;
	std::cout << "[4] ¿Tengo un arma?" << std::endl;
	std::cout << "[X] - Para Salir" << std::endl;
	std::cout << "-===============================================================================-" << std::endl << std::endl;

	std::cin >> opc;

	switch (opc)
	{
		case '1':
			MenuArmas();
			break;
		case '2':
			presentobj->Preguntar_DejarArma();
			MenuPrincipal();
			break;
		case '3':
			presentobj->Preguntar_Disparar();
			MenuPrincipal();
			break;
		case '4':
			presentobj->Preguntar_VerArma();
			MenuPrincipal();
			break;
		case 'X':
			Salir();
			break;

	}


	if (opc != '1' && opc != '2' && opc != '3' && opc != '4' && opc != 'X')
	{
		std::cout << "\n Ingrese una opción que sea valida \n";
	}

	} while (opc != '1' && opc != '2' && opc != '3' && opc != '4' && opc != 'X');


}


void View::MenuArmas()
{
	do {

	std::cout << "\n\n-===============================================================================-" << std::endl << std::endl;
	std::cout << "Seleccione el arma " << std::endl;
	std::cout << "[1] Revolver Magnum .357" << std::endl;
	std::cout << "[2] Rifle M1 Garand" << std::endl;
	std::cout << "[3] Escopeta Remington 870" << std::endl;
	std::cout << "[X] - Volver Atras" << std::endl;
	std::cout << "-===============================================================================-" << std::endl << std::endl;

	std::cin >> opc;

	switch (opc)
	{
	case '1':
		presentobj->Preguntar_agarrarArma(opc);
		MenuPrincipal();
		break;
	case '2':
		presentobj->Preguntar_agarrarArma(opc);
		MenuPrincipal();
		break;
	case '3':
		presentobj->Preguntar_agarrarArma(opc);
		MenuPrincipal();
		break;
	case 'X':
		MenuPrincipal();
		break;

	}


	if (opc != '1' && opc != '2' && opc != '3' && opc != 'X')
	{
		std::cout << "\n Ingrese una opción que sea valida \n";
	}

	} while (opc != '1' && opc != '2' && opc != '3' &&  opc != 'X');
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
	soldado* soldinit = new soldado();
	IView* Intview = new IView();
	presentador* PRE = new presentador(soldinit, Intview);
	View* vistainit = new View(PRE);

	vistainit->MenuPrincipal();
	
	delete soldinit;
	delete PRE;
	delete vistainit;

	return 0;
	
	
}