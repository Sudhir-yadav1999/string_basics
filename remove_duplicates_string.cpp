------------------------
Remove duplicates string 
------------------------

string removeDups(string str) 
	{
    unordered_map<char,int> exists;
    int index=0;
    string result;
    for(int i=0;i<str.size();i++)
    {
        if(exists[str[i]]==0)
        {
            
            result +=str[i];
            exists[str[i]]++;
        }
    }
   
	return result;
	}
  TIme complexity : 0(n)
  


#include <bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n)
{

int index = 0;
	
// Traverse through all characters

for (int i=0; i<n; i++) {
		
	// Check if str[i] is present before it
	
	int j;
	for (j=0; j<i; j++)
		if (str[i] == str[j])
		{
		    cout<<str[i]<<endl;
		  break;
		}
	
	// If not present, then add it to
	// result.
	
	if (j == i)
	{	
	    cout<<"The value of j and i is :"<<endl;
	    cout<<" value :"<<str[i]<<endl;
	  str[index++] = str[i];

	}
	}
	
return str;
}

// Driver code
int main()
{
char str[]= "geeksforgeeks";
int n = sizeof(str) / sizeof(str[0]);
cout << removeDuplicate(str, n);
return 0;
}
