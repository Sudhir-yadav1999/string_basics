----------------------------------------
Check if string is rotated by two places
----------------------------------------

Input: string1 = “amazon”, string2 = “azonam” 
Output: Yes 

// rotated anti-clockwise

Input: string1 = “amazon”, string2 = “onamaz” 
Output: Yes 

// rotated clockwise

 bool isRotated(string str1, string str2)
    {
       if(str1.length()!=str2.length()) 
       {
           return 0;
       }
       
       if(str1.length()<2){
      return str1.compare(str2) == 0;
    }
       
       int len=str2.length();
       
       string clockl="";
       string anticlock="";
       
       clockl=clockl+str2.substr(2)+str2.substr(0,2);   //substr(index_start,total_size_of_string) //onamaz can be clockwise as amazon correctly 
       anticlock=anticlock+str2.substr(len-2,2)+str2.substr(0,len-2); //azonam is amazon in anticlockwise rotate and make it orignal string and conpare if rotated or not 
       
       if(clockl.compare(str1)==0 ||anticlock.compare(str1)==0) //orignal string is same as rotated string which is rotated in clockwise and anticlockwise again to check is rotation occured or not 
       {
           return 1;
       }
       return 0;
    }
   --------- 
   Alogirthm
   ---------
    1- There can be only two cases:
    a) Clockwise rotated
    b) Anti-clockwise rotated

2- If clockwise rotated that means elements
   are shifted in right.
   So, check if a substring[2.... len-1] of 
   string2 when concatenated with substring[0,1]
   of string2 is equal to string1. Then, return true.

3- Else, check if it is rotated anti-clockwise 
   that means elements are shifted to left.
   So, check if concatenation of substring[len-2, len-1]
   with substring[0....len-3] makes it equals to
   string1. Then return true.

4- Else, return false.
