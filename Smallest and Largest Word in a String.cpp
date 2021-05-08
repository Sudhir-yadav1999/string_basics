
-----------------------------------------------------
Program to find Smallest and Largest Word in a String
-----------------------------------------------------

#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

void calc(string str)
{
    int len=str.length();
    int pt=0;//traversal pointer 
    
    //min length
    int min_length=len;
    int min_length_start=0;
    //max length
    int max_length=0;
    int max_length_start=0;
    
    //track pointer
    int track=0;
    while(pt<=len)
    {
        if(pt<len && str[pt] !=' ')
        {
            pt++;
            
        }
        else
        {
            int current_length=pt-track;
            
            if(current_length<min_length)
            {
                
                min_length=current_length;
                min_length_start=track;
            }
            if(current_length>max_length)
            {
               max_length=current_length;
               max_length_start=track;
               
            }
            pt++;
            track=pt;
            
        }
        
    }

    string min_word=str.substr(min_length_start,min_length);
    string max_word=str.substr(max_length_start,max_length);
    
    
    cout<<min_word<<endl;
    cout<<max_word<<endl;
    
}


int main(){

 string s = "This is a umbrella";
 
 calc(s);
//output a and umbrella

return 0;
}




