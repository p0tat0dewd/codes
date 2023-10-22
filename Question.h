

#ifndef QUIZPROJECT_QUESTION_H
#define QUIZPROJECT_QUESTION_H

#endif //QUIZPROJECT_QUESTION_H
#include <vector>
using namespace std;
class Question {
public:
    string question;
    vector<string> choices;
    int correctAnswerIndex;
    Question(string question, vector<string> choices, int correctAnswerIndex) {
        this->question = question;
        this->choices = choices;
        this->correctAnswerIndex = correctAnswerIndex;
    }
};
