#include <iostream>
using namespace std;

int main() {
double cal;
double fat;
double fatCal;
double percentage;
cout << "Enter total calories: ";
cin >> cal;

cout << "Enter fat grams: ";
cin >> fat;

if (cal < 0 || fat < 0) {
cout << "Error: Calories and fat grams cannot be negative." << endl;
} 
else {
 fatCal = fat * 9;

if (fatCal > cal) {
cout << "Error: Calories from fat cannot be greater than total calories." << endl;
    }
else {
    percentage = (fatCal / cal) * 100;

cout << "Percentage of calories from fat: " << percentage << "%" << endl;

if (percentage < 30) {
   cout << "This food is low in fat." << endl;
   }
   }
    }

}
