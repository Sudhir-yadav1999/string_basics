


Input: s = "42"
Output: 42
Explanation: The underlined characters are what is read in, the caret is the current reader position.
Step 1: "42" (no characters read because there is no leading whitespace)
         ^
Step 2: "42" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "42" ("42" is read in)
           ^
The parsed integer is 42.
Since 42 is in the range [-231, 231 - 1], the final result is 42.
Example 2:

Input: s = "   -42"
Output: -42
Explanation:
Step 1: "   -42" (leading whitespace is read and ignored)
            ^
Step 2: "   -42" ('-' is read, so the result should be negative)
             ^
Step 3: "   -42" ("42" is read in)
               ^
The parsed integer is -42.
Since -42 is in the range [-231, 231 - 1], the final result is -42.
Example 3:

Input: s = "4193 with words"
Output: 4193
--------------------------
  gfg code 
// A simple C++ program for
// implementation of atoi
#include <bits/stdc++.h>

using namespace std;
int myAtoi(const char* str)
{
	int sign = 1, base = 0, i = 0;
	
	// if whitespaces then ignore.
	while (str[i] == ' ')
	{
		i++;
	}
	
	// sign of number
	if (str[i] == '-' || str[i] == '+')
	{
		sign = 1 - 2 * (str[i++] == '-');
	}

	// checking for valid input
	while (str[i] >= '0' && str[i] <= '9')
	{
		// handling overflow test case
		if (base > INT_MAX / 10
			|| (base == INT_MAX / 10
			&& str[i] - '0' > 7))
		{
			if (sign == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		base = 10 * base + (str[i++] - '0');
	}
	return base * sign;
}


// Driver Code
int main()
{
	char str[] = " -123";

	// Functional Code
	int val = myAtoi(str);
	printf("%d ", val);
	return 0;
}
// This code is contributed by Yogesh shukla.
---------------------------------------------
  
  Code -2

  
  

   long result=0;
        
        int sign=1;
        int i=0;
        while(s[i] == ' ')
        {
            i++;
        }
        
        switch(s[i])
        {
            case '-':
                sign=-1;
            case '+':
                i++;
                break;
            default:
                if(!isdigit(s[i]))
                {
                    return 0;
                }
        }
        
        while(i< s.size() && isdigit(s[i]))
        {
            if(result>INT_MAX)
            {break;}
            
            result =result * 10 + (s[i]-'0');
            ++i;
        }
        
        result =(sign==-1)? -result : result;
        
        if(result >=INT_MAX)
        {
            return INT_MAX;
        }
        if(result<=INT_MIN)
        {
            return INT_MIN;
            
        }
     
        return (int)result;
        
