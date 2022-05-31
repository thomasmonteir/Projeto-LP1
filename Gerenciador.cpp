#include "Gerenciador.h"
#include <iostream>

using namespace std;

Gerenciador::Gerenciador()
{
    //ctor
}

Gerenciador::~Gerenciador()
{
    //dtor
}

void Gerenciador::setFuncionario(Funcionario *f){
    funcionarios.push_back(f);

}

void Gerenciador::alteraFuncionario(int codigo){
    int a, cod;
    std::string nome, ddi, telefone, endereco, areaDeFormacao, formacaoAcademica, areaDeSupervisao;
    float salario;
    int tipo;



    for(int i = 0; i < funcionarios.size(); i++){
        if(codigo == funcionarios[i]->getCodigo()){
            tipo = funcionarios[i]->getDesignacao();

            switch(tipo){
                case 0:
                    cout << "Qual atributo você deseja alterar?\n\n1- Código\n2- Nome\n3- Endereço\n4- Telefone\n5- DDI\n6- Salário" << endl;
                    cin >> a;

                    switch(a){
                        case 1:
                            cin >> cod;
                            funcionarios[i]->setCodigo(cod);
                            break;
                        case 2:
                            cin.ignore();
                            getline(std::cin, nome);
                            funcionarios[i]->setNome(nome);
                            break;
                        case 3:
                            cin.ignore();
                            getline(std::cin, endereco);
                            funcionarios[i]->setEndereco(endereco);
                            break;
                        case 4:
                            cin.ignore();
                            getline(std::cin, telefone);
                            funcionarios[i]->setTel(telefone);
                            break;
                        case 5:
                            cin.ignore();
                            getline(std::cin, ddi);
                            funcionarios[i]->setDdi(ddi);
                            break;
                        case 6:
                            cin >> salario;
                            funcionarios[i]->setSalario(salario);
                            break;

                    }
                    break;

                    case 1:
                        cout << "Qual atributo você deseja alterar?\n\n 1- Código\n 2- Nome\n 3- Endereço\n 4- Telefone\n 5- DDI\n 6- Salário\n7- Área de supervisao\n8- Área de formação\n" << endl;
                        cin >> a;

                        switch(a){
                            case 1:
                                cin >> cod;
                                funcionarios[i]->setCodigo(cod);
                                break;
                            case 2:
                                cin.ignore();
                                getline(std::cin, nome);
                                funcionarios[i]->setNome(nome);
                                break;
                            case 3:
                                cin.ignore();
                                getline(std::cin, endereco);
                                funcionarios[i]->setEndereco(endereco);
                                break;
                            case 4:
                                cin.ignore();
                                getline(std::cin, telefone);
                                funcionarios[i]->setTel(telefone);
                                break;
                            case 5:
                                cin.ignore();
                                getline(std::cin, ddi);
                                funcionarios[i]->setDdi(ddi);
                                break;
                            case 6:
                                cin >> salario;
                                funcionarios[i]->setSalario(salario);
                                break;
                            case 7:
                                cin.ignore();
                                getline(std::cin, areaDeSupervisao);
                                funcionarios[i]->setAreaDeSupervisao(areaDeSupervisao);
                                break;
                            case 8:
                                cin.ignore();
                                getline(std::cin, areaDeFormacao);
                                funcionarios[i]->setAreaDeFormacao(areaDeFormacao);
                                break;

                        }
                        break;

                        case 2:
                            cout << "Qual atributo você deseja alterar?\n\n1- Código\n2- Nome\n3- Endereço\n4- Telefone\n5- DDI\n6- Salário\n7- Área de supervisão\n" << endl;
                            cin >> a;

                            switch(a){
                                case 1:
                                    cin >> cod;
                                    funcionarios[i]->setCodigo(cod);
                                    break;
                                case 2:
                                    cin.ignore();
                                    getline(std::cin, nome);
                                    funcionarios[i]->setNome(nome);
                                    break;
                                case 3:
                                    cin.ignore();
                                    getline(std::cin, endereco);
                                    funcionarios[i]->setEndereco(endereco);
                                    break;
                                case 4:
                                    cin.ignore();
                                    getline(std::cin, telefone);
                                    funcionarios[i]->setTel(telefone);
                                    break;
                                case 5:
                                    cin.ignore();
                                    getline(std::cin, ddi);
                                    funcionarios[i]->setDdi(ddi);
                                    break;
                                case 6:
                                    cin >> salario;
                                    funcionarios[i]->setSalario(salario);
                                    break;
                                case 7:
                                    cin.ignore();
                                    getline(std::cin, areaDeSupervisao);
                                    funcionarios[i]->setAreaDeSupervisao(areaDeSupervisao);
                                    break;

                            }
                        break;

                        case 3:
                            cout << "Qual atributo você deseja alterar?\n\n1- Código\n2- Nome\n3- Endereço\n4- Telefone\n5- DDI\n6- Salário\n7- Área de fromação\n8- Formação Acadêmica\n" << endl;
                            cin >> a;

                            switch(a){
                                case 1:
                                    cin >> cod;
                                    funcionarios[i]->setCodigo(cod);
                                    break;
                                case 2:
                                    cin.ignore();
                                    getline(std::cin, nome);
                                    funcionarios[i]->setNome(nome);
                                    break;
                                case 3:
                                    cin.ignore();
                                    getline(std::cin, endereco);
                                    funcionarios[i]->setEndereco(endereco);
                                    break;
                                case 4:
                                    cin.ignore();
                                    getline(std::cin, telefone);
                                    funcionarios[i]->setTel(telefone);
                                    break;
                                case 5:
                                    cin.ignore();
                                    getline(std::cin, ddi);
                                    funcionarios[i]->setDdi(ddi);
                                    break;
                                case 6:
                                    cin >> salario;
                                    funcionarios[i]->setSalario(salario);
                                    break;
                                case 7:
                                    cin.ignore();
                                    getline(std::cin, areaDeFormacao);
                                    funcionarios[i]->setAreaDeFormacao(areaDeFormacao);
                                    break;
                                case 8:
                                    cin.ignore();
                                    getline(std::cin, formacaoAcademica);
                                    funcionarios[i]->setFormacaoAcademica(formacaoAcademica);
                                    break;

                            }
                            break;

            }

        }
    }
}

void Gerenciador::deletaFuncionario(int codigo)
{
    std::string Y;
    int M;
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getCodigo() == codigo){
            cout << "Realmente deseja deletar o funcionário?" << endl;
            cin >> Y;
            M = 1;
            if(Y == "sim"){
                cout << "Deletando o funcionario de codigo " << codigo << "." << endl;
                delete(funcionarios[i]);
            }else {
                cout << "Operação abortada." << endl;
                break;
            }
        }
        if(i == funcionarios.max_size()){
            cout << "Funcionário não encontrado." << endl;
        }
    }
}
void Gerenciador::exibeFuncionario(int codigo){
    int M = 0;
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getCodigo() == codigo){
            M = 1;
            funcionarios[i]->showDados();

        }

    }
    if(M == 0){
        cout << "Funcionário não encontrado." << endl;
    }

}
void Gerenciador::exibeTodosFuncionarios()
{
    for(int i = 0; i < funcionarios.size(); i++){
        funcionarios[i]->showDados();
    }
}

void Gerenciador::exibeTipoFuncionario(int d){
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getDesignacao() == d){
            funcionarios[i]->showDados();
        }
    }
}
void Gerenciador::aumentaSalario()
{
    int tipo;

    for(int i = 0; i < funcionarios.size(); i++){
        tipo = funcionarios[i]->getDesignacao();
        switch(tipo){
            case 0:
                funcionarios[i]->setSalario(funcionarios[i]->getSalario()*1.05);
                break;
            case 1:
                funcionarios[i]->setSalario(funcionarios[i]->getSalario()*1.2);
                break;
            case 2:
                funcionarios[i]->setSalario(funcionarios[i]->getSalario()*1.1);
                break;
            case 3:
                funcionarios[i]->setSalario(funcionarios[i]->getSalario()*1.3);
                break;
        }

    }
}
