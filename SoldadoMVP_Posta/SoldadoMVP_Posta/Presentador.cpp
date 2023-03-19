#include "Presentador.h"

presentador::presentador(soldado* _ptr_soldado)
{
	ptr_soldado = _ptr_soldado;
}


void presentador::Preguntar_agarrarArma(char entrada)
{
	ptr_soldado->RecogerArma(ptr_soldado->preSeleccionArma(entrada));
}

void presentador::Preguntar_DejarArma()
{
	ptr_soldado->DejarArma();
}

void presentador::Preguntar_Disparar()
{
	ptr_soldado->Disparar();
}

void presentador::Preguntar_VerArma()
{
	ptr_soldado->VerArma();
}