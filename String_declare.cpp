--------------------
1) Array of strings
--------------------
#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main(){

string str[100];// array of strings input full string as "sudhir" in one block of array as string  

for(int i=0;i<3;i++)
{
    cin>>str[i];
}

for(int i=0;i<3;i++)
{
    cout<<str[i]<<endl;
}

return 0;
}

--------------------------
2)Array of pointers string
--------------------------

#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main(){

const char *str[10];//char array of pointer
char arr[100];//char array

for(int i=0;i<3;i++)
{
   cin>>arr;//input string in arr
   int l=strlen(arr); 
   
    char *arr2=(char *)malloc(l+1);//char array to put into array of pointer
    strcpy(arr2,arr);
    str[i]=arr2;
    
}

for(int i=0;i<3;i++)
{
    cout<<str[i]<<endl;
}

return 0;
}







