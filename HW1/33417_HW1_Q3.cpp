#include <iostream>
using namespace std;
int main() {
    int a, sum;
cout << "Enter a positive integer: ";
    cin >> a;

    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
      sum += i;
        }
    }

    if (sum == a) {
        cout<< " It is a perfect number." ;
   } else
   {
        cout<< " It is not a perfect number.";
    }


}
