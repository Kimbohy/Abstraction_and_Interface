#ifndef AUTO_HPP
#define AUTO_HPP
#include <string>
#include "Vehicul.hpp"

class Auto : public Vehicul
{
public:
	Auto();
	~Auto();
	void conduire();
	void setSens(std::string sens);

private:
	std::string sens;
};

#endif