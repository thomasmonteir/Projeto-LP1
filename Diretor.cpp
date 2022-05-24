#include "Diretor.h"

Diretor::Diretor()
{
    designacao = 1;
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
void Diretor::getDadosAdd(){

    getline(std::cin,areaDeFormacao);
    getline(std::cin,areaDeSupervisao);

}

void Diretor::showDados(){

     std::cout << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << ddi << " , " << designacao << " , " << salario << " , " <<
     areaDeFormacao <<  " , " << areaDeSupervisao << std::endl;

}
