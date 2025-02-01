#include <iostream>


#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas tili("Jorma",1000);
    tili.showSaldo();
    cout<<endl;

    tili.talletus(250);
    tili.luotonNosto(150);
    tili.showSaldo();
    cout<<endl;

    Asiakas tili2("Bertta",1000);
    tili2.showSaldo();
    cout<<endl;

    tili.tiliSiirto(50, tili2);
    cout<<tili.getNimi()<<":"<<endl;
    tili.showSaldo();
    cout<<tili2.getNimi()<<":"<<endl;
    tili2.showSaldo();
    return 0;
}



