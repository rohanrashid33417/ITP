#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));

    double a = (double)rand() / RAND_MAX;
    double b = (double)rand() / RAND_MAX;
    double c = (double)rand() / RAND_MAX;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    double maximum = max(a, max(b, c));
    double minimum = min(a, min(b, c));
    double average = (a + b + c) / 3;

    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
    cout << "Average: " << average << endl;

}
