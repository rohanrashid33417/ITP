#include <iostream>
using namespace std;

int main() {
   const int students = 5;
    const int columns = 9;
   int student_data[students][columns] = {0};
    cout << "Enter data for 5 students:\n";
for (int i = 0; i < students; i++) {
        cout << "\nEnter Student ID for student " << i + 1 << ": ";
     cin >> student_data[i][0];
        for (int j = 1; j <= 5; j++) {
            cout << "  Enter marks for C" << j << ": ";
     cin >> student_data[i][j];
        }
student_data[i][6] = 500;
    int obtained_marks = 0;
        for (int j = 1; j <= 5; j++) {
obtained_marks += student_data[i][j];
        }
        student_data[i][7] = obtained_marks;
    student_data[i][8] = (obtained_marks * 100) / student_data[i][6];
    }
    cout << "\n\nStd-ID\tC1\tC2\tC3\tC4\tC5\tTotal\tObt\tPercent\n";
    for (int i = 0; i < students; i++) {
for (int j = 0; j < columns; j++) {
     cout << student_data[i][j] << "\t";
      }
        cout << "\n";
    }

}
