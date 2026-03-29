#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 

/*Entity of the data base*/

struct person{ 
    string number; 
    string name; 
    int id; 
};

/*Function that creates an entity*/

struct person createPerson(int id, string name, string number){ 

    struct person p; 
    p.id = id; 
    p.name = name; 
    p.number = number; 

    return p; 
}

/*Function that makes the search
    (Binary search)*/
/*This function returns the number of someone in the array by the name
    Array is ordenated by id*/

string search(struct person people[],int length, int goal_id){ 
    int bigger = length -1; 
    int less = 0; 

    while(less <= bigger) { 
        
        int middle = (bigger + less)/2; 
        
        if(people[middle].name = name_goal){ 
            return people[middle];
        }
        else if(people[middle].id >  )
    }
    // THINK IN MANNERS OF FIND WITH BINARY SEARCH A NAME, JUST WITH THE STRING NAME GOAL.
}


