#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int smallest = min(a, min(b, c));
    int largest = max(a, max(b, c));
    int middle = (a + b + c) - smallest - largest;

    cout << "Numbers in ascending order: ";
    cout << smallest << " " << middle << " " << largest << endl;

}
