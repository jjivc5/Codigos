#include "Presentador.h"

presentador::presentador(soldado* _ptr_soldado)
{
	ptr_soldado = _ptr_soldado;
}


void presentador::Preguntar_agarrarArma(char entrada)
{
	retorno_Vista = ptr_soldado->RecogerArma(ptr_soldado->preSeleccionArma(entrada));
}

void presentador::Preguntar_DejarArma()
{
	retorno_Vista = ptr_soldado->DejarArma();
}

void presentador::Preguntar_Disparar()
{
	retorno_Vista = ptr_soldado->Disparar();
}

void presentador::Preguntar_VerArma()
{
	retorno_Vista = ptr_soldado->VerArma();
}