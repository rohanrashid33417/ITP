#include <iostream>
using namespace std;

int main() {
    float arr[6];
for (int i = 0; i < 6; i++) {
   arr[i] = 3.14 + i * 0.10;
   }
   cout << "array: ";
   for (int i = 0; i < 6; i++) {
cout << arr[i] << " ";
    }
    for (int i = 0; i < 6; i++) {
for (int j = i + 1; j < 6; j++) {
    if (arr[i] < arr[j]) {
     float temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
         }
    }
    }
cout << "\nDescending order: ";
   for (int i = 0; i < 6; i++) {
cout << arr[i] << " ";
    }

}