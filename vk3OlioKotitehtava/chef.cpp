#include "chef.h"
#include <iostream>





Chef::Chef(std::string name) : chefName(name) {
    cout<<"Chef "<<chefName<<"konstruktori"<<std::endl;
}

Chef::~Chef() {
    std::cout<<"Chef "<<chefName<<"destruktori"<<std::endl;
}
std::string Chef::getName() const
{
    return chefName;
}

int Chef::makeSalad(int ingredients)
{
    int portions = ingredients / 5;
    std::cout<<"Chef "<<chefName<< "with "<<ingredients<<"items can made salad "<< portions<<" portions" << std::endl;
    return portions;
}

int Chef::makeSoup(int ingredients)
{
    int portions = ingredients / 3;
    std::cout<<"Chef "<<chefName<< "with "<<ingredients<<"items can make soup " << portions << "portions"<<std::endl;
    return portions;
}
