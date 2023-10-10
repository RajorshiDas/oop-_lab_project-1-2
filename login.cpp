#include "login.h"
#include"SignUP.h"
#include"SingIN.h"
#include"Questions.h"
#include<string>
#include<fstream>
login::login(){ }
void login::register_id()
{
   cout<<"Enter First Name:";
    cin>>first_name;
    cout<<"Enter Last Name:";
    cin>>last_name;
    cout<<"Enter Email:";
    cin >>email;
    cout<<"Create a user name:";
    cin>>user_name;
    cout<<"Create a password:";
    cin>>password;
    if(Sign_up(first_name,last_name,email,user_name,password))
    {
        cout<<"Your registeration is complete !"<<endl;
    }
    else
    {
        cout<<"Failed to register !"<<endl;
    }

}
void login::login_id()
{
    string name_sample;
    string pass_sample;
    cout<<"Enter User Name:";
    cin>>name_sample;
    cout<<"Enter User Password:";
    cin>>pass_sample;
    if(Sign_in(name_sample,pass_sample))
    {
        cout<<"Succesfully logged in !"<<endl;
    }
    else
    {
        cout<<"Failed to log in !"<<endl;
    }
}


void login::display()
{
    cout<<"Name: "<<first_name<<" "<<last_name<<endl;
    cout<<"User Name: "<<user_name<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Score: "<<score<<endl;
    if(score==5)
    {
        cout<<"Status: Selected"<<endl;
    }
    else
    {
        cout<<"Status: Not Selected"<<endl;
    }

}
void login::increase_score()
{
    score++;
}
int login::getscore()
{
    return score;
}
//void login::start
