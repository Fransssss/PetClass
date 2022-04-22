// Title: Basic class with pet name
// Purpose: create class with constructor for name,age, and type of pets
// Enjoy the process - Practice makes improvement
// Author
#include <iostream>
#include "Pets.h"

int main()
{
    Pets noPet;
    noPet.print();

    Pets turtle("Roodey");
    turtle.print();

    Pets dog("Lucy", 4);
    dog.print();

    Pets cat("Meyer", 2, "Sphynx Cat");
    cat.print();

    Pets anotherDog("Lemsky",6, "German Shepherd");
    anotherDog.print();

    return 0;
}
