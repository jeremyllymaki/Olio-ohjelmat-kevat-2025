#include "italianchef.h"
#include <iostream>


ItalianChef::ItalianChef(std::string name) : Chef(name)
{
    std::cout<<"ItalianChef "<<chefName<<"konstruktori"<<std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout<<"ItalianChef "<<chefName<<"destruktori"<<std::endl;
}

int ItalianChef::makePizza(int flourAmount, int waterAmount) {
    int pizzas = std::min(flourAmount / 5, waterAmount / 5);
    std::cout << "ItalianChef" << chefName << " with "<< flourAmount << "flour and " << waterAmount<< "water can make "<< pizzas<< "pizzas "<<std::endl;
    return pizzas;
}


bool ItalianChef::askSecret(std::string givenPassword, int flourAmount, int waterAmount)
{
    if (givenPassword == password) {
        std::cout<<"Password ok! "<<std::endl;
        makePizza(flourAmount, waterAmount);
        return true;
    }
    else {
        std::cout<<"incorrect password! "<<std::endl;
        return false;
    }
}
