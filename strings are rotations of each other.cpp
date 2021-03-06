---------------------------------------------------
Check if strings are rotations of each other or not
---------------------------------------------------
Algorithm: areRotations(str1, str2)

    1. Create a temp string and store concatenation of str1 to
       str1 in temp.      ----------------
                          temp = str1.str1
                          ----------------
    2. If str2 is a substring of temp then str1 and str2 are 
       rotations of each other.

    Example:                 
                     str1 = "ABACD"
                     str2 = "CDABA"

     temp = str1.str1 = "ABACDABACD"
     Since str2 is a substring of temp, str1 and str2 are 
     rotations of each other.
                       
bool areRotations(string s1,string s2)
    {  //both length are same then check for string equality
        if(s1.length()!=s2.length())
        {
            return 0;
        }
        
        // 
        string result =s1+s1;
        
        if(result.find(s2)==-1)
        {
            return 0;
        }
        return 1;
        
    }
