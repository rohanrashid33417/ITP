#include<iostream>
using namespace std;
int main()
{ 
int a,b,c;
cout<<"Enter numbers:";
cin>>a>>b>>c;
if(a>=b && a>=c){
cout<<"Largest number is="<<a;
    }
else if(b>=a && b>=c){
cout<<"Largest number is="<<b;
    }
else if(c>=a && c>=b){
cout<<"Largest number is="<<c;
    }
}
