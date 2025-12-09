#include <iostream>
using namespace std;
int factorial(int n){
if(n==0){
return 1; }  
return n*factorial(n-1);
}
int main() {
int n;
cout<<"Enter number to calculate factorial:";
cin>>n;
if(n<0){
    cout<<"Factorial is undefined for negative number ";}
    else {
    cout<<"Factorial of "<<n<<" is "<< factorial(n)<<endl;}
    

}