
Check whether two strings are anagram of each other

str1= triangle  //orignal string
str2=litergral  //randomly arranged
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool anagram(string str1,string str2)
{
	if(str1.length()!=str2.length())
	{
		return false;
	}
	
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	
	
	for(int i=0;i<str1.length();i++)
	{
		if(str1[i]!=str2[i])
		{
			return false;
			
		}
	}
	return true;
	
}



int main()
{
  string str1="this";
  string str2="isht";
	
	
	
	if(anagram(str1,str2))
	{
		cout<<"Yes they are anagram of each other ";
		
	}
	else
	{
		cout<<"No they are not the anagram of each other ";
		
	}
	return 0;
}

time complexity o(nlogn)
---------------------------------------------------------

---------------------------------------------------------
// C++ program to check if two strings
// are anagrams of each other
#include <bits/stdc++.h>
using namespace std;
 
bool isAnagram(string c, string d)
{
    if (c.size() != d.size())
        return false;
    int count = 0;
 
    // Take sum of all characters of first String
    for (int i = 0; i < c.size(); i++) {
        count += c[i];
    }
 
    // Subtract the Value of all the characters of second
    // String
    for (int i = 0; i < d.size(); i++) {
        count -= d[i];
    }
 
    // If Count = 0 then they are anagram
    // If count > 0 or count < 0 then they are not anagram
    return (count == 0);
}
 
// Driver code
int main()
{
    char str1[] = "geeksforgeeks";
    char str2[] = "forgeeksgeeks";
   
    // Function call
    if (isAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0;
}
