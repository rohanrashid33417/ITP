#include<iostream>
using namespace std;
int main()
{
int b, a;
cout<<"please Enter Numbers:";
cin>> a;
cin>> b;
cout<<"sum: \t"<< a+b<< endl;
cout<<"product:\t"<< a*b<< endl;
if((a+b) % (a*b)==0)
{
cout<<"Divisible";}
else
{ 
    cout<<"Not Divisible";
}
}