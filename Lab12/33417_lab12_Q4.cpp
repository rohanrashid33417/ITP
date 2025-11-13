
#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;
int subarray(int arr[],int n,int index,int sum,int maxi){
if(index==n)return maxi;
sum=max (arr[index],sum+arr[index]);
if(sum>maxi)
maxi=sum;
return subarray(arr,n,index+1,sum,maxi);


}


int main() {
    int n;
    cout<<"Size of first array;";
    cin>>n;
    cout<<"Enter numbers;";
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];}
       
  int result = subarray(arr,n,0,0,INT_MIN);
  cout<<"Maximum subarray sum = "<<result;
}