#include "Presidente.h"

Presidente::Presidente()
{
    //ctor
}

Presidente::~Presidente()
{
    //dtor
}

std::string Presidente::getAreaDeFormacao(){

    return areaDeFormacao;

}
std::string Presidente::getFormacaoAcademica(){

    return formacaoAcademica;

}
void Presidente::setAreaDeFormacao(std::string a){

    areaDeFormacao = a;

}
void Presidente::setFormacaoAcademica(std::string f){

    formacaoAcademica = f;

}
