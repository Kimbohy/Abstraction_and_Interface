#include <iostream>
#include "Vehicul.hpp"

Vehicul::Vehicul()
{
}
Vehicul::~Vehicul()
{
}

void Vehicul::affichePosition()
{
	std::cout << "x: " << positionX << std::endl;
}
