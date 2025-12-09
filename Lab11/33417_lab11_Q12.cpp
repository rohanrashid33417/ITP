
#include <iostream>
using namespace std;
void swap(double a, double b){
double temp;
temp=a;
a=b;
b=temp;
cout<<"After swap;"<<endl;
cout<<"first num; "<<a<<" "<<"second num: "<<b;

}
int main() {
   double a,b; 
  cout<<"Enter first value: ";
  cin>>a;
  cout<<"Enter second value: ";
  cin>>b;
  cout<<endl;
  cout<<"Before swap;"<<endl;
  cout<<"first num; "<<a<<" "<<"second num: "<<b<<endl<<endl;
  swap(a,b);
}