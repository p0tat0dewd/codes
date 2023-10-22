

#ifndef QUIZPROJECT_STUDENT_H
#define QUIZPROJECT_STUDENT_H

#endif //QUIZPROJECT_STUDENT_H
#include "Person.h"
class Student : public Person {
public:
    int studentId;
    string major;
    Student(string name, int age, int studentId, string major) : Person(name, age) {
        this->studentId = studentId;
        this->major = major;
    }
    void display() override {
        Person::display();
        cout << "Student ID: " << studentId << endl;
        cout << "Major: " << major << endl;
    }
};
