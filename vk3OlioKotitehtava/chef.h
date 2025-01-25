#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;


class Chef
{
protected:
    std::string chefName;

public:
    Chef(string);
   virtual ~Chef();
    std::string getName() const;
    int makeSalad(int ingredients);
    int makeSoup(int ingredients);


};

#endif // CHEF_H
