//////////////////////////////////
/*Input:Enter the number of memory  to be allocated 5
Enter the elements:
153
1
28
2
90
*Output:
Elements are
153
1
28
2
90
Armstrong number is 153
Armstrong number is 1
Armstrong number is 2
Count of Armstrong is 3
*Description:Use of Malloc (Dynamic Memory Allocation ) to Find Armstrong number and count of Armstrong number
*Date: 7-July-2021
*Author:Shruti Nahar*/
////////////////////////////////////
#include<iostream>
#include <math.h>
using namespace std;
#include<stdlib.h>
int main()
{
    int n,c,flag=0;
    int *ptr,temp,i,j;
    int p,a,per,r,ans=0;
    cout<<"Enter the number of memory  to be allocated ";
    cin>>n;
    ptr=(int*)malloc(sizeof(int)*n);
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"Elements are ";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<*(ptr+i);
    }
    for(i=0;i<n;i++)
    {
    p=*(ptr+i);
    temp=*(ptr+i);
     while(temp!=0)
     {
      temp=temp/10;
      c++;   
     }
      while(*(ptr+i)!=0)
    {
        r=*(ptr+i)%10;
       ans=ans+pow(r,c);
       *(ptr+i)=*(ptr+i)/10;
    }
    if(p==ans)
    {
      cout<<"\nArmstrong number is "<<ans; 
      flag++;
    }
    c=0;
    ans=0;
    }
  cout<<"\nCount of Armstrong is "<<flag; 
   
}

