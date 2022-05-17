#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        int getCodigo();
        std::string getNome();
        std::string getEndereco();
        std::string getTel();
        std::string getDdi();
        int getDesignacao();
        float getSalario();
        virtual void setCodigo(int cod);
        virtual void setNome(std::string n);
        virtual void setEndereco(std::string e);
        virtual void setTel(std::string tel);
        virtual void setDdi(std::string d);
        virtual void setDesignacao(int des);
        virtual void setSalario(float s);
        virtual void setDados(int codigo,std::string nome,std::string endereco,std::string tel,std::string ddi,int designacao,float salario);
        virtual void showDados();


    protected:

        int codigo;
        std::string nome;
        std::string endereco;
        std::string tel;
        std::string ddi;
        int designacao;
        float salario;

    private:


};

#endif // FUNCIONARIO_H
