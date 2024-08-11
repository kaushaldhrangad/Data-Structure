// Print 1 To N Without Loop
/*
Input: n = 10
Output: 1 2 3 4 5 6 7 8 9 10
*/

#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N==0) 
        return;
        printNos(N-1);
        cout << N << " ";
    }
};



// Print N to 1 without loop
/*
Input:
N = 10
Output: 10 9 8 7 6 5 4 3 2 1
*/
class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N==0) 
        return;
        cout << N<< " ";
        printNos(N-1);
        
    }
};

