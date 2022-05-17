#include <iostream>
#include <string>

#include "Funcionario.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"
#include "Operador.h"

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

    Funcionario *a[3];
    a[0] = new Operador();
    a[1]= new Diretor();
    a[2] = new Gerente();
    a[3] = new Presidente();


    while(1){
        cout << "OPCAO 1: cadastrar novo usuario.\n"
                "OPCAO 2: editar usuario.\n"
                "OPCAO 3: sair\n";

        int opcao;
        cin>> opcao;

        if(opcao == 1 || opcao == 2){
            cin >> codigo;
            cin.ignore();
            getline(cin,nome);
            getline(cin,endereco);
            getline(cin,tel);
            getline(cin,ddi);
            cin >> designacao;
            cin >> salario;
            cin.ignore();


            switch(designacao){

                case 0:

                    a[0]->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                    a[0]->showDados();
                    break;


                case 1:

                    a[1]->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                    a[1]->showDados();
                    break;


                case 2:

                    a[2]->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                    a[2]->showDados();
                    break;


                case 3:

                    a[3]->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                    a[3]->showDados();
                    break;

            }
        }else {
            break;
        }
    }

}

