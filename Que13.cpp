#include<iostream>
using namespace std;
int powerfun(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return (x*powerfun(x,y-1));
    }
}
int main()
{
    int x=2;
    int y=5;
    cout<<powerfun(x,y);
}