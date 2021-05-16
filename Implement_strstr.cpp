
Your task is to implement the function strstr. 
The function takes two strings as arguments (s,x) and  locates the occurrence of the string x in the string s. 
The function returns and integer denoting the first occurrence of the string x in s (0 based indexing).

Note: You are not allowed to use inbuilt function.
Example 1:

Input:
s = GeeksForGeeks, x = Fr
Output: -1
Explanation: Fr is not present in the
string GeeksForGeeks as substring.
 

Example 2:

Input:
s = GeeksForGeeks, x = For
Output: 5
Explanation: For is present as substring
in GeeksForGeeks from index 5 (0 based
indexing).

#include <bits/stdc++.h>
using namespace std;

// Returns true if s1 is substring of s2
int isSubstring(string s1, string s2)
{
	int M = s1.length();
	int N = s2.length();

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		int j;

		/* For current index i, check for
pattern match */
		for (j = 0; j < M; j++)
			if (s2[i + j] != s1[j])
				break;

		if (j == M)
			return i;
	}

	return -1;
}

/* Driver code */
int main()
{
	string s1 = "for";
	string s2 = "geeksforgeeks";
	int res = isSubstring(s1, s2);
	if (res == -1)
		cout << "Not present";
	else
		cout << "Present at index " << res;
	return 0;
}
time complexity -0(n2)

-------------------------
another efficient approach
--------------------------
int strstr(string s, string x)
{
     int i=0;
     int counter=0;
     int start=0;
     int len_s=s.length();
     int len_x=x.length();
     for(i=0;i<s.length();i++)
     {
         if(counter==len_x)
         {
             break;
         }
         
         if(s[i] == x[counter])
         {
            counter++;
         }
         else
         {
         
           counter=0;
           
         }
         
     }
     return counter<len_x?-1:i-counter;
  -------------------------------------
  time complexity - o(n)
