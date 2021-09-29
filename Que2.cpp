/*input:- arr[] = { 2, 15, 11, 7 }
output:-  3
description:Count of unique pairs (i, j) in an array such that sum of A[i] and reverse of A[j] 
is equal to sum of reverse of A[i] and A[j]
date: 29-09-2021
Author name: Shruti Nahar*/
#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int temp = n, rev = 0, r;
 
   
    while (temp) {
 
        r = temp % 10;
        rev = rev * 10 + r;
        temp /= 10;
    }
    //cout<<rev<<"\n";
    return rev;
}

void countPairs(int A[], int N)
{
    
    unordered_map<int, int> u_map;
 
   
    int pairs = 0;
 
    // Iterate the array A[]
    for (int i = 0; i < N; i++)
     {
 
        int val = A[i] - reverse(A[i]);
        //cout<<"\n"<<val;

        pairs += u_map[val];
        //cout<<pairs<<'\n';
     //  cout<<u_map[val];
        u_map[val]++;
    }
 
    // Print the number of pairs
    cout << pairs;
}
 
// Driver Code
int main()
{
    int arr[] = { 2, 15, 11, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);

    countPairs(arr, N);
 
    return 0;
}