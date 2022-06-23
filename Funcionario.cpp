#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}

//metodos get e set

int Funcionario::getCodigo(){

    return codigo;

}

std::string Funcionario::getNome(){

    return nome;

}
std::string Funcionario::getEndereco(){

    return endereco;

}
std::string Funcionario::getTel(){

    return tel;

}
int Funcionario::getMesI(){

    return mesI;

}

int Funcionario::getAno(){

    return ano;

}

int Funcionario::getDesignacao(){

    return designacao;

}
float Funcionario::getSalario(){

    return salario;

}
void Funcionario::setCodigo(int cod){

    codigo = cod;

}
void Funcionario::setNome(std::string n){

    nome = n;

}
void Funcionario::setEndereco(std::string e){

    endereco = e;

}
void Funcionario::setTel(std::string tel){

    this->tel = tel;

}

void Funcionario::setDesignacao(int des){

    designacao = des;

}
void Funcionario::setSalario(float s){

    salario = s;

}

//setar os dados gerais de cada tipo de funcionario
void Funcionario::setDados(int codigo,std::string nome,std::string endereco,std::string tel,int mesI,int ano,int designacao,float salario)
{

    this->codigo = codigo;
    this->nome = nome;
    this->endereco = endereco;
    this->tel = tel;
    this->mesI = mesI;
    this->ano = ano;
    this->designacao = designacao;
    this->salario = salario;


}

//exibir todos os dados dos funcionarios
void Funcionario::showDados()
{

    std::cout << "Funcionario: " << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << mesI << "/" << ano << " , " << designacao << " , " << salario << std::endl;

}

void Funcionario::setAno(int an){

    ano = an;

}

void Funcionario::setMesI(int m){

    mesI = m;

}

void Funcionario::getDadosAdd(){



}
void Funcionario::setAreaDeFormacao(std::string a){
}
void Funcionario::setAreaDeSupervisao(std::string as){
}
void Funcionario::setFormacaoAcademica(std::string f){
}
