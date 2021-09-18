
#include<stdio.h>
struct node
{
int data;
struct node *add;
}*start,*curr,*newnode;
int main()
{
start=NULL;
int n,ch;
do
{
printf("enter any no into linked list");
scanf("%d",&n);
create(n);
printf("Do you want to continue press 1");
scanf("%d",&ch);
}
while(ch==1);
}
void create(int n)
{
newnode=malloc(sizeof(struct node));
newnode->data=n;
newnode->add=NULL;
if(start==NULL)
{
start=newnode;
}
else
{
curr=start;
printf("address is %u",curr->add);
while(curr->add!=NULL)
{
curr=curr->add;
}
curr->add=newnode;
}
}
