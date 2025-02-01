#include "asiakas.h"

Asiakas::Asiakas(string nimi,double luottoraja): nimi(nimi), kayttotili(nimi), luottotili(nimi, luottoraja) {
    cout<<"luotiin pankkitili "<<nimi<<":lle"<<endl;
    cout<<"luotiin luottotili "<<nimi<<":lle, luottoraja "<<luottoraja<<endl;
    cout<<"Asiakkuus luotu "<<nimi<<":lle"<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{

    cout<<"Kayttotilin saldo: "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo: "<<luottotili.getBalance()<<endl;
}

bool Asiakas::talletus(double summa)
{
    return kayttotili.deposit(summa);
}

bool Asiakas::nosto(double summa)
{
    return kayttotili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa)
{
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa)
{
    return luottotili.withdraw(summa);
}

bool Asiakas::tiliSiirto(double summa, Asiakas &toinenAsiakas)
{
    if (summa > 0 && summa <= kayttotili.getBalance()) {
        cout<<"Pankkitili Jorma siirsi "<<summa<<toinenAsiakas.getNimi()<<":lle"<<endl;
        kayttotili.withdraw(summa);
        toinenAsiakas.kayttotili.deposit(summa);

        return true;
    }
    else {
        cout << "Siirto epaonnistui, ei riittävästi saldoa!" << endl;
        return false;
    }
}
