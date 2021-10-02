#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the row and column ";
    cin>>n1>>n2>>n3;

    int arr[n1][n2];
    int arr1[n2][n3];
    int ans[n1][n3];
    cout<<"Enter the elements of 1st matrix ";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the elements of 2nd matrix ";
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j]=arr[i][k]*arr1[k][j];
            }
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}