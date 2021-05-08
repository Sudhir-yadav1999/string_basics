----------------------------------
Count the no of vowels in a string 
----------------------------------
#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main(){

 string s = "Hello World!";
 map<char,int> mp;
 for(int i=0;i<s.size();i++)
 {
     mp[s[i]]++;
 }

map<char,int>:: iterator itr;

for(itr=mp.begin();itr!=mp.end();itr++)
{
   cout<<itr->first<<"   "<<itr->second<<endl;
  
}

int vowels=mp['a']+mp['e']+mp['i']+mp['o']+mp['u'];
cout<<vowels<<"value";
return 0;
}




