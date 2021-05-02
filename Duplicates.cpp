

Print all the duplicates in the input string

Write an efficient program to print all the duplicates and their counts in the input string 

Method 1: Using hashing

Algorithm: Let input string be “geeksforgeeks” .
1: Construct character count array from the input string.
  
count[‘e’] = 4 
count[‘g’] = 2 
count[‘k’] = 2 

2: Print all the indexes from the constructed array which have values greater than 1.
----
Code
----
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
   map<char,int> m1;
   
   for(int i=0;i<str.length();i++)
   {
       m1[str[i]]++;
   }
   
   for(auto itr : m1)
   {
       if(itr.second>1)
       {
           cout<<itr.first<<" , Count = "<<itr.second<<endl;
       }
   }
   
}
/* Driver code*/
int main()
{
    string str = "geeksforgeeks";
    printDups(str);
    return 0;
}

----------
Methord -2
----------

#include <iostream>
using namespace std;
# define NO_OF_CHARS 256

class gfg
{
	public :
	
	/* Fills count array with
	frequency of characters */
	void fillCharCounts(char *str, int *count)
	{
		int i;
		for (i = 0; *(str + i); i++)
		count[*(str + i)]++;
	}

	/* Print duplicates present
	in the passed string */
	void printDups(char *str)
	{
		
		// Create an array of size 256 and fill
		// count of every character in it
		int *count = (int *)calloc(NO_OF_CHARS,
									sizeof(int));
		fillCharCounts(str, count);

		// Print characters having count more than 0
		int i;
		for (i = 0; i < NO_OF_CHARS; i++)
		if(count[i] > 1)
			printf("%c, count = %d \n", i, count[i]);

		free(count);
	}
};

/* Driver code*/
int main()
{
	gfg g ;
	char str[] = "test string";
	g.printDups(str);
	//getchar();
	return 0;
}

// This code is contributed by SoM15242
