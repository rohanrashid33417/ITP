#include <iostream>
using namespace std;

int main() {
    int size;
   cout << "Enter size of array: ";
    cin >> size;
  int arr[size];
   cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
   }
  int sum = 0, count = 0;
    for (int i = 0; i < size; i++) {
if (arr[i] > 0) {
   sum += arr[i];
  count++;
      }
    }

    cout << "sum is : " << sum << endl;
    if (count > 0) {
 double average = (double)sum / count;
       cout << "Average is : " << average << endl;
    } else {
    cout << "Average is : 0" << endl;
    }

}
