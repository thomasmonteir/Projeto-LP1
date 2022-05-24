#include "Presidente.h"

Presidente::Presidente()
{
    designacao = 3;
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

void Presidente::getDadosAdd(){

    getline(std::cin,areaDeFormacao);
    getline(std::cin,formacaoAcademica);

}

void Presidente::showDados(){

     std::cout << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << ddi << " , " << designacao << " , " << salario <<
     " , " <<areaDeFormacao << " , " <<formacaoAcademica << std::endl;

}
