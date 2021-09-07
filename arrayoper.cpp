///////////////////////////////////////
/*Input:How many elements do you want to add in array 5
*Output:
1.Create
2.Display
3.Insert
4.Search
5.Delete
Enter the choice 1
Enter the elements in array
20
10
30
40
50
Do you want to continue with Operations!!!!!!  y
1.Create
2.Display
3.Insert
4.Search
5.Delete
Enter the choice 2
The elements in array are
20
10
30
40
50
Do you want to continue with Operations!!!!!!  y
1.Create
2.Display
3.Insert
4.Search
5.Delete
Enter the choice 3
enter the element and new position of element
10 1
After Insertion:
10
20
10
30
40
50
Do you want to continue with Operations!!!!!!  y
1.Create
2.Display
3.Insert
4.Search
5.Delete
Enter the choice 4
Enter the element to be searched 10
Element fount at 1 position
Element fount at 3 position
10 element found 2 times
Do you want to continue with Operations!!!!!!  y
1.Create
2.Display
3.Insert
4.Search
5.Delete
Enter the choice 5
Enter the loc to be deleted 1
10 element deleted
Do you want to continue with Operations!!!!!!  n
---------------------Thankyou-----------------------------
*Description :Operation Performed on Array 
*Date: 6-July-2021
*Author: Shruti Nahar*/
//////////////////////////////////////
#include <iostream>
using namespace std;
int arr[20];
class oper
{
public:
    int flag=0;
    int i;
    public:
    void create(int n)
    {
        cout<<"Enter the elements in array ";
        for(i=0;i<n;i++)
        {
        cin>>arr[i];
        }
    }
    void display(int n)
    {
      cout<<"The elements in array are \n";
      for(i=0;i<n;i++)
        {
        cout<<arr[i]<<"\n";
        }   
    }
    void insert1(int ele,int pos,int n)
    {
        for(i=n-1;i>=pos-1;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos-1]=ele;
        n++;
        cout<<"After Insertion: \n";
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<"\n";
        }
    }
    void search1(int ele,int n)
    {
       for(i=0;i<n;i++)
        {
           if(arr[i]==ele)
           {
               flag=flag+1;
               cout<<"Element fount at "<<i+1<<" position\n";
           }
        }
        if(flag>=1)  
        {
            cout<<ele<<"element found "<<flag<<" times";
        } 
        else
        {
            cout<<"Element not found ";
        } 
    }
    void delete1(int loc,int n)
    {
        int temp=arr[loc-1];
        for(i=loc-1;i<n;i++)
        {
            arr[i]=arr[i++];
        }
        n--;
        cout<<temp<<" element deleted ";
        cout<<"\nAfter Deletion \n";
        for(i=0;i<n;i++)
        {
        cout<<arr[i]<<"\n";
        }   
    }
};
int main()
{
    oper op;
    int c,i;
    int elem,ele,pos,loc,s;
    char ch;
    int n;
    cout<<"How many elements do you want to add in array ";
    cin>>n;
    do
    {
        cout<<"\n1.Create \n2.Display \n3.Insert \n4.Search \n5.Delete ";
        cout<<"\nEnter the choice ";
        cin>>c;
        switch(c)
        {
       case 1:
           op.create(n);
           break;
       case 2:
           op.display(n);
           break;
       case 3:
        cout<<"enter the element and new position of element\n";
        cin>>ele>>pos;
           op.insert1(ele,pos,n);
           break;
       case 4:
           cout<<"\nEnter the element to be searched ";
           cin>>s;
           op.search1(s,n);
           break;
       case 5:
           cout<<"Enter the loc to be deleted ";
           cin>>loc;
           op.delete1(loc,n);
           break;    
        }
        cout<<"\nDo you want to continue with Operations!!!!!!  ";
        cin>>ch;
    }while(ch=='y');
    cout<<"\n---------------------Thankyou-----------------------------";
}
