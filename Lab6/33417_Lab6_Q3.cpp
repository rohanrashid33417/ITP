#include <iostream>
using namespace std;

int main() {
    int arr[6];
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
bool symmetric = true;
    for (int i = 0; i < 3; i++) {
 if (arr[i] != arr[5 - i]) {
    symmetric = false;
break;
  }
    }
if (symmetric)
cout << "Array is symmetric";
    else
    cout << "Array is not symmetric";

}