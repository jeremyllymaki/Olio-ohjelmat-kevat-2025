#include "luottotili.h"

Luottotili::Luottotili(string name,double lr) : Pankkitili(name) {
    luottoraja = lr;
    omistaja = name;
    //cout<<"luotiin luottotili "<<omistaja<<":lle"<<endl;
}

bool Luottotili::deposit(double maksu)
{
    double valisaldo = saldo + maksu;
    if (valisaldo <= 0) {
        cout<<"Luottotilille talletettiin "<<maksu<<" euroa"<<endl;
        saldo = valisaldo;
        return true;
    }
    else {
        cout<<"Luoton maksu ei onnistunut!"<<endl;
        return false;
    }


}

bool Luottotili::withdraw(double Lnosto)
{
    double valisaldo = saldo - Lnosto;
    if (valisaldo <= luottoraja) {
        cout<<"Luottotili: nosto "<<Lnosto<<", luottoa jaljella "<<valisaldo<<endl;
        saldo = valisaldo;
        return true;
    }
    else {
        cout<<"Luottotililta nostaminen ei onnistunut!"<<endl;
        return false;
    }

}
