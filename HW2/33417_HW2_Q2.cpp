
#include <iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    int a,b;
    int arr[601] =  {0};
cout<<"Enter number of dices: ";
 cin>>a;
 cout<<"Enter how many times you want to roll: " ;
 cin>>b;
 srand(time(0));
 for(int i=0; i<b;i++){
 int sum=0;
 for(int j=0;j<a;j++){
   sum+=(rand()%6)  +1;}
     
     arr[sum]++;}
     
 for(int i=a;i<=(a*6);i++) {
     cout<<setw(3)<<i<<":";
     for(int j=0;j<arr[i];j++){
     cout<<"*";
     }
     
     cout<<endl;
 }   
 
}