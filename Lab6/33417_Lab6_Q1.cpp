#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int a;
    int count= 0;

    cout << "Enter numbers: ";
  for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

cout << "Number to search: ";
    cin >> a;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == a) {
    count++;
        }
    }

  if (count > 0) {
        cout << "Number found times ;" << count<< endl;
    } else {
        cout << "Number not found." << endl;
    }

}
