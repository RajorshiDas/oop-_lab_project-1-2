#ifndef ADMIN_H
#define ADMIN_H
#include<string>
#include"Questions.h"

class admin :public Questions
{
    public:
        admin();
        bool conform_password();
        void make_Question_paper();
        void set_password();
        //use of virtual function
        void display();
         void set_admin(string ,string ,string );
         void  set_ques_num(int);
         int get_ques_num();
         //use of operator overloading
         admin operator+(const admin &other);
    protected:

    private:
      string name;
      string contact;
      string email;
      int password;
      int question_numbers;

};

#endif // ADMIN_H
