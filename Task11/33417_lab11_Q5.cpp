#include<iostream>
using namespace std;
void sort(int *arr,int size, int order){
for(int i=0;i<size-1;i++){
for(int j =i+1;j<size;j++){
if((order==1&&arr[i]>arr[j]) || (order==2&&arr[i]<arr[j])){
int temp =arr[i];
arr[i]=arr[j];
arr[j]=temp;}}}}


int main(){
  int arr[]={5,2,8,1,9};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Original array";
  for(int i=0; i<size;i++){
      cout<<arr[i]<<" ";
  } cout<<endl;
    
sort(arr,size,1);
cout<<"Ascending order; ";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";}
    cout<<endl;
   
   
  sort(arr,size,2);
cout<<"Decending order; ";
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";}
    cout<<endl;
    
    
    }
    
    