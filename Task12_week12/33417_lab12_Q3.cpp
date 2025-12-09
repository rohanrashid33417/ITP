#include <iostream>
using namespace std;
int main() {
    float *p= new float;
    cin>>*p;
    cout<<"value "<<*p<<endl;
    cout<<"Address "<<p<<endl;
    cout<<"New value "<<*p+10<<endl;
    delete p;
    
}