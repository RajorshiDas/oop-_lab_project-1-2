#ifndef QUESTIONS_H
#define QUESTIONS_H
#include <string>
#include<iostream>
using namespace std;
class Questions
{
    private:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    string answer;

public:
    Questions();
    void set_value();
    void read_questions(int);
    void read_options(int);
    bool match_answer(int);
     void start_quiz();
     void virtual display()=0;
protected:


};

#endif // QUESTIONS_H
