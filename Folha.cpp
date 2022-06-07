#include "Folha.h"

Folha::Folha()
{
    //ctor
}

Folha::~Folha()
{
    //dtor
}


void Folha::setFolhaDePagamento(int mes){
    int horaExtra[funcionarios.size()], diasTrabalhados[funcionarios.size()];
    unsigned seed = time(0);
    unsigned seed2 = time(0);
    float precoHora[funcionarios.size()];
    float precoHoraExtra[funcionarios.size()];
    float soma[funcionarios.size()];
    float gastosTotais = 0;


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
        if(soma[i] > 1903.98 && soma[i] <= 2826.65){
            soma[i] *= 0.925;
        }else if(soma[i] > 2826.65 && soma[i] <= 3751.05){
            soma[i] *= 0.85;
        }else if(soma[i] > 3751.05 && soma[i] <= 4664.68){
            soma[i] *= 0.775;
        }else if(soma[i] > 4664.68){
            soma[i] *= 0.725;
        }
        //PREVIDENCIA SOCIAL
        if(soma[i] <= 1212){
            soma[i] *= 0.925;
        }else if(soma[i] > 1212 && soma[i] <= 2427.35){
            soma[i] *= 0.91;
        }else if(soma[i] > 2427.35 && soma[i] <= 3641.03){
            soma[i] *= 0.88;
        }else if(soma[i] > 2427.35 && soma[i] <= 3641.03){
            soma[i] *= 0.88;
        }else if(soma[i] > 3641.03){
            soma[i] *= 0.86;
        }
        gastosTotais += soma[i];
    }
    for(int i = 0; i < funcionarios.size(); i++){
        hsomas[i] = soma[i];
        hhoraExtra[i] = horaExtra[i];
        hprecoHora[i] = precoHora[i];
        hdiasTrabalhados[i] = diasTrabalhados[i];
        hprecoHoraExtra[i] = precoHoraExtra[i];
        this->mes = mes;
        this->gastosTotais = gastosTotais;
    }
}






void Folha::getFolhaDePagamento(int mes){
    cout << "Folha de pagamento do mês " << mes << endl;

    for(int i = 0; i < folhas.size(); i++){
        if(folhas[i].mes == mes){
            cout << folhas[i].hsomas[i] << endl;
        }else{
            cout << "deu merda :( " << endl;
        }
    }



}
