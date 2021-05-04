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










