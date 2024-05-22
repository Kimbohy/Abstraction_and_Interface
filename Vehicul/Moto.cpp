#include <iostream>
#include "Moto.hpp"

Moto::Moto()
{
}
Moto::~Moto()
{
}

void Moto::conduire()
{
	if (equilibre)
	{
		std::cout << "la moto avance" << std::endl;
		positionX++;
	}
	else
	{
		std::cout << "impossible pour la moto d'avancer sans equilibre" << std::endl;
	}
}

void Moto::setEquilibre(bool equilibre)
{
	// std::cout << "equilibre: " << equilibre << std::endl;
	this->equilibre = equilibre;
}