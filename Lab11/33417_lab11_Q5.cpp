
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void freq(int arr[],int size){
for(int i=0;i<size;i++){
if(arr[i]==-1)
continue;
int count=1;
for(int j=i+1;j<size;j++){
if(arr[i]==arr[j]){
arr[j]=-1;
count++;}}
cout<<"number: "<<arr[i]<<" "<<count<<" Times"<<endl;}}

int main() {
  
int size;
cout<<"Enter size: ";
cin>>size;
int arr[size];
srand(time(0));
for(int i=0;i<size;i++){
   arr[i]=rand()%10;
    cout<<arr[i]<<" ";
}
cout<<endl;
freq(arr,size);

}