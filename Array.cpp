// Find the Largest element in an array

// input n=6 arr[] = {4 7 8 6 7 6 }
//  output:- 8 (This is biggest element in the array)

#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n)
{

  int largest = arr[0];
  for (int i = 0; i < n; i++)
  {

    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  return largest;
}

// Find Second Smallest and Second Largest Element in an array

/*Input
10
1 2 3 4 5 6 7 8 9 10

Output
9 2
*/

#include <vector>
#include <climits>

using namespace std;

int secondLargest(int n, vector<int> &a)
{
  int largest = a[0];
  int slargest = -1;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > largest)
    {
      slargest = largest;
      largest = a[i];
    }
    else if (a[i] > slargest && a[i] < largest)
    {
      slargest = a[i];
    }
  }
  return slargest;
}

int secondSmallest(int n, vector<int> &a)
{
  int smallest = a[0];
  int ssmallest = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    if (a[i] < smallest)
    {
      ssmallest = smallest;
      smallest = a[i];
    }
    else if (a[i] != smallest && a[i] < ssmallest)
    {
      ssmallest = a[i];
    }
  }
  return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
  int slargest = secondLargest(n, a);
  int ssmallest = secondSmallest(n, a);
  return {slargest, ssmallest};
}

//  Check if an Array is Sorted or Not
/*
Input - 1
5
4 5 4 4 4

Output - 1
0 (means false- array sorted nahi hai)

Input - 2
4
0 0 0 1

Output - 2
1 (means true- array sorted hai)

*/

#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a)
{
  int prvElement = a[0];
  for (int i = 0; i < n; i++)
  {
    if (a[i] >= a[i - 1])
    {
    }
    else
      return false;
  }
  return true;
}


//  Remove Duplicates from Sorted Array
/*

Input:- 
10
1 2 2 3 3 3 4 4 5 5 

Output:-
5 (Answer)
like this [1,2,3,4,5] (This is only for understanding.)

*/
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0;
	for(int j=0; j<n; j++){
		if(arr[i]!= arr[j]){
			arr[i+1]= arr[j];
			i++;
		}
	}
	return i+1;
}


//  Left Rotate an Array by One
/*
Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]
  */


#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> &arr, int n) {
  // Write your code here.

  int temp = arr[0];
  for (int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  return arr;
}


// Rotate an Array by K places
/*
Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.
*/

vector<int> rotateArray(vector<int> arr, int k) {
  // Write your code here.
  int n = arr.size();
  for (int i = 0; i < k; i++) {

    int temp = arr[0];
    for (int j = 0; j < n - 1; j++) {
      arr[j] = arr[j + 1];
      // j++;
    }
    arr[n - 1] = temp;
  }
  return arr;
}