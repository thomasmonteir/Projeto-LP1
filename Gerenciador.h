#ifndef GERENCIADOR_H
#define GERENCIADOR_H
#include "Funcionario.h"
#include <vector>


class Gerenciador : public Funcionario
{
    public:
        Gerenciador();
        virtual ~Gerenciador();

        //void alteraDiretor();
        void alteraFuncionario(int codigo);
        //void alteraGerente();
        //void alteraPresidente();
        void setFuncionario(Funcionario* f);
        void deletaFuncionario(int codigo);
        void exibeFuncionario(int codigo);
        void exibeTodosFuncionarios();
        void exibeTipoFuncionario(int d);
        void aumentaSalario();

    protected:
        std::vector<Funcionario*> funcionarios;
};

#endif // GERENCIADOR_H
