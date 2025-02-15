#include "student.h"
#include <iostream>


Student::Student(string nimi, int luku)
{
    Name = nimi;
    Age = luku;
}

void Student::setAge(int luku)
{
    Age = luku;
}

void Student::setName(string nimi)
{
    Name = nimi;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;
}

void Student::printStudentInfo()
{
    cout<<"Opiskelijan nimi " << Name << endl;
    cout<<"Opiskelijan ikä " << Age << endl;
}
