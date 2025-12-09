#include <iostream>
#include <climits>
using namespace std;
  
 void rever(int *ptr,int size){
for(int j=size-1;j>=0;j--){
cout<<*(ptr+j)<<" ";}
 }
int main()
{
    int n;
    cout<<"How many numbers you want to enter:";
    cin>>n;
 int *ptr=new int [n];
 for(int i=0;i<n;i++){
 cin >> *(ptr + i);}
 
rever(ptr,n);

   delete []ptr;
}