

#ifndef QUIZPROJECT_INSTRUCTOR_H
#define QUIZPROJECT_INSTRUCTOR_H

#endif //QUIZPROJECT_INSTRUCTOR_H
#include "Person.h"
class Instructor : public Person {
public:
    int instructorId;
    string department;
    Instructor(string name, int age, int instructorId, string department) : Person(name, age) {
        this->instructorId = instructorId;
        this->department = department;
    }
    void display() override {
        Person::display();
        cout << "Instructor ID: " << instructorId << endl;
        cout << "Department: " << department << endl;
    }
};
