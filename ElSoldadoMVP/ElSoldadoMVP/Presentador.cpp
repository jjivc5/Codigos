#include "Presentador.h"

void presentador::selecMenu()
{
	
	do{
		ptr_vista->MenuPrincipal();
		std::cin >> opc;

		switch (opc)
		{
			case '1':
				selecArma();
				break;
			case '2':
				ptr_soldado->DejarArma();
				break;
			case '3':
				ptr_soldado->Disparar();
				break;
			case '4':
				ptr_soldado->VerArma();
				break;
			case 'X':
				ptr_vista->Salir();
				break;

		}
	} while (opc != '1' && opc != '2' && opc != '3' && opc != '4' && opc != 'X');
}

void presentador::selecArma()
{
	Arma* r = new revolver();
	Arma* rf = new rifle();
	Arma* es = new escopeta();
	ptr_soldado->actual = NULL;

	do {
		ptr_vista->MenuArmas();
		std::cin >> opc;
		

		switch (opc)
		{
		case '1':
			ptr_soldado->RecogerArma(r);
			break;
		case '2':
			ptr_soldado->RecogerArma(rf);
			break;
		case '3':
			ptr_soldado->RecogerArma(es);
			break;
		case 'X':
			selecMenu();
			break;

		}
	} while (opc != '1' && opc != '2'  && opc != '3' && opc != 'X');
}


