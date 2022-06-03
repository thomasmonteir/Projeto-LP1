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

    while(1){


                std::cout << endl << "----- Escolha uma opcao -----" << std::endl
                << "1 - Cadastrar Funcionario" << std::endl
                << "2 - Editar funcionario" << std::endl
                << "3 - Deletar Funcionario" << std::endl
                << "4 - Exibir Funcionario" << std::endl
                << "5 - Exibir todos os funcionarios" << std::endl
                << "6 - Exibir um tipo de funcionario" << std::endl
                << "7 - Conceder aumento" << std::endl
                << "0 - Sair\n" << std::endl;

                std::cin >> i;
                cout << endl;

                switch(i){
                    case 1:
                        cout << "Codigo: ";
                        cin >> codigo;
                        cin.ignore();
                        cout << "Nome: ";
                        getline(cin,nome);
                        cout << "Endereco: ";
                        getline(cin,endereco);
                        cout << "Telefone: ";
                        getline(cin,tel);
                        cout << "Data de iniciacao: ";
                        getline(cin,ddi);
                        cout << "Designacao: ";
                        cin >> designacao;
                        cout << "Salario: ";
                        cin >> salario;
                        cin.ignore();
                        i++;

                        switch(designacao){

                            case 0:
                                f = new Operador();
                                f->setDados(codigo,nome,endereco,tel,ddi,designacao,salario);
                                cout << endl;
                                f->showDados();

                                cout << "\nDeseja alterar?\n\n1- sim\n2- nao\n";

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
                                cout << endl;
                                f->showDados();
                                cout << "\nDeseja alterar?\n\n1- sim\n2- nao\n";

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
                                cout << endl;
                                f->showDados();
                                cout << "\nDeseja alterar?\n\n1- sim\n2- nao\n";

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
                                cout << endl;
                                f->showDados();
                                cout << "\nDeseja alterar?\n\n1- sim\n2- nao\n";

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
                        cout << "Digite o codigo do funcionario que voce deseja editar\n" << endl;
                        cin >> busca;
                        g.alteraFuncionario(busca);
                        break;
                    case 3:
                        cout << "Digite o codigo do funcionario que voce deseja deletar" << endl;
                        cin >> busca;
                        g.deletaFuncionario(busca);
                        break;
                    case 4:
                        cout << "Digite o codigo do funcionario que você deseja exibir" << endl;
                        cin >> busca;
                        g.exibeFuncionario(busca);
                        break;
                    case 5:
                        cout << "Exibindo todos os funcionarios" << endl;
                        g.exibeTodosFuncionarios();
                        break;
                    case 6:
                        cout << "Digite o tipo de funcionario que voce deseja exibir: " << endl;
                        cin >> busca;
                        g.exibeTipoFuncionario(busca);
                        break;
                    case 7:
                        cout << "Concedendo aumento a todos os funcionarios" << endl;
                        g.aumentaSalario();
                        break;
                    case 0:
                        cout << "Encerrando programa..." << endl;
                        cout << "Programa encerrado com sucesso." << endl;
                        return 1;
        }
    }
}
