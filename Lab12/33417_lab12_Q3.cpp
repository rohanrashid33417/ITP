
#include <iostream>
using namespace std;
bool arryequal (int arr1[],int arr2[],int n1,int n2, int index=0){
if( n1!= n2 )return false;
if(index==n1)return true;
if(arr1[index]!=arr2[index]) return false;
return arryequal(arr1,arr2,n1,n2,index+1);
}
int main() {
    int n1,n2;
    cout<<"Size of first array;";
    cin>>n1;
    cout<<"Enter numbers;";
    int arr1[n1];
    for(int i=0;i<n1;i++){
       cin>>arr1[i];}
       
    cout<<"Size of second array;";
    cin>>n2;
    cout<<"Enter numbers;";
    int arr2[n2];
    for(int i=0;i<n1;i++){
       cin>>arr2[i];}
       bool equal=arryequal(arr1,arr2,n1,n2);
       if(equal)
    cout<<"true";
    else 
    cout<<"false";
}