------------------------------------------------------
Algorithm to convert Roman Numerals to Integer Number:  
------------------------------------------------------
1)Split the Roman Numeral string into Roman Symbols (character).
2)Convert each symbol of Roman Numerals into the value it represents.
3)Take symbol one by one from starting from index 0: 
4)If current value of symbol is greater than or equal to the value of next symbol, then add this value to the running total.
5)else subtract this value by adding the value of next symbol to the running total.

I 1
V 5
X 10
L 50
C 100
D 500
M 1000

#include <bits/stdc++.h>
using namespace std;
 
// This function returns value
// of a Roman symbol
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
 
// Returns decimal value of
// roman numaral
int romanToDecimal(string& str)
{
   int len=str.length();
   int result=0;
   for(int i=0;i<len;i++)
{
    int val1=value(str[i]); //value1
    
    if(i+1<len)
    {
        int val2=value(str[i+1]);//value2
        if(val1>val2)
        {
           result =result +val1;
        }
        else
        {
            result=result+val2-val1;
            i++;
        }
    }else
    {
       result=result+val1;//last value no further next value left add last value. 
    }
    
    
}
   
    return result;
}
 
// Driver Code
int main()
{
    // Considering inputs given are valid
    string str = "MCMIV";
    cout << "Integer form of Roman Numeral is "
        << romanToDecimal(str) << endl;
 
    return 0;
}
