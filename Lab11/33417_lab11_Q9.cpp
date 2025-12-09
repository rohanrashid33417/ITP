
#include <iostream>
using namespace std;

void power(double a,int b){
    double res=1;
for(int i=1;i<=b;i++){
res=res*a;
}

cout<<res;

}
int main() {
    double a;
    int b;
   cout<<"Enter number: ";
   cin>>a;
   cout<<"Enter power: ";
   cin>>b;
   power( a, b);
   
  
   
}