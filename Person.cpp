//
// Created by Professional on 27.09.2021.
//

#include "Person.h"


Person::Person(const string &name, int age, int luck) : name(name), age(age), luck(luck) {} //default constructor

Person::Person(const string &name) : Person(name, 0, 0) {}

Person::Person() : Person("Default", 0, 0) {}

const string &Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

int Person::getLuck() const {
    return luck;
}
void Person::setName(const string &name) {
    Person::name = name;
}

void Person::setAge(int age) {
    Person::age = age;
}

void Person::setLuck(int luck) {
    Person::luck = luck;
}
