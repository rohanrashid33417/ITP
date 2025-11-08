#include <iostream>
using namespace std;

int main() {
    float fsc;
    float nts;

    cout << "Enter FSc marks: ";
    cin >> fsc;

    cout << "Enter NTS marks : ";
    cin >> nts;

    float fscPercent = (fsc / 1100) * 100;
    float ntsPercent = nts;

    cout << "FSc Percentage: " << fscPercent << "%" << endl;
    cout << "NTS Percentage: " << ntsPercent << "%" << endl;

if (fscPercent > 70 && ntsPercent >= 70) {
cout << "You got seat in Oxford University - IT" << endl;
   } 
    else if (fscPercent > 70 && ntsPercent >= 60) {
cout << "You got seat in Oxford University - Electronics" << endl;
    } 
    else if (fscPercent > 70 && ntsPercent >= 50) {
 cout << "You got seat in Oxford University - Telecommunication" << endl;
    } 
    else if (fscPercent <= 70 && fscPercent >= 60 && ntsPercent >= 50) {
cout << "You got seat in MIT - IT" << endl;
    } 
   else if (fscPercent < 60 && fscPercent >= 50 && ntsPercent >= 50) {
cout << "You got seat in MIT - Chemical" << endl;
    } 
    else if (fscPercent < 50 && fscPercent > 40 && ntsPercent >= 50) {
cout << "You got seat in MIT - Computer" << endl;
    } 
    
    else {
        cout << "Sorry, you did not qualify" << endl;
    }

}
