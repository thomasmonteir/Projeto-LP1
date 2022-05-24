#include <iostream>
#include <string>

#include "Funcionario.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"
#include "Operador.h"
#include "Gerenciador.h"

using namespace std;

int main()
{
    int codigo;
    std::string nome;
    std::string endereco;
    std::string tel;
    std::string ddi;
    int designacao;
    float salario;
    int i = 0;
    std::string areaFormacao;
    std::string areaSupervisao;
    std::string formacaoMaxima;
    Gerenciador g;

    Funcionario *f;
    Funcionario *a[4];


    while(codigo != -1){

    cin >> codigo;

    if(codigo == -1){
        break;
    }
    cin.ignore();
    getline(cin,nome);
    getline(cin,endereco);
    getline(cin,tel);
    getline(cin,ddi);
    cin >> designacao;
    cin >> salario;
    cin.ignore();
    i++;

        switch(designacao){

            case 0:
                f = new Operador();
                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                f->showDados();
                g.setFuncionario(f);
                break;


            case 1:
                f = new Diretor();
                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                f->getDadosAdd();
                f->showDados();
                break;


            case 2:
                f = new Gerente();
                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                f->getDadosAdd();
                f->showDados();

                break;


            case 3:
                f = new Presidente();
                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                f->getDadosAdd();
                f->showDados();

                break;

        }

    }

}
