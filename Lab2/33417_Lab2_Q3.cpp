#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Please Enter Marks:";
cin>> a;
if(a<60)
{
    cout<<"F";
}
else if (a>=90 && a<=100)
{
    cout<<"A";
}
else if(a>=80 && a<=89)
{
    cout<<"B";
}
else if (a>=70 && a<=79)
{
    cout<<"c";
}
else if (a>=60 && a<=69)
{
    cout<<"D";
}
}