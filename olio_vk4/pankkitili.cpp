#include "pankkitili.h"

Pankkitili::Pankkitili(string name) {
    omistaja = name;
    //cout<<"luotiin pankkitili "<<omistaja<<":lle"<<endl;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double talletus)
{

    double valisaldo = saldo + talletus;
    if (valisaldo > 0) {
        cout<<"Pankkitilille talletettiin "<<talletus<<" euroa"<<endl;
        saldo = valisaldo;
        return true;
    }
    else {
        cout<<"Talletus ei onnistunut!"<<endl;
        return false;
    }

}

bool Pankkitili::withdraw(double nosto)
{

    double valisaldo = saldo - nosto;
    if (valisaldo >= 0) {
        cout<<"Tililta nostettiin "<<nosto<<" euroa"<<endl;
        saldo = valisaldo;
        return true;
    }
    else {
        cout<<"Nostaminen ei onnistunut!"<<endl;
        return false;
    }
}
