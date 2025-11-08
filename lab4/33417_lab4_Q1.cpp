#include <iostream>
using namespace std;

int main() {
    int number;
cout << "Enter a number: ";
cin >> number;

while (number >= 10 || number <= -10) {
int last = number % 10;
 int rest = number / 10;
number = rest - 2 * last;
    }

if (number == 0 || number == 7 || number == -7) {
 cout << "Divisible by 7" << endl;
} 
else {
        cout << "Not divisible by 7" << endl;
    }

}