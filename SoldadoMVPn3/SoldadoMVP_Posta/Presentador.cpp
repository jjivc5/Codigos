#include "Presentador.h"

presentador::presentador(soldado* _ptr_soldado, IView* _ptr_iview)
{
	ptr_soldado = _ptr_soldado;
	ptr_iview = _ptr_iview;
}


void presentador::Preguntar_agarrarArma(char entrada)
{
	retorno_Vista = ptr_soldado->RecogerArma(ptr_soldado->preSeleccionArma(entrada));
	ptr_iview->Impresion(retorno_Vista);
}

void presentador::Preguntar_DejarArma()
{
	retorno_Vista = ptr_soldado->DejarArma();
	ptr_iview->Impresion(retorno_Vista);
}

void presentador::Preguntar_Disparar()
{
	retorno_Vista = ptr_soldado->Disparar();
	ptr_iview->Impresion(retorno_Vista);
}

void presentador::Preguntar_VerArma()
{
	retorno_Vista = ptr_soldado->VerArma();
	ptr_iview->Impresion(retorno_Vista);
}