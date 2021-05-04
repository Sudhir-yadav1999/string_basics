C++ program to display a string entered by user.
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





