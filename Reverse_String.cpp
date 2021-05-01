
----------------
Reverse a string
----------------

Approach 2: Two Pointers, Iteration, mathcal{O}(1)O(1) Space
---------------------
Two Pointers Approach
---------------------
In this approach, two pointers are used to process two array elements at the same time. Usual implementation is to set one pointer in the beginning and one at the end and then to move them until they both meet.

Sometimes one needs to generalize this approach in order to use three pointers, like for classical Sort Colors problem.
---------
Algorithm
---------
Set pointer left at index 0, and pointer right at index n - 1, where n is a number of elements in the array.

While left < right:

Swap s[left] and s[right].

Move left pointer one step right, and right pointer one step left.
-----------------------------------------------------------------
----
code
----
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int i=0;
        int j=s.size()-1;
        
       
        while(i<j)
        {
            char temp=s[i];
            s[i++]=s[j];
            s[j--]=temp;
            
        }
        
        
    }
};
