#include"SignUP.h"
#include<iostream>
#include<string>
#include<fstream>

bool Sign_up(string fname,string lname,string email,string Uname,string key){
    ofstream out;
    out.open("logIN.txt",ios::app);
    if(out.is_open()){
        out<<Uname<<" "<<key<<" "<<fname<<" "<<lname<<" "<<email<<endl;
        return true;
    }
    return false;

}


