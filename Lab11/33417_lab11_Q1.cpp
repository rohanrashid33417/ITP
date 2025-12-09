
#include <iostream>
using namespace std;
void rever(string a,string b){
for(int i= b.length() ;i>=0;i--){
cout<<b[i];}
cout<<"  ";
for(int i= a.length() ;i>=0;i--){
cout<<a[i];}}

int main() {
   string a,b;
   cout<<"Enter First name: ";
   cin>>a;
   cout<<"Enter second name: ";
   cin>>b;
rever(a,b);
   
}