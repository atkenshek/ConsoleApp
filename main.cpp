#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <time.h>
#include "Person.h"
using namespace std;

void fillVector(vector<Person>&);
void printVector(const vector<Person>&);
Person findLuckiest(const vector<Person>& newPerson);
void changeLuck(Person& person1, Person& person2);

void fillVector(vector<Person>& newPerson){
    string name;
    int age;
    int luck;
    cout << "Enter number of persons: " << endl;
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        srand (time(NULL));

        cout<< "Person name: ";
        cin >> name;
        cout<< "Person age: ";
        cin >> age;
        luck = rand() % 10 + 1;
        Person newPersons(name, age, luck);
        newPerson.push_back(newPersons);
        cout << endl;
    }
    cout<< endl;
};
void printVector(const vector<Person>& newPerson){
    for (int i = 0; i < newPerson.size(); ++i) {
        cout << "Person name: " + newPerson.at(i).getName() << endl;
        cout << "Person age: " + newPerson.at(i).getAge() << endl;
        cout << "Person luck: " + newPerson.at(i).getLuck() << endl;
        cout << endl;
    }
};
Person findLuckiest(const vector<Person>& newPerson){
    int max = 0;
    Person tempPerson = Person();
    for (int i=0; i<5; i++){
        if (newPerson.at(i).getLuck()>max){
            max=newPerson.at(i).getLuck();
            tempPerson=newPerson.at(i);
        }
    }
    return tempPerson;
}
void changeLuck(Person& person1, Person& person2){
    int tempLuck = person1.getLuck();

    person1.setLuck(person2.getLuck());
    person2.setLuck(tempLuck);
}
int main() {
    vector <Person> persons;
    fillVector(persons);
    printVector(persons);
    Person luckiest = findLuckiest(persons);
    cout<<"The luckiest one is: "<<luckiest.getName()<<". With value: "<<luckiest.getLuck();

    changeLuck(persons.at(0), persons.at(1));
    cout<<"\nAfter swapping Luck values"<<endl;
    printVector(persons);
    return 0;
}

