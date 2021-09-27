//
// Created by Professional on 27.09.2021.
//

#include "Person.h"



Person::Person() {

}
Person::Person(string name, int age, int luck) {
    newName = name;
    newAge = age;
    newLuck = luck;

}
Person::~Person() {

}

const string &Person::getName() const {
    return newName;
}

void Person::setName(string name) {
    Person::newName = name;
}

int Person::getAge() const {
    return newAge;
}

void Person::setAge(int age) {
    Person::newAge = age;
}

int Person::getLuck() const {
    return newLuck;
}

void Person::setLuck(int luck) {
    newLuck = luck;
}
