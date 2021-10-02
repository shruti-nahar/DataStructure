#include<iostream>
using namespace std;
signed main()
{
    int n,m;
    cout<<"Enter the row and column ";
    cin>>n>>m;
    int arr[n][m];
    int row_start=0,row_end=n-1;
    int col_start=0,col_end=m-1;
    cout<<"Enter the elements of array ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
         cin>>arr[i][j];
        }
    }
    cout<<"Matrix is \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    while(row_start<=row_end && col_start<=col_end)
    {
        for(int col=col_start;col<=col_end;col++)
        {
           cout<<arr[row_start][col]<<" ";
        }
        cout<<"\n";
        row_start++;
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][col_end]<<" ";
        }
        cout<<"\n";
        col_end--;
        for(int col=col_end;col>=col_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        cout<<"\n";
        row_end--;
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<arr[row][col_start]<<" ";
        }
        cout<<"\n";
        col_start++;
    }
}
