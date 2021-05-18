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
------------------
Efficient solution
------------------
We can achieve O(n) time complexity under the assumption that alphabet size is fixed which is typically true as we have maximum 256 possible characters in ASCII. The idea is to use two count arrays:

1) The first count array store frequencies of characters in pattern. 
2) The second count array stores frequencies of characters in current window of text.
The important thing to note is, time complexity to compare two count arrays is O(1) as the number of elements in them are fixed (independent of pattern and text sizes). Following are steps of this algorithm. 
1) Store counts of frequencies of pattern in first count array countP[]. Also store counts of frequencies of characters in first window of text in array countTW[].
2) Now run a loop from i = M to N-1. Do following in loop. 
…..a) If the two count arrays are identical, we found an occurrence. 
…..b) Increment count of current character of text in countTW[] 
…..c) Decrement count of first character in previous window in countWT[]
3) The last window is not checked by above loop, so explicitly check it





#include<iostream>
#include<cstring>
#define MAX 256
using namespace std;

// This function returns true if contents of arr1[] and arr2[]
// are same, otherwise false.
bool compare(char arr1[], char arr2[])
{
	for (int i=0; i<MAX; i++)
		if (arr1[i] != arr2[i])
			return false;
	return true;
}

// This function search for all permutations of pat[] in txt[]
bool search(char *pat, char *txt)
{
	int M = strlen(pat), N = strlen(txt);

	// countP[]: Store count of all characters of pattern
	// countTW[]: Store count of current window of text
	char countP[MAX] = {0}, countTW[MAX] = {0};
	for (int i = 0; i < M; i++)
	{
		(countP[pat[i]])++;
		(countTW[txt[i]])++;
	}

	// Traverse through remaining characters of pattern
	for (int i = M; i < N; i++)
	{
		// Compare counts of current window of text with
		// counts of pattern[]
		if (compare(countP, countTW))
		return true;

		// Add current character to current window
		(countTW[txt[i]])++;

		// Remove the first character of previous window
		countTW[txt[i-M]]--;
	}

	// Check for the last window in text
	if (compare(countP, countTW))
		return true;
		return false;
}

/* Driver program to test above function */
int main()
{
	char txt[] = "BACDGABCDA";
	char pat[] = "ABCD";
	if (search(pat, txt))
	cout << "Yes";
	else
	cout << "No";
	return 0;
}

