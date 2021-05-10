----------------------------------------------
Find the longest substring which is palindrome
----------------------------------------------

For Example: 
------------
Input: Given string :"forgeeksskeegfor", 
Output: "geeksskeeg".

Input: Given string :"Geeks", 
Output: "ee".


// A O(n^2) time and O(1) space program to
// find the longest palindromic substring
#include <bits/stdc++.h>
using namespace std;

// A utility function to print
// a substring str[low..high]
void printSubStr(char* str, int low, int high)
{
    cout<<"Longest palindrome :";
	for (int i = low; i <= high; ++i)
		cout << str[i];
}

// This function prints the
// longest palindrome substring (LPS)
// of str[]. It also returns the
// length of the longest palindrome
int longestPalSubstr(char* str)
{
	int maxLength=1;
	int len=strlen(str);
	int start=0;
	int low,high;
	
	for(int i=1;i<len;i++)
	{
	    
	    // Find the longest even length palindrome
        // with center points as i-1 and i.
	    low=i-1;
	    high=i;
	   
	    while(low>=0 && high<len && str[low]==str[high])
	    {
	        
	    if(high-low+1 > maxLength)
	    {
	        start= low;
	        maxLength=high-low+1;
	    } 
	    low--;
	    high++;
	    }
	    
	    // Find the longest odd length
        // palindrome with center point as i
	    low=i-1;
	    high=i+1;
	    
	    while(low>=0 && high<len && str[low]==str[high])
	    {
	        
	    if(high-low+1 > maxLength)
	    {
	        start= low;
	        maxLength=high-low+1;
	    } 
	    --low;
	    ++high;
	    }
	    
	}
	
	
	
	printSubStr(str,start,start+maxLength-1);
	
	
	return maxLength;
}

// Driver program to test above functions
int main()
{
	char str[] = "forgeeksskeegfor";
	cout<<"\nLength  ::"
	<< longestPalSubstr(str)
	<<endl;
	return 0;
}

// This is code is contributed by rathbhupendra
