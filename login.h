#ifndef LOGIN_H
#define LOGIN_H
#include<iostream>
#include<string>
#include<fstream>
#include"Questions.h"
using namespace std;

class login : public Questions
{

private:
    string first_name;
    string last_name;
    string user_name;
    string password;
    string email;
    int score=0;
public:
    login();

     void display();
    void login_id();
    void register_id();
    void increase_score();
    int getscore();

protected:


};

#endif // LOGIN_H
