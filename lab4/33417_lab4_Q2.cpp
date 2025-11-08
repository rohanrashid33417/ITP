#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter the length of the sides of a triangle: ";
    cin >> a >> b >> c;

    if ((a == b) && (b == c)) {
        cout << "It is an equilateral triangle";
    }
    else if ((a == b) || (b == c) || (c == a)) {
        cout << "It is an isosceles triangle";
    }
    else {
        cout << "It is a scalene triangle";
    }

    return 0;
}
