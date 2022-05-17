#include "Funcionario.h"

Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}


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
std::string Funcionario::getDdi(){

    return ddi;

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

void Funcionario::setDdi(std::string d){

    ddi = d;

}
void Funcionario::setDesignacao(int des){

    designacao = des;

}
void Funcionario::setSalario(float s){

    salario = s;

}

void Funcionario::setDados(int codigo,std::string nome,std::string endereco,std::string tel,std::string ddi,int designacao,float salario)
{

    this->codigo = codigo;
    this->nome = nome;
    this->endereco = endereco;
    this->tel = tel;
    this->ddi = ddi;
    this->designacao = designacao;
    this->salario = salario;


}

void Funcionario::showDados()
{

    std::cout << codigo << " , " << nome << " , " << endereco << " , "<< tel << " , " << ddi << " , " << designacao << " , " << salario << std::endl;

}

