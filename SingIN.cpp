#include"SingIN.h"
#include<iostream>
#include<string>
#include<fstream>

bool Sign_in(string str,string key)
{
    string str1;
    string x;
    ifstream in;
    in.open("logIN.txt");
    while(!in.eof()){
        in>>str1;
        if(str==str1){
            in>>x;
            if(x==key)
                return true;
            break;
            }
    }
    return false;
}
