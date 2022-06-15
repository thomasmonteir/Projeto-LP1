#include "Gerenciador.h"
#include <iostream>
#include <time.h>
#include <fstream>

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
int Gerenciador::getMesDeAumento(){
    return mesDeAumento;
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
                    cout << "Qual atributo voce deseja alterar?\n\n1- Codigo\n2- Nome\n3- Endereco\n4- Telefone\n5- DDI\n6- Salario" << endl;
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
                        cout << "Qual atributo voce deseja alterar?\n\n 1- Codigo\n 2- Nome\n 3- Endereco\n 4- Telefone\n 5- DDI\n 6- Salario\n7- Area de supervisao\n8- Area de formacaoo\n" << endl;
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
                            cout << "Qual atributo voce deseja alterar?\n\n1- Codigo\n2- Nome\n3- Endereço\n4- Telefone\n5- DDI\n6- Salario\n7- Area de supervisao\n" << endl;
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
                            cout << "Qual atributo voce deseja alterar?\n\n1- Codigo\n2- Nome\n3- Endereço\n4- Telefone\n5- DDI\n6- Salario\n7- Area de formacao\n8- Formacao Academica\n" << endl;
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
    int Y;
    int M;
    for(int i = 0; i < funcionarios.size(); i++){
        if(funcionarios[i]->getCodigo() == codigo){
            cout << "Realmente deseja deletar o funcionario?\n1 - sim\n2 - nao" << endl;
            cin >> Y;
            M = 1;
            if(Y == 1){
                cout << "Deletando o funcionario de codigo " << codigo << "." << endl;
                cout << "Funcionario de codigo " << codigo << " deletado." << endl;
                delete(funcionarios[i]);
            }else {
                cout << "Operaçao abortada." << endl;
                break;
            }
        }
        if(i == funcionarios.max_size()){
            cout << "Funcionário nao encontrado." << endl;
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
        cout << "Funcionário nao encontrado." << endl;
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
    struct tm * infoTempo;
    time_t t;

    time(&t);
    infoTempo = localtime(&t);

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
    cout << "Aumento concedido em " << infoTempo->tm_mday << "/" << infoTempo->tm_mon + 1 << "/" << infoTempo->tm_year + 1900 << endl;
    mesDeAumento = infoTempo->tm_mon + 1;
    cout << mesDeAumento;
}

void Gerenciador::setFolhaDePagamento(int mes){
    unsigned seed = time(0);
    unsigned seed2 = time(0);
    int horaExtra[funcionarios.size()], diasTrabalhados[funcionarios.size()];
    float precoHora[funcionarios.size()];
    float precoHoraExtra[funcionarios.size()];
    float soma[funcionarios.size()];
    float gastosTotais = 0;
    ofstream folha;
    string f = "Folha.txt";
    float descontos[funcionarios.size()];
    string z = "Folha" + to_string(mes) + ".txt";

    srand(seed);
    srand(seed2);
    for(int i = 0; i < funcionarios.size() ; i++){
        horaExtra[i] = rand()%41;
        diasTrabalhados[i] = rand()%21;
        if(diasTrabalhados[i] < 10){
            diasTrabalhados[i] += 10;
        }
        precoHora[i] = funcionarios[i]->getSalario()/160;
        precoHoraExtra[i] = precoHora[i]*2;

        soma[i] = funcionarios[i]->getSalario() + (horaExtra[i] * precoHoraExtra[i]);
        //IMPOSTO DE RENDA
        if(funcionarios[i]->getSalario() > 1903.98 && funcionarios[i]->getSalario() <= 2826.65){
            descontos[i] = funcionarios[i]->getSalario()*0.075;
            soma[i] *= 0.925;
        }else if(funcionarios[i]->getSalario() > 2826.65 && funcionarios[i]->getSalario() <= 3751.05){
            descontos[i] = funcionarios[i]->getSalario()*0.15;
            soma[i] *= 0.85;
        }else if(funcionarios[i]->getSalario() > 3751.05 && funcionarios[i]->getSalario() <= 4664.68){
            descontos[i] = funcionarios[i]->getSalario()*0.225;
            soma[i] *= 0.775;
        }else if(funcionarios[i]->getSalario() > 4664.68){
            descontos[i] = funcionarios[i]->getSalario()*0.275;
            soma[i] *= 0.725;
        }
        //PREVIDENCIA SOCIAL
        if(funcionarios[i]->getSalario() <= 1212){
            descontos[i] += funcionarios[i]->getSalario()*0.075;
            soma[i] *= 0.925;
        }else if(funcionarios[i]->getSalario() > 1212 && soma[i] <= 2427.35){
            descontos[i] += funcionarios[i]->getSalario()*0.09;
            soma[i] *= 0.91;
        }else if(funcionarios[i]->getSalario() > 2427.35 && soma[i] <= 3641.03){
            descontos[i] += funcionarios[i]->getSalario()*0.12;
            soma[i] *= 0.88;
        }else if(funcionarios[i]->getSalario() > 3641.03){
            descontos[i] += funcionarios[i]->getSalario()*0.14;
            soma[i] *= 0.86;
        }
        gastosTotais += soma[i];

    }
    //escrevendo no arquivo
    folha.open(z);
    for(int i = 0; i < funcionarios.size(); i++){
        folha << funcionarios[i]->getCodigo() << " - " << funcionarios[i]->getNome() << endl;
        folha << "Salário bruto: R$" << funcionarios[i]->getSalario() << endl;
        folha << "Descontos: R$" << to_string(descontos[i]) << endl;
        folha << "Salário líquido: R$" << to_string(soma[i]) << endl;
        folha << "Dias trabalhados: " << to_string(diasTrabalhados[i]) << endl;
        folha << "Horas extras trabalhadasa: " << to_string(horaExtra[i]) << endl << endl;
    }
    folha << "Total do mês: R$" << gastosTotais;
    folha.close();
    for(int i = 0; i < funcionarios.size(); i++){
        he.push_back(horaExtra[i]);
        dt.push_back(diasTrabalhados[i]);
    }
}

void Gerenciador::getFolhaFuncionarioCod(int cod){
    ofstream folha;
    float descontos[funcionarios.size()], precoHora[funcionarios.size()];
    float soma[funcionarios.size()], precoHoraExtra[funcionarios.size()];



    for(int i = 0; i < funcionarios.size(); i++){
        precoHora[i] = funcionarios[i]->getSalario()/20;
        precoHoraExtra[i] = precoHora[i]*2;
        soma[i] = funcionarios[i]->getSalario() + (he[i] * precoHoraExtra[i]);
        if(funcionarios[i]->getCodigo() == cod){
            //IMPOSTO DE RENDA
        if(funcionarios[i]->getSalario() > 1903.98 && funcionarios[i]->getSalario() <= 2826.65){
            descontos[i] = funcionarios[i]->getSalario()*0.075;
            soma[i] *= 0.925;
        }else if(funcionarios[i]->getSalario() > 2826.65 && funcionarios[i]->getSalario() <= 3751.05){
            descontos[i] = funcionarios[i]->getSalario()*0.15;
            soma[i] *= 0.85;
        }else if(funcionarios[i]->getSalario() > 3751.05 && funcionarios[i]->getSalario() <= 4664.68){
            descontos[i] = funcionarios[i]->getSalario()*0.225;
            soma[i] *= 0.775;
        }else if(funcionarios[i]->getSalario() > 4664.68){
            descontos[i] = funcionarios[i]->getSalario()*0.275;
            soma[i] *= 0.725;
        }
        //PREVIDENCIA SOCIAL
        if(funcionarios[i]->getSalario() <= 1212){
            descontos[i] += funcionarios[i]->getSalario()*0.075;
            soma[i] *= 0.925;
        }else if(funcionarios[i]->getSalario() > 1212 && soma[i] <= 2427.35){
            descontos[i] += funcionarios[i]->getSalario()*0.09;
            soma[i] *= 0.91;
        }else if(funcionarios[i]->getSalario() > 2427.35 && soma[i] <= 3641.03){
            descontos[i] += funcionarios[i]->getSalario()*0.12;
            soma[i] *= 0.88;
        }else if(funcionarios[i]->getSalario() > 3641.03){
            descontos[i] += funcionarios[i]->getSalario()*0.14;
            soma[i] *= 0.86;
        }
            folha.open(to_string(cod) + ".txt");
            folha << funcionarios[i]->getCodigo() << " - " << funcionarios[i]->getNome() << endl;
            folha << "Salário bruto: R$" << funcionarios[i]->getSalario() << endl;
            folha << "Descontos: R$" << to_string(descontos[i]) << endl;
            folha << "Salário líquido: R$" << to_string(soma[i]) << endl;
    }



    }
    folha.close();
}

