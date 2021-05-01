
-----------------
Palindrome String 
-----------------
Given a string S, check if it is palindrome or not.

Example 1:

Input: S = "abba"
Output: 1
Explanation: S is a palindrome
Example 2:

Input: S = "abc" 
Output: 0
Explanation: S is not a palindrome

-------
Code
-------
int isPlaindrome(char S[])
{
  int i=0;
  int j=strlen(S)-1;
  
  //while i<j using two pointers //
  
  while(i<j)
  {
      if(S[i++]!=S[j--])
      { //if not equal then return 0 as not a palidrome if equal return 0;
          return 0;
      }
     
      
  }
  return 1;
 
  
}
