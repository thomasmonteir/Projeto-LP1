#ifndef GERENCIADOR_H
#define GERENCIADOR_H
#include "Funcionario.h"


class Gerenciador : public Funcionario
{
    public:
        Gerenciador();
        virtual ~Gerenciador();

        void alteraDiretor();
        void alteraOperador();
        void alteraGerente();
        void alteraPresidente();
        void setFuncionario(Funcionario* f);

    protected:
        std::vector<Funcionario*> funcionarios;
};

#endif // GERENCIADOR_H
