#include <iostream>
#include "Data.h"

using namespace std;

int main()
{

    Data d;
    int i;

    cin >> d.dia >> d.mes >> d.ano >> d.avanco;

    for(i = 0;i < d.avanco;i++){

        d.avancarDia();

    }


    d.getDaysMonth(d.mes);

    d.getValid();

    d.timePass();

    if(d.getDia() < 10 && d.getMes() < 10){

        cout << "0" << d.getDia() <<  "/" << "0" << d.getMes() << "/" << d.getAno();

    }else if(d.getDia() < 10){

        cout << "0" << d.getDia() << "/" << d.getMes() << "/" << d.getAno();

    }else if(d.getMes() < 10){

        cout << d.getDia() <<  "/" << "0" << d.getMes() << "/" << d.getAno();

    }else{

         cout << d.getDia() <<  "/" << d.getMes() << "/" << d.getAno();

    }


    return 0;
}
