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

    std::cout << "Area de formacao: ";
    getline(std::cin,areaDeFormacao);
    std::cout << "Area de supervisao: ";
    getline(std::cin,areaDeSupervisao);

}

void Diretor::showDados(){

     std::cout << "Funcionario: " << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << mesI << "/" << ano << " , " << designacao << " , " << salario << " , " <<
     areaDeFormacao <<  " , " << areaDeSupervisao << std::endl;

}
