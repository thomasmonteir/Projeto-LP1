#include "Gerenciador.h"

Gerenciador::Gerenciador()
{
    //ctor
}

Gerenciador::~Gerenciador()
{
    //dtor
}

void Gerenciador::setFuncionario(Funcionario *f){
    funcionarios.push_back(f);

}
