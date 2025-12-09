
#include <iostream>
using namespace std;

void vol(double h,double a){
double res;
res=(a*a)*(1.0/3)*h;
cout<<res;}

void getdeta(){
double h , a;
cout<<"Enter heigth: ";
cin>>h;
cout<<"Enter base: ";
cin>>a;
vol(h,a);}


int main() {
    getdeta();
}