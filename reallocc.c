//////////////////////////
/*Input:enter the no of block 5
enter the numbers
1
2
4
5
6

Enter the new allocate number: 2
Enter the element: 7
                    8
*Output:
        elements are    1    2    4    5    6
        Reallocating elements are:-
                                   7
                                   8
*Description:Implementation of realloc (dynamic memory allocation)
*Date:11-July-2021
*Author:Shruti Nahar*/
/////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int main()
{
int l,*ptr,l1,new_l;
int i;
int *ptr1;
printf("enter the no of block");
scanf("%d",&l);
ptr=(int*)calloc(l,sizeof(int));
printf("enter the numbers");
for(i=0;i<l;i++)
{
scanf("%d",(ptr+i));
}
printf("elements are");
for(i=0;i<l;i++)
{
printf("%5d",*(ptr+i));
}
printf("\nEnter the new allocate number ");
scanf("%d",&new_l);
ptr=(int*)realloc(ptr,new_l);
l1=l;
l=l+new_l;
printf("Enter the element  ");
for(i=l1;i<l;i++)
{
scanf("%d",&new_l);
}
printf("Reallocate numbers are ");
for(i=l1;i<l;i++)
{
 printf("\n%d",*(ptr+i));
}
}

