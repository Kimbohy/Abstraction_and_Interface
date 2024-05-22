#ifndef MOTO_HPP
#define MOTO_HPP

#include "Vehicul.hpp"

class Moto:public Vehicul
{
	public:
		Moto();
		~Moto();
		void conduire();
        void setEquilibre(bool equilibre);

    private:
        bool equilibre;
};

#endif