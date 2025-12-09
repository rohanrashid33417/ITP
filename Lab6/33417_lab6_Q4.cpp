#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    float arr[6];
    float sum = 0;
  srand(time(0));

    cout << "Numbers: ";
    for (int i = 0; i < 6; i++) {
arr[i] = static_cast<float>(rand()) / RAND_MAX;
 cout << arr[i] << " ";
     sum += arr[i];
    }
cout << "\nSum = " << sum;
cout << "\nAverage = " << sum / 6;

}
