#ifndef GERENCIADOR_H
#define GERENCIADOR_H
#include "Funcionario.h"
#include <vector>


class Gerenciador : public Funcionario
{
    public:
        Gerenciador();
        virtual ~Gerenciador();

        void alteraFuncionario(int codigo);
        void setFuncionario(Funcionario* f);
        void deletaFuncionario(int codigo);
        void exibeFuncionario(int codigo);
        void exibeTodosFuncionarios();
        void exibeTipoFuncionario(int d);
        void aumentaSalario();
        void setFolhaDePagamento(int mes);
        void getFolhaDePagamento(int mes);
        int getMesDeAumento();
        void getFolhaFuncionarioCod(int cod);
        void getFolhaFuncionarioNome(std::string n);

    protected:
        std::vector<Funcionario*> funcionarios;
        int mesDeAumento;
        std::vector <int> he;
        std::vector <int> dt;

};

#endif // GERENCIADOR_H
