#ifndef FOLHA_H
#define FOLHA_H
#include <time.h>
#include <iostream>
#include "Gerenciador.h"
#include <cstdlib>
#include <ctime>

using namespace std;


class Folha : public Gerenciador
{
    public:
        Folha();
        virtual ~Folha();

        void getFolhaDePagamento(int mes);
        void setFolhaDePagamento(int mes);




    protected:
        float hsomas[100];
        float hhoraExtra[100];
        float hprecoHora[100];
        float hprecoHoraExtra[100];
        int hdiasTrabalhados[100];
        float gastosTotais;
        int mes;

};

#endif // FOLHA_H
