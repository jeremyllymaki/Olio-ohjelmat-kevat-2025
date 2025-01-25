#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"

using namespace std;


class ItalianChef : public Chef
{
public:
    ItalianChef(std::string name);
    ~ItalianChef();
   bool askSecret(std::string givenPassword, int flourAmount, int waterAmount);


   private:
    int flour = 0;
    int water = 0;
    int makePizza(int flourAmount, int waterAmount);
    std::string password = "pizza";






};

#endif // ITALIANCHEF_H
