#include <iostream>
using namespace std;

int main() {
char weekdayInput;
char vacationInput;
bool weekday;
bool vacation;

cout << "Is it a weekday? (y/n): ";
cin >> weekdayInput;

cout << "Are you on vacation? (y/n): ";
cin >> vacationInput;

if (weekdayInput == 'y' || weekdayInput == 'Y') {
 weekday = true;
    }
    else {
    weekday = false;
}

    if (vacationInput == 'y' || vacationInput == 'Y') {
       vacation = true;
}
    else {
        vacation = false;
   }

    if (!weekday || vacation) {
    cout << " You sleep in" << endl;
} 
    else {
        cout << " You don't sleep in" << endl;
}


}

