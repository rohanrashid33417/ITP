#include<iostream>
using namespace std;
int main(){
int b , a;
cout<<"Please Enter Numbers:";
cin>> a;
cin>> b;

if(a,b == 0)
{
    cout<<"Point is at origin";
}
else if (a>0 && b>0)
{
    cout<<"1st Quadrant";
}
else if(a<0 && b<0)
{
    cout<<"3rd Quadrant";
}
else if (a<0 && b>0)
{
    cout<<"2nd Quadrant";
}
else if (a>0 && b<0)
{
    cout<<"Forth Quadrant";
}
}