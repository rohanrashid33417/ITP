
#include <iostream>
using namespace std;
void sumcube(){
   int a; 
   int cube, sum=0;
cout<<"Enter number: ";
cin>>a;
for(int i=1;i<=a;i++){
cube=i*i*i;
sum+=cube;}
cout<<"sum: "<<sum;}


int main() {
  sumcube();
}