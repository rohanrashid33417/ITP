#include <iostream>
using namespace std;
float *findMax(float arr[],int size){
float *max1=arr;
float *max2=arr+1;
if(*max1<*max2){
    float *temp=max1;
    max1=max2;
    max2=temp;}
    
    for(int i=2;i<size;i++){
        if(*(arr+i)>*max1){
            max2=max1;
            max1=arr +i;}
    else if (*(arr+i)>*max2&&*(arr+i)!=*max1){
        max2=arr+i;}}
    
return max2;
}
int main()
{
float arr[4]={4.5, 3.3, 0.5, 4.57};
float *result = findMax(arr, 4);
cout<<"Second highest = "<<*result;
}