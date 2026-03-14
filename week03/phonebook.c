#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct person createPerson(string name, string number);

int main(void)
{

    // Soulves this with a hasmap
    // OR sructs -> like a class with  atributes
    // Stores variables

    // Same thing as initializing an object
    person people[3];
    people[0].name = "David";
    people[0].number = "+55 (31)99923-1509";
}

// Typedef i declare explicity that is a alias of a type. 

typedef struct person
{
    string number;
    string name;

} person;

person createPerson(string name, string number)
{
    person p;

    strcpy(p.name, name);
    strcpy(p.number, number);

    return p;
}
