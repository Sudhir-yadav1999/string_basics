Given a array of N strings, 
find the longest common prefix among all strings present in the array.

Example 1:

Input:
N = 4
arr[] = {geeksforgeeks, geeks, geek,
         geezer}
Output: gee
Explanation: "gee" is the longest common
prefix in all the given strings.
â€‹Example 2:

Input: 
N = 2
arr[] = {hello, world}
Output: -1
Explanation: There's no common prefix
in the given strings.
------------------------------------------

#include<bits/stdc++.h>
using namespace std;

// A Utility Function to find the common prefix between
// strings- str1 and str2
string commonPrefixUtil(string str1, string str2)
{
	string result;
	int n1 = str1.length(), n2 = str2.length();

	// Compare str1 and str2
	for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
	{
		if (str1[i] != str2[j])
			break;
		result.push_back(str1[i]);
	}

	return (result);
}

// A Function that returns the longest common prefix
// from the array of strings
string commonPrefix (string arr[], int n)
{
	string prefix = arr[0];

	for (int i=1; i<=n-1; i++)
		prefix = commonPrefixUtil(prefix, arr[i]);

	return (prefix);
}

// Driver program to test above function
int main()
{
	string arr[] = {"geeksforgeeks", "geeks",
					"geek", "geezer"};
	int n = sizeof(arr) / sizeof(arr[0]);

	string ans = commonPrefix(arr, n);

	if (ans.length())
		printf ("The longest common prefix is - %s",
				ans.c_str());
	else
		printf("There is no common prefix");

	return (0);
}


--------------------------------------------------------
Optimised approach
--------------------------------------------------------
// A C++ Program to find the longest common prefix
#include<bits/stdc++.h>
using namespace std;

// A Function to find the string having the minimum
// length and returns that length
int findMinLength(string arr[], int n)
{
	int min = arr[0].length();

	for (int i=1; i<n; i++)
		if (arr[i].length() < min)
			min = arr[i].length();

	return(min);
}

// A Function that returns the longest common prefix
// from the array of strings
string commonPrefix(string arr[], int n)
{
	int minlen = findMinLength(arr, n);

	string result; // Our resultant string
	char current; // The current character

	for (int i=0; i<minlen; i++)
	{
		// Current character (must be same
		// in all strings to be a part of
		// result)
		current = arr[0][i];

		for (int j=1 ; j<n; j++)
			if (arr[j][i] != current)
				return result;

		// Append to result
		result.push_back(current);
	}

	return (result);
}

// Driver program to test above function
int main()
{
	string arr[] = {"geeksforgeeks", "geeks",
					"geek", "geezer"};
	int n = sizeof (arr) / sizeof (arr[0]);

	string ans = commonPrefix (arr, n);

	if (ans.length())
		cout << "The longest common prefix is "
			<< ans;
	else
		cout << "There is no common prefix";
	return (0);
}

