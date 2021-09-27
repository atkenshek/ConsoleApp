#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
using namespace std;

void fillVector(vector<Person>&);
void printVector(const vector<Person>&);
int main() {
    vector <Person> persons;
    fillVector(persons);
    printVector(persons);
    return 0;
}
void fillVector(vector<Person>& newPerson){
    string name;
    int age;
    int luck;
    cout << "Enter number of persons: " << endl;
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cout<< "Person name: ";
        cin >> name;
        cout<< "Person age: ";
        cin >> age;
        Person newPersons(name, age, luck);
        newPerson.push_back(newPersons);
        cout << endl;
    }
    cout<< endl;
};
void printVector(const vector<Person>& newPerson){
    for (int i = 0; i < newPerson.size(); ++i) {
        cout << "Person name: " + newPerson[i].getName() << endl;
        cout << "Person age: " + newPerson[i].getAge() << endl;
        cout << "Person luck: " + newPerson[i].getLuck() << endl;
        cout << endl;
    }
};
