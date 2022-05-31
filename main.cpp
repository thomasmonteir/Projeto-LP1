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
    int busca;
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
    //Funcionario *a[4];

    while(i == 0){


                std::cout << "----- Escolha uma opção -----" << std::endl
                << "1 - Cadastrar Funcionario" << std::endl
                << "2 - Editar funcionario" << std::endl
                << "3 - Cadastrar Diretor" << std::endl
                << "4 - Deletar Funcionario" << std::endl
                << "5 - Exibir Funcionario" << std::endl
                << "6 - Exibir todos os funcionarios" << std::endl
                << "7 - Exibir um tipo de funcionario" << std::endl
                << "8 - Conceder aumento" << std::endl
                << "0 - Sair" << std::endl;

                std::cin >> i;

                switch(i){
                    case 1:
                        cin >> codigo;
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

                                cout << "Deseja alterar?/n/n1- sim/n2- nao/n";

                                int option;

                                cin >> option;

                                g.setFuncionario(f);
                                if(option == 1){
                                    g.alteraFuncionario(codigo);
                                    f->showDados();
                                }

                                break;


                            case 1:
                                f = new Diretor();
                                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                                f->getDadosAdd();
                                f->showDados();
                                cout << "Deseja alterar?\n\n1- sim\n2- nao\n";

                                int option2;

                                cin >> option2;

                                g.setFuncionario(f);
                                if(option2 == 1){
                                    g.alteraFuncionario(codigo);
                                    f->showDados();
                                }
                                break;


                            case 2:
                                f = new Gerente();
                                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                                f->getDadosAdd();
                                f->showDados();
                                cout << "Deseja alterar?\n\n1- sim\n2- nao\n";

                                int option3;

                                cin >> option3;

                                g.setFuncionario(f);
                                if(option3 == 1){
                                    g.alteraFuncionario(codigo);
                                    f->showDados();
                                }

                                break;


                            case 3:
                                f = new Presidente();
                                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                                f->getDadosAdd();
                                f->showDados();
                                cout << "Deseja alterar?\n\n1- sim\n2- nao\n";

                                int option4;

                                cin >> option4;

                                g.setFuncionario(f);
                                if(option4 == 1){
                                    g.alteraFuncionario(codigo);
                                    f->showDados();
                                }
                                i = 0;
                                break;

                        }
                        break;
                    case 2:
                        cout << "Digite o código do funcionário que você deseja editar" << endl;
                        break;
                    case 3:
                        cout << "Digite o código do funcionário que você deseja deletar" << endl;
                        cin >> busca;
                        g.deletaFuncionario(busca);
                        break;


            }
        }
}
