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

    std::cout << "Area de supervisao: ";
    getline(std::cin,areaDeSupervisao);

}

void Gerente::showDados(){

     std::cout << "Funcionario: " << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << mesI << "/" << ano << " , " << designacao << " , " << salario <<
     " , " << areaDeSupervisao << std::endl;

}
void Gerente::setAreaDeSupervisao(std::string as){
    areaDeSupervisao = as;
}
