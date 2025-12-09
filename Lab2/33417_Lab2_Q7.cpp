#include<iostream>
using namespace std;
int main()
{
float a,b,c,d,e,avg;
cout<<"Enter marks of 5 subjects: ";
cin>>a>>b>>c>>d>>e;
avg=(a+b+c+d+e)/5.0;
if(avg>=90 && avg<=100)
{
    cout<<"Grade: A";
}
else if(avg>=80 && avg<90)
{
    cout<<"Grade: B";
    
}
else if(avg>=70 && avg<80)
{
    cout<<"Grade: C";
    
}
else if(avg<70)
{
    cout<<"Fail";
    
}
}
