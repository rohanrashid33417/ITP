#include <iostream>
using namespace std;
void  swap (int *&a,int *&b){
   int *change=a;
    a = b;
    b=change;
    cout<<"--------------------------------------"<<endl;
    cout<<"Now address of A"<<": "<<a<<endl;
    cout<<"Now address of B"<<": "<<b<<endl;
}   
int main() {
   int a,b;
   cout<<"Current address of A"<<": "<<&a<<endl;
      cout<<"Current address of B"<<": "<<&b<<endl;
       int *p1 = &a;
    int *p2 = &b;
   swap(p1,p2);
   
}