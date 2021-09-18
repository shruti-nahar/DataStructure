//////////////////////////////////////
/*Input: how many elements do you want in array
5
enter the elements of array
10
20
30
40
50
enter the search element
30
*Output: element found is found at 3 position
*Description: Binary Search at find the element
*Date: 25-June-2021
*Author: Shruti Nahar */
/////////////////////////////////////////
#include<stdio.h>
#define max 20
int main()
{
    int n;
    int arr[max],i,mid,search;
    printf("how many elements do you want in array\n");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the search element\n");
    scanf("%d",&search);
    int lb=0,ub=n-1;
    mid=(lb+ub)/2;
    while(lb<=ub)
    {
        if(arr[mid]==search)
        {
            printf("element found is found at %d position",mid+1);
            break;
        }
        else if(arr[mid]>search)
        {
            ub=mid-1;
            mid=(lb+ub)/2;
        }
        else if(arr[mid]<search)
        {
            lb=mid+1;
            mid=(lb+ub)/2;
        }
        else
        {
            printf("element not present in array");
        }
    }
}


