#include<iostream>
using namespace std;
bool getbit(int n,int pos)
{
    return n & 1<<pos;
}
bool setbit(int n,int pos)
{
    return n | 1<<pos;
}
int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return n & mask;
}
bool updatebit(int n,int pos,int val)
{
    int mask=~(1<<pos);
    int change= n & mask;
    return val<<pos | change;
}
int main()
{
    cout<<"Get Bit ";
    cout<<getbit(5,2);
    cout<<"\nSet Bit ";
    cout<<setbit(5,2);
    cout<<"\nClear Bit ";
    cout<<clearbit(5,2);
    cout<<"\nUpdate Bit ";
    cout<<updatebit(5,1,2);
}