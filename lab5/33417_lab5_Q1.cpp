#include <iostream>
using namespace std;
int main ()
{
  int a,b;
  cout<<"Enter 1st number:";
  cin>>a;
  cout<<"Enter 2nd number:";
  cin>>b;
  while(a!=b){
  a=a>> 2;
  b=b*b;}
  cout<<"1st number:"<<a<<endl;
  cout<<"2nd number:"<<b<<endl; 

    
}
