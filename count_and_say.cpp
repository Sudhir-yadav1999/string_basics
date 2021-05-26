
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

For example, the saying and conversion for digit string "3322251":


Given a positive integer n, return the nth term of the count-and-say sequence.

 The first term is "1"

Second term is "11", generated by reading first term as "One 1" 
(There is one 1 in previous term)

Third term is "21", generated by reading second term as "Two 1"

Fourth term is "1211", generated by reading third term as "One 2 One 1" 





class Solution {
public:
    string countAndSay(int n) {
        
        if(n==1)
        {
            return "1";
        }
        if(n==2)
        {
            return "11";
        }    
        string s="11";
        for(int i=3;i<=n;i++)
        {
            string t="";
          
            s=s+"&";
            int counter=1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]!=s[j-1])
                {
                    t=t+to_string(counter);
                    t=t+s[j-1];
                    counter=1;
                }
                else
                {
                  counter++;  
                }
                
            }
            s=t;
        }
        return s;
        
    }
};

Time complexity -o(n2)