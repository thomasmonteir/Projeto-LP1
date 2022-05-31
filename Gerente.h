#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

#include <string>

class Gerente: public Funcionario
{
    public:
        Gerente();
        virtual ~Gerente();
        std::string getAreaDeSupervisao();
        void setAreaDeSupervisao(std::string as);
        void getDadosAdd();
        void showDados();

    protected:

    private:

        std::string areaDeSupervisao;
};

#endif // GERENTE_H
