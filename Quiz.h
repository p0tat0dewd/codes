

#ifndef QUIZPROJECT_QUIZ_H
#define QUIZPROJECT_QUIZ_H

#endif //QUIZPROJECT_QUIZ_H
// Quiz.h
#include <vector>
using namespace std;
class Quiz {
public:
    string quizName;
    vector<Question> questions;
    Quiz(string quizName, vector<Question> questions) {
        this->quizName = quizName;
        this->questions = questions;
    }
};
