---------------------------------------------------------------------------------------------------------------------------------------------------------
|Write a program that takes your full name as input and displays the abbreviations of the first and middle names except the last name which is displayed|
---------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main(){

string str="Robert Brett Roser";

char a;

for(int i=0;i<str.rfind(' ');i++)
{
    for(char a=65;a<=90;a++)// ASII value of capital letter
    {
        if(str[i]==a)
        {
            cout<<str[i]<<".";
        }
    }
}

for(int i=str.rfind(' ')+1;i < str.size();i++)
{
    cout<<str[i];
}



return 0;
}




