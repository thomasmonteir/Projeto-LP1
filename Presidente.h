#ifndef PRESIDENTE_H
#define PRESIDENTE_H

#include <string>
#include "Funcionario.h"

class Presidente : public Funcionario
{
    public:
        Presidente();
        virtual ~Presidente();
        std::string getAreaDeFormacao();
        std::string getFormacaoAcademica();
        void setAreaDeFormacao(std::string a);
        void setFormacaoAcademica(std::string f);
        void getDadosAdd();
        void showDados();


    protected:

    private:

        std::string areaDeFormacao;
        std::string formacaoAcademica;
};

#endif // PRESIDENTE_H
