#include <iostream>
using namespace std;
float *sumAll(float* arr,int size){
    static float sum ;
    sum=0.0;
   for( int j=0;j<size;j++){
       sum+=*(arr+j);
       }
    return &sum;
    }

int main()
{
float arr[4]={4.5, 3.3, 0.5, 4.57};
cout<<"Sum of this Array = "<<*sumAll(arr,4);
}