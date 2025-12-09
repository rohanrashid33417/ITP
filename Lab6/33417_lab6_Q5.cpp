#include <iostream>
using namespace std;

int main() {
    int pass[10];
    int fail[10];
    int p = 0; 
    int f= 0;
    int marks;

    for (int i = 0; i < 10; i++) {
        cin >> marks;
    if (marks == -1) break;

    if (marks >= 5 && marks <= 10) {
        pass[p++] = marks;
    } else if (marks >= 0 && marks < 5) {
            fail[f++] = marks;
       }
    }

    int sumP = 0;
    cout << "Pass marks: ";
    for (int i = 0; i < p; i++) {
        cout << pass[i] << " ";
        sumP += pass[i];
    }
    if (p > 0) cout << "\nAverage pass: " <<sumP / p;

    int sumF = 0;
    cout << "\nFail marks: ";
    for (int i = 0; i < f; i++) {
        cout << fail[i] << " ";
        sumF += fail[i];
    }
    if (f > 0) cout << "\nAverage fail: " <<sumF / f;


}