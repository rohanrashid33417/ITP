#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int correct = 0, wrong = 0;
    int a, b, answer;
    srand(1);

    while (true) {
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;

        if (a > b) {
            int temp = a;
            a = b;
            b = temp;
        }

        cout << a << " x " << b << " = ";
        cin >> answer;

        if (answer == -1)
            break;

        if (answer == a * b) {
            cout << "Correct" << endl;
            correct++;
        } else {
            cout << "Wrong! correct answer is " << a * b << endl;
            wrong++;
        }
    }
    cout << "Fails = " << wrong << ", Pass = " << correct << endl;

}
