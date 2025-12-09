#include <iostream>
using namespace std;

    int even(int *arr,int size){
      int count =0;
      int *p=arr;
      for(int i=0;i<size;i++){
       if(*p % 2 == 0){  
       count++;}
   p++;}
         return count;}
 int main(){
   int n;
   cout<<"Enter size of array ";
   cin>>n;
   int *arr=new int [n];
   int *p=arr;
   cout<<"Enter values ";
   for(int i=0;i<n;i++){
   cin>>*p;
       p++;
   }
   cout<<"Number of even values "<<even(arr,n);
   delete []arr;
  
}