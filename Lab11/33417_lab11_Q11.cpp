
#include <iostream>
#include<vector>
using namespace std;
void revers(vector <double>&num,int a){
cout<<"Reversed Order: ";
for(int i=a-1;i>=0;i--){
    cout<<num[i]<<" ";
}

}
int main() {
 int a;
 cout<<"How many numbers you want to enter: ";
 cin>>a;
  vector<double> num(a);
 cout<<"Enter numbers: ";
 for(int i=0;i<a;i++){
 cin>>num[i];}
 
 revers(num,a);
 
}
