#include "Gerente.h"

Gerente::Gerente()
{
    designacao = 2;
}

Gerente::~Gerente()
{
    //dtor
}

void Gerente::getDadosAdd(){

    getline(std::cin,areaDeSupervisao);

}

void Gerente::showDados(){

     std::cout << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << ddi << " , " << designacao << " , " << salario <<
     " , " << areaDeSupervisao << std::endl;

}
void Gerente::setAreaDeSupervisao(std::string as){
    areaDeSupervisao = as;
}
