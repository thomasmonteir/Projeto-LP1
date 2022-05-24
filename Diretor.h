#ifndef DIRETOR_H
#define DIRETOR_H

#include "Funcionario.h"

#include <string>
#include <vector>

class Diretor : public Funcionario
{
    public:
        Diretor();
        virtual ~Diretor();
        std::string getAreaDeSupervisao();
        std::string getAreaDeFormacao();
        void setAreaDeFormacao(std::string a);
        void setAreaDeSupervisao(std::string as);
        void getDadosAdd();
        void showDados();

    private:

        std::string areaDeSupervisao;
        std::string areaDeFormacao;

};

#endif // DIRETOR_H
