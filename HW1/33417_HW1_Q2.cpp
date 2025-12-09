// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int a,b,c,d,num,den;
    char choice;
    cout<<"Enter numerator and denominator of first fraction :";
    cin>>a>>b;
    cout<<"Enter numerator and denominator of second fraction :";
    cin>>c>>d;
    cout<<"Which operation do you want to perform (+,-,*,/) :";
    cin>>choice;
    if(choice=='+'){
        num=a*d + b*c;
        den=b*d;
    }
      else if(choice=='-'){
          num=a*d - b*c;
          den=b*d;
      }
       else if(choice=='*'){
           num=a*c;
           den=b*d;
       }
       else if(choice=='/'){
           num=a*d;
           den=b*c;
       }
       else{
           cout<<"Invalid operation";}
int gcd = __gcd(abs(num), abs(den));

num/=gcd;
den/=gcd;
cout << "Simplified Result: " << num << "/" << den;
}
