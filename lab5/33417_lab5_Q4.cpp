#include <iostream>
using namespace std;
int main() {
    int a, positive_count = 0, negative_count = 0, range = 0;

    do {
        cout << "Enter number: ";
        cin >> a;

        if (a > 0) positive_count++;
        else if (a < 0) negative_count++;

        if (a >= 100 && a <= 200) range++;

        if (a % 2 != 0) {
            cout << "Square of the given number is = " << a * a << endl;
        }

    } while (a <= 15 || a >= 25);

    cout << "Positive Numbers = " << positive_count << endl;
    cout << "Negative Numbers = " << negative_count << endl;
    cout << "Total Count of [100-200] = " << range << endl;

}
