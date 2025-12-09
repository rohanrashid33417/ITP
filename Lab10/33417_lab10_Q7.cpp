
#include <iostream>
using namespace std;
void con(int a, int arr[]){  
    int count=1,max=1;
    int num=arr[0];
    for(int i=1;i<a;i++){
    if(arr[i] == arr[ i-1]){
      count++; }
     else { count=1;} 
    
  
if(count>max){
  max=count;
    
 num =arr[i] ;
       
    }  
    
}


if (max == 1)    
  {cout<<"No consecutive ";}
  else {
cout<<"longest run ; "<<max<<" "<<"consecutive number ; "<<num; 
}
}
int main() {
    int a=0;
  cout<<"How many numbers you want to enter : ";
  cin>>a;
 int arr[a];
    cout<<"Enter numbers : ";
    for(int i=0;i<a;i++){
    cin>>arr[i];
      cout<<" ";
     arr[a] = arr[i];
    }
    con(a,arr);
    
}