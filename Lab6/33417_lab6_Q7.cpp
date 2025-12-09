#include <iostream>
using namespace std;

int main() {
    int a, temp, count = 0, sum;

    cout << "Enter number: ";
    cin >> a;

    while (a < 1000) {
        cout << "At least 4 digits: ";
        cin >> a; }
    temp =a;

    while (temp > 0) {
        temp = temp / 10;
     count = count + 1;
    }
  cout << "Total number of digits: ";
  cout<<count<<endl;

    while (a >= 10) {
        sum = 0;
        while (a > 0) {
            sum = sum + (a % 10);
            a = a / 10;
}

        a = sum;
    }

    cout << "Digital root is: ";
    cout<<sum<<endl;


}
