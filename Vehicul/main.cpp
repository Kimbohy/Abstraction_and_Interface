#include <iostream>
#include "Auto.hpp"
#include "Moto.hpp"

int main()
{
    Moto myMoto = Moto();
    Auto myAuto = Auto();
    std::cout<<"avent conduire"<<std::endl;
    std::cout<<"myMoto ";
    myMoto.affichePosition();
    std::cout<<"myAuto ";
    myAuto.affichePosition();

    myAuto.setSens("deriaire");
    myMoto.setEquilibre(false);

    myAuto.conduire();
    myMoto.conduire();

    std::cout<<"apres conduire"<<std::endl;
    std::cout<<"myMoto ";
    myMoto.affichePosition();
    std::cout<<"myAuto ";
    myAuto.affichePosition();

    myAuto.setSens("devant");
    myMoto.setEquilibre(true);

    myAuto.conduire();
    myMoto.conduire();

    std::cout<<"apres conduire"<<std::endl;
    std::cout<<"myMoto ";
    myMoto.affichePosition();
    std::cout<<"myAuto ";
    myAuto.affichePosition();

    return 0;
}

