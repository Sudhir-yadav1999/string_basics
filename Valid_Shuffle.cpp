------------------------------------------------------------------
Example: Check if a string is a valid shuffle of two other strings
------------------------------------------------------------------

#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;
bool comparee(std::string str1,std::string str2,std::string result)
{
    
    //check length of result match with sum of two string
    if(str1.length()+str2.length()!=result.length())
    {
        return false;
        
    }
    
    int i=0;
    int j=0;
    int k=0;
    
    while(k!=result.length())  //k untill k is not equal to result string length
    {
    //check first charater of string 1 matches with result first char
    if(i<str1.length() && str1[i]==result[k])
    {
        i++;
    }
     //check first charater of string 2 matches with result first char
    else if(j<str2.length() && str2[j]==result[k])
    {
        j++;
    }
    //else return false;
    else
    {
        return false;
    }
    
      k++;  
        
    }
    
    //if string length is not equal to str 1 and str2 return false else return true;
    
    if(i<str1.length() || j<str2.length())
    {
        return false;
    }
    return true;
    
}



int main()
{
    string str1="XY";
    string str2="12";
    string result[]={"1X2Y","Y12X","X12Y"};
    
    for(string it :result)
    {
        
    if(comparee(str1,str2,it))
    {
        cout<<"Resultant is a valid shuffle of str1,str2"<<endl;
    }
    else
    {
        cout<<"Resultant is not a valid shuffle of str1 and str 2"<<endl;
    }
    
    }
    
    
    return 0;
}
