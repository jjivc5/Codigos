#pragma once
#include <iostream>
#include<string>


class Arma
{
protected:
	std::string nombre;
public:
	virtual std::string Disparar() { return 0;};
	virtual std::string Nombre() { return 0; };

};

class revolver : public Arma
{
public:
	std::string nombre = " Revolver ";
	std::string Nombre() { return nombre; };
	std::string Disparar();
};

class rifle : public Arma
{
public:
	std::string nombre = " Rifle ";
	std::string Nombre() { return nombre; };
	std::string Disparar();
};

class escopeta : public Arma
{
public:
	std::string nombre = " Escopeta ";
	std::string Nombre() { return nombre; };
	std::string Disparar();
};

class soldado
{
	
public:
	Arma* actual = nullptr;
	void RecogerArma(Arma* arma);
	void DejarArma();
	void Disparar();
	void VerArma();
};