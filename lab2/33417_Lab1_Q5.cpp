# include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter 9-Digit Number";
    cin >> x;
    int d1 = (x / 100000000);
    int d2 = (x / 10000000) % 10;
    int d3 = (x / 1000000) % 10;
    int d4 = (x / 100000) % 10;
    int d5 = (x / 10000) % 10;
    int d6 = (x / 1000) % 10;
    int d7 = (x / 100) % 10;
    int d8 = (x / 10) % 10;
    int d9 = x % 10;
    int check_sum = (d1*1 + d2*2  + d3*3 + d4*4 + d5*5 + d6*6 + d7*7 + d8*8 + d9*9 ) % 11;
    cout<<d1<<d2<<d3<<d4<<d5<<d6<<d7<<d8<<d9<<check_sum;
}