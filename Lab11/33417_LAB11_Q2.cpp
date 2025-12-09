
#include <iostream>
using namespace std;
double square(double a){
    return a*a;
}

double cube(double a){
    return a * a * a;
}

int main() {
 double a;

   cout<<"Enter number:";
 cin>>a;
 
 
 
 double res = square(a) + cube(a);
 
 cout<<"Square: "<<square(a)<<endl;
 cout<<"Cube: "<<cube(a)<<endl;
 cout<<"Sum: "<<res;
 
    
}