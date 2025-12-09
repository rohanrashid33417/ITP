#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x, y, z;
double distance;

cout << "x: ";
cin >> x;
cout << "y: ";
cin >> y;
cout << "z: ";
cin >> z;
distance = sqrt(x * x + y * y + z * z);
cout << "Distance = " << distance;

}
