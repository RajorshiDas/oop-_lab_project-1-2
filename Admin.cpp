#include "admin.h"
#include<iostream>
#include<fstream>
#include"Questions.h"
using namespace std;
admin::admin()
{

}
void admin::set_ques_num(int num)
{
   question_numbers=num;
}
int admin::get_ques_num()
{
    return question_numbers;
}
//use of operator over loading
 admin admin ::operator+(const admin &other)
 {
     admin temp;
     temp.name=name+" "+other.name;
     temp.contact=contact+" & "+other.contact;
     temp.email=email+" & " +other.email;
     return temp;

 }

void admin :: set_admin(string a,string b,string c)
{
    name=a;
    contact=b;
    email=c;
}
 void admin::set_password()
 {
     password=12345678;
 }
 bool admin::conform_password()
 {
     int enter;

     cin>>enter;
     if(enter==password)
     {
         cout<<"Welcome Admin"<<endl;
         return true;
     }
     else
     {
         cout<<"Wrong password !"<<endl;
         return false;
     }
 }
 void admin::make_Question_paper()
 {
     cout<<"Enter how namy Questions?:"<<endl;
     int n;
     cin>>n;
     set_ques_num(n);



     for(int i=0;i<get_ques_num();i++)
     {
        set_value();
     }

 }
 //use of virtual function to override
void admin::display()
{
    cout<<"Name :"<<name<<endl;
    cout<<"Contact :"<<contact<<endl;
    cout<<"Email :"<<email<<endl;
}
