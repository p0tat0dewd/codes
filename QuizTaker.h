
#ifndef QUIZPROJECT_QUIZTAKER_H
#define QUIZPROJECT_QUIZTAKER_H

#endif //QUIZPROJECT_QUIZTAKER_H
// QuizTaker.h
#include "Person.h"
#include "Quiz.h"
using namespace std;
class QuizTaker : public Person {
public:
    int score;
    Quiz quiz;
    QuizTaker(string name, int age, const Quiz& quiz) : Person(name, age), quiz(quiz) {
        this->score = 0;
        this->quiz = quiz;
    }
    void takeQuiz() {
        for (int i = 0; i < quiz.questions.size(); i++) {
            Question question = quiz.questions[i];
            cout << question.question << endl;
            for (int j = 0; j < question.choices.size(); j++) {
                cout << j + 1 << ". " << question.choices[j] << endl;
            }
            int answerIndex;
            cin >> answerIndex;
            if (answerIndex-1 == question.correctAnswerIndex) {
                score++;
            }
        }
    }
    void displayScore() {
        cout << "Score: " << score << "/" << quiz.questions.size() << endl;
    }
};
