
#include <iostream>
#include<climits>
using namespace std;

void min_max(int a ,int arr[]){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<a;i++){
    if(arr[i] > max){
    max = arr[i];   
    }
    if(arr[i] < min){
        min = arr[i];
    }
    }
    cout<<"Maximum Value:\t"<<max;
    cout<<endl;
    cout<<"Minimum Value:\t"<<min;
}

int main() {
int size=0,b=0;
    cout<<"enter how many number you want to enter " ;  
    cin>>size;
    int num[size];
    cout<<"Enter numbers ";
    for(int i=0;i<size;i++){
    cin>>num[i];  
    }
    
    
min_max(size,num);
  
  
  
  
  
  
  
  
  
}