#include "notifikaattori.h"
#include "seuraaja.h"
using namespace std;





Notifikaattori::Notifikaattori()
{
    cout << "luodaan notifikaattori" << endl;

}


void Notifikaattori::lisaa(Seuraaja *s)
{
    if (seuraajat == nullptr){
    seuraajat = s;
    cout << "notifikaattori lisaa seuraajan" << s->getNimi() << endl;
    return;
    }
    s->next = seuraajat;
    seuraajat = s;
    cout << "notifikaattori lisaa seuraajan" << s->getNimi() << endl;
}


void Notifikaattori::poista(Seuraaja* s)
{
    Seuraaja *ptr = seuraajat;

    if (ptr == nullptr)
    {
        cout<<"Ei poistettavia listalla"<<endl;
        return;
    }

    while (ptr->next != nullptr){
        if (ptr->next==s){
            ptr->next = ptr->next->next;
        }

        ptr = ptr->next;
        cout<<"Notifikaattori poisti seuraajan "<<s->getNimi()<<endl;
    }

}


void Notifikaattori::tulosta()
{
    Seuraaja *ptr = seuraajat;
    while (ptr->next != nullptr){

        cout<<"Seuraaja "<<ptr->getNimi()<<endl;
        ptr = ptr->next;

    }

    cout<<"Seuraaja "<<ptr->getNimi()<<endl;

}



void Notifikaattori::postita(string m)
{
    cout << "notifikaattori poistaa viestin " << m << endl;
    Seuraaja *ptr = seuraajat;
    while (ptr != nullptr) {
        ptr->paivitys(m);
        ptr = ptr->next;
    }
    ptr->paivitys(m);
}






