Check if the given string is shuffled substring of another string

Given strings str1 and str2.
The task is to find that if str1 is substring in shuffled form of str2 or not. 
Print “YES” if str1 is substring in shuffled form of str2 else print “NO”. 

Example 

Input: str1 = “onetwofour”, str2 = “hellofourtwooneworld” 
Output: YES 
Explanation: str1 is substring in shuffled form of str2 as 
str2 = “hello” + “fourtwoone” + “world” 
str2 = “hello” + str1 + “world”, where str1 = “fourtwoone” (shuffled form) 
Hence str1 is a substring of str2 in shuffled form.

Input: str1 = “roseyellow”, str2 = “yellow” 
Output: NO 
Explanation: As length of str1 is greater than str2. Hence str1 is not a substring of str2.



#include <bits/stdc++.h>

using namespace std;

bool isShuffledSubstring(string A, string B)
{
    int len_a=A.length(); //12 geekforgeeks";
    int len_b=B.length(); //16 ekegorfkeegsgeek";
    

    if(len_a>len_b)
    {
        
    return false;
    
    }
    else
    {
    
    sort(A.begin(),A.end());
    
    for(int i=0;i<len_b;i++)
    {
        
        if(i+len_a-1>=len_b)
        {
            return false;
        }
        
        string str="";
        
        for(int j=0;j<len_a;j++)
        {
         str.push_back(B[i+j]);    
        }
        
        sort(str.begin(),str.end());//eeeefggkkors
        
        if(str==A)
        {return true;}
    }
    
    
    }
}


int main()
{

	string str1 = "geekforgeeks";
	string str2 = "ekegorfkeegsgeek";

	
	bool a = isShuffledSubstring(str1, str2);

	// If str1 is substring of str2
	// print "YES" else print "NO"
	if (a)
		cout << "YES";
	else
		cout << "NO";
	cout << endl;
	return 0;
}
