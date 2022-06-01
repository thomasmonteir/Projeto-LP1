#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>


using namespace std;

string parseCep(){

    fstream fs;
    string linha,dado,rua,bairro,cidade,uf;
    int i = 0,posPt = 0;

    fs.open("cep.txt",fstream::in);

    if(!fs.is_open()){

        cout << "erro ao abrir arquivo\n";
        return NULL;

    }

    while(!fs.eof()){

        getline(fs,linha);

        if(i == 2 || i == 4 || i ==5 || i ==6){
            posPt = linha.find(':');
            dado = linha.substr(posPt + 3,linha.size() - 2 - posPt - 3);
            //dado = dado.substr(0,dado.size() - 2);
            //cout << dado << endl;

            if(i == 2){

                rua = dado;
            }
            else if(i == 4){

                bairro = dado;

            }
            else if( i == 5){

                cidade = dado;

            }
            else if(i == 6){

                uf = dado;

            }
        }
        i++;
    }

    return rua + ", " + bairro + ". " + cidade + ", " + uf;

}

int main()
{
    string cep,url,cmd;
    cout << "Digite o seu Cep:" << endl;
    getline(cin,cep);

    url = "https://viacep.com.br/ws/" + cep  + "/json/";

    //cout << url;

    cmd = "wget -qO cep.txt " + url;
    //cout << cmd;

    system(cmd.c_str());

    cout << parseCep();

    return 0;
}
