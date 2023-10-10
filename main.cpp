#include <iostream>
#include<bits/stdc++.h>
#include"Questions.h"
#include"SignUP.h"
#include"SingIN.h"
#include"login.h"
#include<fstream>
#include<string>
#include"Admin.h"
using namespace std;

int main()
{


    int option;
    char p;
    char p1;

    do
    {
        login u;
        admin a;


        cout<<"                      Welcome To Online Quiz Game ! Come and Win !"<<endl;
        cout<<"                     -----------------------------------------------"<<endl;
        cout<<"1.Participate Quiz\t\t\t\t\t2.Question Maker Login\t\t\t\t\t3.Exit"<<endl<<endl;

        cin>>option;

        switch(option)
        {
        case 1:
        {

            do
            {
                cout<<"1.Register\t\t2.Login\t\t3.See Details\t\t4.Homapage"<<endl;
                int option2;
                cin>>option2;
                switch(option2)
                {
                case 1:
                {


                    u.register_id();


                    break   ;
                }
                case 2:
                {
                    u.login_id();
                    cout<<"Take Part in Quiz?[Y/N]"<<endl;
                    char enter;
                    cin.ignore();
                    cin>>enter;

                    if(enter=='Y')
                    {
                        for(int i = 0; i<5; i++)


                        {
                            u.read_questions(i+1);
                            u.read_options(i+1);
                            if(u.match_answer(i+1))
                            {
                                u.increase_score();
                            }
                        }
                        cout<<"Your score is :"<<endl;


                        cout<<u.getscore()<<endl;



                    }

                    break;

                }
                case 3:
                {
                    u.display();
                    break;

                }
                case 4:
                {

                    break;

                }
                }

                cout<<"do you want to go back [Y/N]?"<<endl;
                cin>>p1;
            }
            while(p1=='Y');
            break;
        }
        case 2:
        {


            cout<<"Enter The password to enter the question panel:"<<endl;
            a.set_password();
            if( a.conform_password())
            {
                a.make_Question_paper();
                cout<<"Add your informantion:"<<endl;
                string name;
                string contact_number;
                string email;
                fflush(stdin);
                cout<<"Enter your name:"<<endl;
                cin>>name;
                cout<<"Enter your contact number:"<<endl;
                cin>>contact_number;
                cout<<"Enter your email:"<<endl;
                cin>>email;
                a.set_admin(name,contact_number,email);

            }
            else
            {
                cout<<"sorry wrong password"<<endl;
            }

            break;
        }
        case 3:
        {
            exit(0);
            break;
        }
        }


        cout<<"do you want to go back to the homepage[Y/N]?"<<endl;
        cin>>p;

    }
    while(p =='Y');


    return 0;
}
