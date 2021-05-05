-----------------------------------------------
C++ program to display a string entered by user
-----------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: "<<str<<endl;

    return 0;
}
---------------------------------
C++ String to read a line of text
---------------------------------
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   char str[100];
   cout<<"Enter the string "<<endl;
   cin.get(str,100);
   
   cout<<"output"<<endl;
   cout<<str;
   
   

    return 0;
}
-------------
String Object
-------------
In C++, you can also create a string object for holding strings.

Unlike using char arrays, string objects has no fixed length, and can be extended as per your requirement.
----------------------------------------------------------------------------------------------------------
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   string str;
   cout<<"Enter the string "<<endl;
   getline(cin,str);
   
   cout<<"output"<<endl;
   cout<<str;
   
   

    return 0;
}

---------------------------
String object into function 
---------------------------
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void display(string s)
{
   cout<<"output"<<endl;
   cout<<s; 
}

int main()
{
   string str;
   cout<<"Enter the string "<<endl;
   getline(cin,str);
   
   
   display(str);
 

    return 0;
}
-------------------------------------------------
Character methord cin.get(str,100); into function 
-------------------------------------------------
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void display(char *s);
void display(char s[])
{
   cout<<"output"<<endl;
   cout<<s; 
}

int main()
{
   char str[100];
   cout<<"Enter the string "<<endl;
   cin.get(str,100);
   
   display(str);
 

    return 0;
}

-----------------------
String Length Functions 
-----------------------

1) Strcpy
int main()
{
   char str[100];
   cout<<"Enter the string "<<endl;
   cin.get(str,100);
   char str1[100];
   
   strcpy(str1,str);
   display(str1);
 

    return 0;
}
2)Strlen

    int x=strlen(s);
    for(int i=0;i<x;i++)
   {
       cout<<s[i]<<endl;
   }
---------------------
Two strings are equal
---------------------
    bool equal=true;
  if(str1.length()!=str2.length())
  {
      equal=false;
  }
  else
  {
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]!= str2[i])
        {
         equal=0;
         break;
        }
    }
      
  }
 cout<<equal<<endl;
-----------------------
3)strcat
int main()
{
  
  char str[100];
  char str2[100];
  char *p;
  
  cout<<"Enter the string str1 ";
  cin.getline(str,100);
  
  cout<<"Enter the another string ";
  cin.getline(str2,100);
  
  strcat(str,str2);
  
  cout<<str<<endl;
  
    return 0;
}
----------------------------------------------
|compare the string is subset of other or not|
----------------------------------------------
    
 int main()
{
  
  char str[100];
  char str2[100];
  char *p;
  
  cout<<"Enter the string str1 ";
  cin.getline(str,100);
  
  cout<<"Enter the another string ";
  cin.getline(str2,100);
  
  p = strstr(str,str2);
  
  if(p!=NULL)
  {
   cout<<"The string contanins value"<<endl;
  }
  else
  {
   cout<<"The string does not contanins value"<<endl;   
  }
    return 0;
}
----------------------------------------------------
Finding the occurance of starting and ending of char
----------------------------------------------------
The strchr function returns the first occurrence of a character within a string. 
The strrchr returns the last occurrence of a character within a string. 
They return a character pointer to the character found, or NULL pointer if the character is not found. 

These character pointers are simply the address of the character found within the array.
If we subtract the starting address from this address, 
then we'll find the index of the character.
For example, say we're searching character 'b' in the string "abcd". Say, the string starts at memory address 100.
The string "abcd" would look in memory as follows:

 a     b     c     d
100   101   102   103
We see that

Index of 'b' = Address of 'b' - Address of 'a'
             = 101 - 100
             = 1
The starting address of the array can be accessed by the array name. So the index is calculated as follows:

int position = position_ptr - str;
int r_position = r_position_ptr - str;
 ----
|Code|
 ----
int main()
{
  
  char str[100]="finding first and last occurrence of a character is amazing";
  char str2[100]="abcdef";
  char *pos;
  char *q_pos;
  
  
  for(int i=0;i<strlen(str2);i++)
  {
  
  pos=strchr(str,str2[i]);
  q_pos=strrchr(str,str2[i]);
  
  int position=(pos!=NULL) ?  pos-str:-1 ;
  int last_position=(q_pos!=NULL) ?  q_pos-str:-1 ;
  
  cout<<"First occurance of char  "<<str2[i]<<"  is :"<<position <<"And last char position is  "<<last_position<<endl;
  }
  
  -------------------------------
  First occurance pointer of word 
  -------------------------------
  1)strpbrk :- You provide two strings to strpbrk. If any character from second string is found in the first string,
               strpbrk will return a character pointer to the first occurrence.
  int main()
  {
  
  char str[100]="finding digits where there could be digit 5236 is amazing";
  char str2[100]="0123456789";
  char *p;
 
  p=strpbrk(str,str2);//return a pointer to first occurence of the word
  
  if(p!=NULL)
  {
   cout<<str<<" : "<<" from bag of str2 ie "<<str2<<" is "<< p<<endl;   
  }
  else
  {
      cout<<"Null value";
  }
    return 0;
  }







