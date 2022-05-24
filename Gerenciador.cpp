#include "Gerenciador.h"

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

void Gerenciador::alteraOperador(int codigo){
    int a, cod;
    string nome, ddi, telefone, endereco;
    float salario;

    for(int i = 0; i < funcionarios.size(); i++){
        if(codigo == funcionarios[i].getCodigo){
            cout << "Qual atributo você deseja alterar?\n\n1- Código\n2- Nome\n3- Endereço\n4- Telefone\n5- DDI\n6- Salário" << endl;

            switch(a){
                case 1:
                    cin >> cod;
                    funcionarios[i].setCodigo(cod);
                    break;
                case 2:
                    getline(std::cin, nome);
                    funcionarios[i].setNome(nome);
                    break;
                case 3:
                    getline(std::cin, endereco);
                    funcionarios[i].setEndereco(endereco);
                    break;
                case 4:
                    getline(std::cin, telefone);
                    funcionarios[i].setTelefone(telefone);
                    break;
                case 5:
                    getline(std::cin, ddi);
                    funcionarios[i].setDdi(ddi);
                    break;
                case 6:
                    cin >> salario;
                    funcionarios[i].setSalario(salario);
                    break;

            }
        }
    }
}
