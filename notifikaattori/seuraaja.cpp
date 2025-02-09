#include "seuraaja.h"
#include "notifikaattori.h"


Seuraaja::Seuraaja(string n) {
    nimi = n;
     cout<<"Luodaan seuraaja "<<nimi<<endl;
}

string Seuraaja::getNimi()
{
    return nimi;

}

void Seuraaja::paivitys(string vastaanottaja)
{
    cout << "Seuraaja " << getNimi() <<"vastaanotti viestin " << vastaanottaja << endl;
}
