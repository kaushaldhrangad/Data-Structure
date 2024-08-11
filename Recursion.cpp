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

// Sum of first N numbers
/*
Input: n = 3
Output: 6
*/
#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
	// your code goes here
	
	if(n==0) return 0;
	return n + sum(n-1);

}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << sum(n);
    return 0;
}



// Factorial Using Recursion
/*  
Input: n = 5
Output: 120
*/

#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
	// your code goes here
	
	if(n==0) return 1; //Return 1 because after the condition met this is add into function if we write 0 then answer multiply with function and answer will be 0.
	return n * fact(n-1);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << fact(n);
    return 0;
}

// Sum of first n terms
/*
Input:
n=5

Output:
225

Explanation:
(1*1*1) + (2*2*2) + (3*3*3) + (4*4*4) + (5*5*5) = 225
*/

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        
        if(n==0) return 0;
        return (n*n*n) + sumOfSeries(n-1);
    }
};