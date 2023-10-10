#include "Questions.h"
#include"login.h"
#include<iostream>
#include<string>
#include<fstream>
#include"Admin.h"
Questions::Questions()
{

}
void Questions::set_value()
 {
        cout << "Enter the question: ";
fflush(stdin);
        getline(cin, question);

        cout << "Enter option 1: ";
        getline(cin, option1);

        cout << "Enter option 2: ";
        getline(cin, option2);

        cout << "Enter option 3: ";
        getline(cin, option3);

        cout << "Enter option 4: ";
        getline(cin, option4);
        fflush(stdin);

        cout << "Enter the answer: ";
        getline(cin, answer);


        ofstream outf("Question.txt", ios::app);
        outf << question << endl;
        outf.close();

        ofstream outtf("Options.txt", ios::app);
        outtf << "1 " << option1 << " 2 " << option2 << " 3 " << option3 << " 4 " << option4 << endl;
        outtf.close();

        ofstream outttf("Answer.txt", ios::app);
        outttf << answer << endl;
        outttf.close();
    }
    void Questions::read_questions(int l)
    {
       ifstream in("Question.txt");
        string line;
        fflush(stdin);

        int curr = 0;
        while (getline(in, line)) {
            curr++;
            if(curr == l){
                cout << line << endl;
                break;
            }
        }
        in.close();
    }
    void Questions::read_options(int l)
    {

        ifstream innf("Options.txt");

         string line;
        int curr = 0;
        while (getline(innf, line)) {
            curr++;
            if(curr == l){
                cout << line << endl;
                break;
            }
        }
        innf.close();
    }
    bool Questions::match_answer(int l)
    {

        //ifstream answerFile("Answer.txt");
        string correctAnswer;
        //int curr=0;
       //getline(answerFile, correctAnswer);

        cout << "Enter your answer: ";
        string userAnswer;

        getline(cin, userAnswer);

        ifstream answerFile("Answer.txt");

         string line;
        int curr = 0;
        while (getline(answerFile, line)) {
            //cout << "line = " << line << endl;
            curr++;
            if(curr == l){
                    correctAnswer = line;
                    break;
            }
        }

        if (userAnswer == correctAnswer) {
            cout << "Correct! Your answer matches the correct answer." << endl;
       return true;
        } else {
            cout << "Incorrect. Your answer does not match the correct answer." << endl;
   return false;
        }
        answerFile.close();
    }



