// class pets definition
// Fransiskus Agapa

#include "Pets.h"

using std::cout;
using std::endl;


// default constructor
// set each data member to default value
Pets::Pets()
{
    _name = "noName";
    _age = -1;
    _type = "noType";
}

// constructor with one parameter name sets its value to data member
Pets::Pets(string name)
{
    _name = name;
    _age = -1;
    _type = "noType";
}

// constructor with two parameters name and age set its value to data members
Pets::Pets(string name, int age)
{
    _name = name;
    _age = age;
    _type = "noType";
}

// constructor with three parameters name, age, and type set its value to data members
Pets::Pets(string name, int age, string type)
{
    _name = name;
    _age = age;
    _type = type;
}

// getName is class member return name
string Pets::GetName() const
{
    return _name;
}

// getAge, class member return age
int Pets::GetAge() const
{
    return _age;
}

// getType, class member return typee
string Pets::GetType() const
{
    return _type;
}

// print all data
void Pets::print()
{
    cout << endl << _name << ", " << _age << ", " << _type << endl;
}