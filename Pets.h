// class Pets declaration
// Author: Fransiskus Agapa

#ifndef PETCLASS_PETS_H
#define PETCLASS_PETS_H

#include <iostream>
using std::string;

class Pets {
private:
    string _name;
    int _age;
    string _type;

public:
    Pets();
    Pets(string name);
    Pets(string name, int age);
    Pets(string name, int age, string type);
    string GetName() const;
    int GetAge() const;
    string GetType() const;
    void print();
};

#endif //PETCLASS_PETS_H
