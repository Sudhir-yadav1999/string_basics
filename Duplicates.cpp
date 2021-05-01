

Print all the duplicates in the input string

Write an efficient program to print all the duplicates and their counts in the input string 

Method 1: Using hashing

Algorithm: Let input string be “geeksforgeeks” .
1: Construct character count array from the input string.
  
count[‘e’] = 4 
count[‘g’] = 2 
count[‘k’] = 2 

2: Print all the indexes from the constructed array which have values greater than 1.
----
Code
----
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
   map<char,int> m1;
   
   for(int i=0;i<str.length();i++)
   {
       m1[str[i]]++;
   }
   
   for(auto itr : m1)
   {
       if(itr.second>1)
       {
           cout<<itr.first<<" , Count = "<<itr.second<<endl;
       }
   }
   
}
/* Driver code*/
int main()
{
    string str = "geeksforgeeks";
    printDups(str);
    return 0;
}


