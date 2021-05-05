-----------------------------------------------------
Return maximum occurring character in an input string
-----------------------------------------------------
Input string = “test”
1: Construct character count array from the input string.
  count['e'] = 1
  count['s'] = 1
  count['t'] = 2

2: Return the index of maximum value in count array (returns ‘t’).


#include <iostream>
#include <string>
#include<bits/stdc++.h>
#define NO_Of_CHARS 256
using namespace std;

int main(){

string str="Hello,have a good day";

int *arr=(int *)calloc(NO_Of_CHARS,sizeof(int));

int max=0;
char result;
for(int i=0;i<str.length();i++)
{
    arr[str[i]]++; //map type define //
    if(max<arr[str[i]])
    {
        max=arr[str[i]];
        result=str[i];
    }
    
}
cout<<"The count of var is "<<max<<"and the variable is "<<result<<endl;
return 0;
}


