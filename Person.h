
#ifndef QUIZPROJECT_PERSON_H
#define QUIZPROJECT_PERSON_H

#endif //QUIZPROJECT_PERSON_H
#include <string>
#include <iostream>
using namespace std;
class Person {
public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
