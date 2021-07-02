/////////////////////////////////
/*Input:Enter the number of elements in array 5
10
20
30
40
50
*Output:
Elements of Array are
10
20
30
40
50
*Description:Creation and Transversing of Array
*Date:2-July-2021
*Author Name:Shruti Nahar*/
#include <iostream>
using namespace std;
#define MAX 30
int main()
{
int arr[MAX];
int i,n;
cout<<"Enter the number of elements in array ";
cin>>n;
for(i=0;i<n;i++)
{
   cin>>arr[i];
}
cout<<"Elements of Array are \n";
for(i=0;i<n;i++)
{
   cout<<arr[i]<<"\n";
}
}
