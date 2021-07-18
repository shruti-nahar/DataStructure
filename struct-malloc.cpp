/////////////////////////////
/*Input:--
*Output:
1.Create
2.Display
Enter the choice 1
------------------------CREATE-----------------------
Enter the Student roll no: 101
Enter the Student name: shruti
Enter the Student percentage: 95.4
Do you want to continue!!!! 1
1.Create
2.Display
Enter the choice 2
-------------------------Display--------------------------
--------------------------RECORDS------------------------
 Student Roll no: 101
 Student Name: shruti
 Student percentage: 95.4
Do you want to continue!!!! 3
----------------------Thankyou---------------------
*Description:malloc using Structure
*Author:Shruti Nahar
*Date:-18-July-2021*/
/////////////////////////////
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Student
{
int rollno;
char name[10];
float per;
}*stud;
class operation
{
    public:
    void create()
   {
     stud=(struct Student*)malloc(sizeof(struct Student));
     cout<<"Enter the Student roll no: ";
     cin>>stud->rollno;
     cout<<"Enter the Student name: ";
     cin>>stud->name;
     cout<<"Enter the Student percentage: ";
     cin>>stud->per;
   }
   void display()
   {
       cout<<"\n--------------------------RECORDS------------------------";
       cout<<"\n Student Roll no: "<<stud->rollno;
       cout<<"\n Student Name: "<<stud->name;
       cout<<"\n Student percentage: "<<stud->per;
   }
};
int main()
{
   operation op;
   int ch;
   do
   {
       cout<<"\n1.Create \n2.Display ";
       cout<<"\nEnter the choice ";
       cin>>ch;
       switch(ch)
       {
       case 1:
             cout<<"\n------------------------CREATE-----------------------\n";
            op.create();
            break;
       case 2:
             cout<<"-------------------------Display--------------------------";
              op.display();       
       }
       cout<<"\nDo you want to continue!!!! ";
       cin>>ch;
   } while(ch==1);
   cout<<"\n----------------------Thankyou---------------------";
}
