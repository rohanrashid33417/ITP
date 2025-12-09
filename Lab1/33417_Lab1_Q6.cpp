#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int largest = max(a, max(b, c));
    cout << "Largest number: " << largest << endl;

}
