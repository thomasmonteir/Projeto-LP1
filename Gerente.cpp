#include "Gerente.h"

Gerente::Gerente()
{
    //ctor
}

Gerente::~Gerente()
{
    //dtor
}

std::string Gerente::getAreaDeSupervisao(){

    return areaDeSupervisao;

}


void Gerente::setAreaDeSupervisao(std::string as){

    areaDeSupervisao = as;

}


