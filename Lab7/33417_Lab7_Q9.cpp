#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
   int digits[10];
    for (int i = 0; i < 10; i++) {
  digits[i] = rand() % 10;
    }

string phoneNumber = "(";
    phoneNumber += to_string(digits[0]);
  phoneNumber += to_string(digits[1]);
    phoneNumber += to_string(digits[2]);
  phoneNumber += ") ";
    phoneNumber += to_string(digits[3]);
  phoneNumber += to_string(digits[4]);
    phoneNumber += to_string(digits[5]);
phoneNumber += "-";
phoneNumber += to_string(digits[6]);
    phoneNumber += to_string(digits[7]);
    phoneNumber += to_string(digits[8]);
    phoneNumber += to_string(digits[9]);

cout << phoneNumber << endl;

}
