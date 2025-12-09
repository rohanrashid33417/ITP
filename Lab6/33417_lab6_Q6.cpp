#include <iostream>
using namespace std;

int main() {
    int arr1[5];
    int arr2[5];

    cout << "Enter 1st student marks " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> arr1[i];
    }

    cout << "Enter second student mark" << endl;
     for (int i = 0; i < 5; i++) {
         cout << "Student " << i + 1 << ": ";
       cin >> arr2[i];
    }

   cout << endl << "Common numbers: ";
    bool found = false;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
      if (arr1[i] == arr2[j]) {
           cout << arr1[i] ;
     found = true;
     }
        }
    }

    if (!found) {
        cout << "No common numbers";
   }

}