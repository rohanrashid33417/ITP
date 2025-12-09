
#include <iostream>
#include<vector>
using namespace std;
void add(vector <double>&num,int a){
double sum=0;
for(int i=0;i<a;i++){
 sum+=num[i]  ; 
}
cout<<"sum: "<<sum;
}
int main() {
 int a;

 cout<<"How many numbers you want to enter: ";
 cin>>a;
  vector<double> num(a);
 cout<<"Enter numbers: ";
 for(int i=0;i<a;i++){
 cin>>num[i];}
 
 add(num,a);
 
}