#include <string>
using namespace std;
#include "Question.h"
#include "QuizTaker.h"
int main() {
    // Create a quiz
    vector<Question> questions;
    questions.push_back(Question("What is the capital of France?", {"Paris", "London", "Rome"}, 0));
    questions.push_back(Question("Who wrote the novel 'The Lord of the Rings'?", {"J.R.R. Tolkien", "George R.R. Martin", "Stephen King"}, 0));
    questions.push_back(Question("What is the scientific name of the common house cat?", {"Felis catus", "Canis familiaris", "Equus caballus"}, 0));
    Quiz quiz("General Knowledge Quiz", questions);
    // Create a quiz taker
    QuizTaker quizTaker("John Doe", 20, quiz);
    // Take the quiz
    quizTaker.takeQuiz();
    // Display the score
    quizTaker.displayScore();
    return 0;
}
