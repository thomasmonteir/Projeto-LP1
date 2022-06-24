#include "Gerente.h"

Gerente::Gerente()
{
    designacao = 2;
}

Gerente::~Gerente()
{
    //dtor
}
//salvar a area de supervisao
void Gerente::getDadosAdd(){

    std::cout << "Area de supervisao: ";
    getline(std::cin,areaDeSupervisao);

}

//exibir todos os dados do gerente
void Gerente::showDados(){

     std::cout << "Funcionario: " << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << mesI << "/" << ano << " , " << designacao << " , " << salario <<
     " , " << areaDeSupervisao << std::endl;

}
void Gerente::setAreaDeSupervisao(std::string as){
    areaDeSupervisao = as;
}
