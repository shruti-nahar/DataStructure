//////////////////////////////////
/*Input:enter the number of elements 5
enter the elements in array
20
10
30
50
40
*Output:elements of array are
   20   10   30   50   40
       Largest Number is 50
       Smallest Number is 10
       Sum is 150
       Avg is 30
*Description:Use of Malloc (Dynamic Memory Allocation ) to Find Maximum ,Minimum and Average element
*Date: 6-July-2021
*Author:Shruti Nahar*/
////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr,n,i;
int sum=0;
int avg;
printf("enter the number of elements");
scanf("%d",&n);
ptr=(int*)malloc(sizeof(int)*n);
printf("enter the elements in array");
for(i=0;i<n;i++)
{
scanf("%d",(ptr+i));
}
printf("elements of array are \n");
for(i=0;i<n;i++)
{
printf("%5d",*(ptr+i));
}
for(i=0;i<n;i++)
{
  sum=sum+*(ptr+i);
}
avg=sum/n;
for(i=0;i<n;i++)
{
    if(*ptr<*(ptr+i))
    {
        *ptr=*(ptr+i);
    }
}
printf("\nLargest Number is %d ",*ptr);
for(i=0;i<n;i++)
{
    if(*ptr>*(ptr+i))
    {
        *ptr=*(ptr+i);
    }
}
printf("\nSmallest Number is %d ",*ptr);
printf("\nSum is %d ",sum);
printf("\nAvg is %d",avg);
}
