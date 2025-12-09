#include <iostream>
#include <climits>
using namespace std;
  
 void findmax(int *ptr,int size){
     int maxvalue=INT_MIN;
 
 for(int j=0;j<size;j++){
  if (*(ptr + j)>maxvalue){
  maxvalue = *(ptr + j);}}
cout<<"Maximum value is "<<maxvalue<<endl;
 }
int main()
{
    int n;
    cout<<"How many numbers you want to enter:";
    cin>>n;
 int *ptr=new int [n];
 for(int i=0;i<n;i++){
 cin >> *(ptr + i);}
 
findmax(ptr,n);

   delete []ptr;
}