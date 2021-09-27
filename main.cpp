#include <iostream>
#include <string>
#include <vector>
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
}
void printVector(const vector<Person>& newPerson){
    for (int i = 0; i < newPerson.size(); ++i) {
        cout << "Person name: " + newPerson.at(i).getName() << endl;
        cout << "Person age: " + newPerson.at(i).getAge() << endl;
        cout << "Person luck: " + newPerson.at(i).getLuck() << endl;
        cout << endl;
    }
}
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
    vector<Person> persons;
    fillVector(persons);
    printVector(persons);
    Person luckiest = findLuckiest(persons);
    cout << "The luckiest one is: " << luckiest.getName();

    changeLuck(persons.at(0), persons.at(1));
    cout << "\nAfter swapping Luck values" << endl;
    printVector(persons);
    return 0;


//    vector<Person> newPerson;                            //cache-friendly
//    list<Person> newPerson;                              //cache-unfriendly

//    long sum = 0;                                           //example of cache-unfriendly code
//    long arr[INT_MAX][INT_MAX];
//    for (int j = 0; j<INT_MAX;j++){
//        for (int i=0; i<INT_MAX; i++){
//            sum+=arr[i][j];
//        }
//    }

//                                                  using the extern keyword by С language
//                 This comes in useful when you have global variables.
// if we have header
// #ifndef HEADER_H
// #define HEADER_H
//                                      any source file that includes this will be able to use "global_x"
//  extern int global_x;
//  void print_global_x();

//#endif
//class1
//#include "header.h"

// since global_x still needs to be defined somewhere,
// we define it (for example) in this source file
//    int global_x;

//    int main()
//    {
    //set global_x here:
//        global_x = 5;

//        print_global_x();
//    }

//#include <iostream>
//#include "header.h"

//    void print_global_x()
//    {
        //print global_x here:
//        std::cout << global_x << std::endl;
//    }





}