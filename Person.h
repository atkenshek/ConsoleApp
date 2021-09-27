//
// Created by Professional on 27.09.2021.
//

#ifndef ASS2_PERSON_H
#define ASS2_PERSON_H

#include <iostream>
#include <string>
#include "time.h"
#include <stdlib.h>

using namespace std;
class Person {
public:
    //Default constructor
    Person();
    //Overload Constructor
    Person(string name, int age, int luck);
    //Destructor
    ~Person();

    const string &getName() const;

    void setName(string name);

    int getAge() const;

    void setAge(int age);

    int getLuck() const;

    void setLuck(int luck);


private:
    string newName;
    int newAge;
    int newLuck;

    /* initialize random seed: */


    /* generate secret number between 1 and 10: */



};


#endif //ASS2_PERSON_H
