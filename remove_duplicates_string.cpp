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
  
	  
Methord -2

string removeDups(string str) 
{
    int index = 0;
    string result;
// Traverse through all characters

for (int i=0; i<str.size(); i++) {
		
	// Check if str[i] is present before it
	
	int j;
	for (j=0; j<i; j++)
		if (str[i] == str[j])
		{
		  break;
		}
	
	// If not present, then add it to
	// result.
	
	if (j == i)
	{	
	  
	  result += str[i];

	}
	}
	
return result;
}

// Driver code
int main()
{
char str[]= "geeksforgeeks";
int n = sizeof(str) / sizeof(str[0]);
cout << removeDuplicate(str, n);
return 0;
}
