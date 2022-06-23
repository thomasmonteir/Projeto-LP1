#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <windows.h>

#include "Funcionario.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"
#include "Operador.h"
#include "Gerenciador.h"
#include "Folha.h"
#include "CEP.h"

using namespace std;

int main()
{
    int codigo, codFoto;
    int busca;
    std::string nome;
    std::string endereco;
    std::string tel;
    int mesI;
    int ano;
    int designacao;
    float salario;
    int i = 0;
    std::string areaFormacao;
    std::string areaSupervisao;
    std::string formacaoMaxima;
    int mes, meses[13];
    string MES;
    string BUSCA;
    int option;
    int bmes, bano, bmes2, bano2;
    string miniCEP, url, cmd, cmdFoto;
    int temPresidente = 0;
    int foto;
    int funExiste = 0;

    Gerenciador g;
    CEP c;
    Funcionario *f;

    SetConsoleOutputCP(CP_UTF8);

    while(1){

                //menu de opcoes
                std::cout << endl << "----- Escolha uma opcao -----" << std::endl
                << "01 - Cadastrar Funcionario" << std::endl
                << "02 - Editar funcionario" << std::endl
                << "03 - Deletar Funcionario" << std::endl
                << "04 - Exibir Funcionario" << std::endl
                << "05 - Exibir todos os funcionarios" << std::endl
                << "06 - Exibir um tipo de funcionario" << std::endl
                << "07 - Conceder aumento" << std::endl
                << "08 - Criar Folha Salarial em arquivo" << std::endl
                << "09 - Folha Salarial de um funcionario" << std::endl
                << "10 - Exibir Folha Salarial Mensal" << std::endl
                << "11 - Procurar funcionario pelo nome ou endereco" << std::endl
                << "12 - Procurar funcionario por intervalo de tempo" << endl
                << "13 - Cadastrar foto de perfil de um funcionario" << endl
                << "00 - Sair\n" << std::endl;

                std::cin >> i;
                cout << endl;

                switch(i){
                    //criar funcionario
                    case 1:
                        cout << "Codigo: ";
                        cin >> codigo;
                        cin.ignore();
                        cout << "Nome: ";
                        getline(cin,nome);

                        cout << "CEP: ";
                        getline(cin,miniCEP);
                        url = "https://viacep.com.br/ws/" + miniCEP  + "/json/";
                        cmd = "wget -qO cep.txt " + url;
                        system(cmd.c_str());
                        endereco = c.parseCep();

                        cout << "Telefone: ";
                        getline(cin,tel);
                        cout << "Data de iniciacao (mês e ano):";
                        cin >> mesI;
                        cin >> ano;
                        cout << "Designacao: ";
                        cin >> designacao;
                        if(temPresidente == 0 && designacao == 3){
                            temPresidente = 1;
                        }else if(temPresidente == 1 && designacao == 3){
                            cout << "Apenas um presidente permitido na empresa." << endl;
                            break;
                        }
                        cout << "Salario: ";
                        cin >> salario;
                        cin.ignore();

                        i++;

                        switch(designacao){

                            //operador
                            case 0:
                                f = new Operador();
                                f->setDados(codigo,nome,endereco,tel,mesI,ano,designacao,salario);
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

                            //diretor
                            case 1:
                                f = new Diretor();
                                f->setDados(codigo,nome,endereco,tel,mesI,ano,designacao,salario);
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

                            //gerente
                            case 2:
                                f = new Gerente();
                                f->setDados(codigo,nome,endereco,tel,mesI,ano,designacao,salario);
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

                            //presidente
                            case 3:
                                f = new Presidente();
                                f->setDados(codigo,nome,endereco,tel,mesI,ano,designacao,salario);
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
                        funExiste = 1;
                        break;

                    //edicao de funcionario
                    case 2:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o codigo do funcionario que voce deseja editar\n" << endl;
                        cin >> busca;
                        g.alteraFuncionario(busca);

                        break;

                    //deletar funcionario
                    case 3:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o codigo do funcionario que voce deseja deletar" << endl;
                        cin >> busca;
                        g.deletaFuncionario(busca);

                        break;

                    //exibir func por codigo
                    case 4:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o codigo do funcionario que você deseja exibir" << endl;
                        cin >> busca;
                        g.exibeFuncionario(busca);

                        break;

                    //exibir todos os func
                    case 5:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Exibindo todos os funcionarios:\n" << endl;
                        g.exibeTodosFuncionarios();

                        break;

                    //exibir func por tipo
                    case 6:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o tipo de funcionario que voce deseja exibir: \n0 - Operario\n1 - Diretor\n2 - Gerente\n3 - Diretor\n" << endl;
                        cin >> busca;
                        g.exibeTipoFuncionario(busca);

                        break;

                    //aumento
                    case 7:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Concedendo aumento a todos os funcionarios" << endl;
                        g.aumentaSalario();
                        mes = g.getMesDeAumento();
                        for(int i = 1; i < mes; i++){
                            g.setFolhaDePagamento(mes-i);
                            meses[mes-i] = 1;
                        }
                        break;

                    //folha de pagamento
                    case 8:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Gerando folha de pagamento em arquivo" << endl;
                        cout << "Digite o mes da folha de pagamento" << endl;
                        cout << "*Se quiser a anual digite 12*" << endl;
                        cin >> mes;
                        if(meses[mes] == 1){
                            cout << "A folha de pagamento desse mes ja existe, deseja visualizar?" << endl;
                            cout << "1 - Sim\n2 - Nao\n";
                            cin >> option;

                            if (option == 1){
                                string a = "Folha" + to_string(mes) + ".txt";
                                system(a.c_str());
                            }
                        }else{
                            meses[mes] = 1;
                            g.setFolhaDePagamento(mes);
                            for(int i = 1; i < mes; i++){
                                g.setFolhaDePagamento(mes-i);
                                meses[mes-i] = 1;
                            }
                            cout << "Folha de pagamento gerada. Deseja exibir?" << endl;
                            cout << "1 - Sim\n2 - Nao\n";
                            cin >> option;


                            if (option == 1){
                                string a = "Folha" + to_string(mes) + ".txt";
                                system(a.c_str());
                            }
                        }
                        break;

                    //folha de pagamento por codigo e mes
                    case 9:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o codigo e o mês do funcionario cuja folha de pagamento voce deseja ver: ";
                        int c,m;
                        cout << "Codigo: ";
                        cin >> c;
                        cout << endl;
                        cout << "Mes: ";
                        cin >> m;

                        g.buscaFuncionarioCodigo(c,m);

                        break;

                    //folha de pagamento mensal
                    case 10:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Deseja abrir a folha de pagamento de qual mes?" << endl;
                        int M;
                        cin >> M;

                        MES = "Folha" + to_string(M) + ".txt";

                        system(MES.c_str());

                        break;

                    //busca func por nome ou endereco
                    case 11:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o nome ou endereco do funcionario: ";
                        cin.ignore();
                        getline(cin, BUSCA);
                        g.buscaFuncionarioNomeEndereco(BUSCA);

                        break;

                    //busca func por intervalo de tempo
                    case 12:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o mes e ano inicial, depois o mes e ano final: ";
                        cin >> bmes >> bano >> bmes2 >> bano2;
                        g.buscaIntervalo(bmes, bano, bmes2, bano2);

                        break;

                    //foto do funcionario
                    case 13:
                        if(funExiste == 0){
                            cout << "Nao foi criado nenhum funcionario." << endl;
                            break;
                        }
                        cout << "Digite o codigo do funcionario da foto: ";
                        cin >> codFoto;
                        cout << "Pressione 1 para tirar a foto: ";
                        cin >> foto;

                        if(foto == 1){
                            cmdFoto = "ffmpeg.exe -loglevel quiet -f vfwcap -y -i 0 -vframes 1 " + to_string(codFoto) + ".jpg";
                            system(cmdFoto.c_str());
                            cout << "Foto armazenada no sistema." << endl;
                            break;
                        }
                        break;

                    case 0:
                        cout << "Encerrando programa..." << endl;
                        cout << "Programa encerrado com sucesso." << endl;
                        return 1;
        }
    }
}
