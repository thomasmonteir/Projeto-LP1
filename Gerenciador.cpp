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
