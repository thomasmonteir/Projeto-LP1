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
        int getMesI();
        int getAno();
        int getDesignacao();
        float getSalario();
        virtual void setCodigo(int cod);
        virtual void setNome(std::string n);
        virtual void setEndereco(std::string e);
        virtual void setTel(std::string tel);
        virtual void setMesI(int m);
        virtual void setAno(int an);
        virtual void setDesignacao(int des);
        virtual void setSalario(float s);
        virtual void setDados(int codigo,std::string nome,std::string endereco,std::string tel,int mesI,int ano,int designacao,float salario);
        virtual void showDados();
        virtual void setAreaDeFormacao(std::string a);
        virtual void setAreaDeSupervisao(std::string as);
        virtual void setFormacaoAcademica(std::string f);
        virtual void getDadosAdd();



    protected:

        int codigo;
        std::string nome;
        std::string endereco;
        std::string tel;
        int mesI;
        int ano;
        int designacao;
        float salario;

    private:


};

#endif // FUNCIONARIO_H
