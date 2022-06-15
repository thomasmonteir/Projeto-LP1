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

    std::cout << "Area de formacao: ";
    getline(std::cin,areaDeFormacao);
    std::cout << "Formacao academica: ";
    getline(std::cin,formacaoAcademica);

}

void Presidente::showDados(){

     std::cout << "Funcionario: " << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << mesI << "/" << ano << " , " << designacao << " , " << salario <<
     " , " <<areaDeFormacao << " , " <<formacaoAcademica << std::endl;

}
