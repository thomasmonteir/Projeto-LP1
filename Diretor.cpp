#include "Diretor.h"

Diretor::Diretor()
{
    //ctor
}

Diretor::~Diretor()
{
    //dtor
}

std::string Diretor::getAreaDeSupervisao(){

    return areaDeSupervisao;

}
std::string Diretor::getAreaDeFormacao(){

    return areaDeFormacao;

}
void Diretor::setAreaDeSupervisao(std::string as){

    areaDeSupervisao = as;

}
void Diretor::setAreaDeFormacao(std::string a){

    areaDeFormacao= a;

}


