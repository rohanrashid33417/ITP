#include <iostream>
using namespace std;

struct phone {
int area;
int exch;
int num;
};

int main() {
phone my = {212, 767, 8900};
phone your;
cout << "Enter area code: ";
cin >> your.area;
cout << "Enter exchange: ";
cin >> your.exch;
cout << "Enter number: ";
cin >> your.num;
cout << "My number is (" << my.area << ") " << my.exch << "-" << my.num << endl;
cout << "Your number is (" << your.area << ") " << your.exch << "-" << your.num << endl;

}