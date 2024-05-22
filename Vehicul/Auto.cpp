#include <string>
#include <iostream>
#include "Auto.hpp"

Auto::Auto()
{
}

Auto::~Auto()
{
}

void Auto::conduire()
{
	if (sens == "devant")
	{
		std::cout<<"l'auto avance"<<std::endl;
		positionX++;
	}
	else
	{
		std::cout<<"l'auto recule"<<std::endl;
		positionX--;
	}
}

void Auto::setSens(std::string sens)
{
	this->sens = sens;
}