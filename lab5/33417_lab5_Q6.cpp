#include <iostream>
using namespace std;

int main() {
    int gradeCSE141, gradeCSE141Lab, gradeCSE578;
    int totalCSE141 = 0, totalCSE141Lab = 0, totalCSE578 = 0;
    int totalAllCourses = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Enter mark for student " << i << " in CSE141: ";
        cin >> gradeCSE141;
        cout << "Enter mark for student " << i << " in CSE141-lab: ";
        cin >> gradeCSE141Lab;
        cout << "Enter mark for student " << i << " in CSE578: ";
        cin >> gradeCSE578;

        totalCSE141 += gradeCSE141;
        totalCSE141Lab += gradeCSE141Lab;
        totalCSE578 += gradeCSE578;
        totalAllCourses += gradeCSE141 + gradeCSE141Lab + gradeCSE578;
    }

    double avgCSE141 = totalCSE141 / 10.0;
    double avgCSE141Lab = totalCSE141Lab / 10.0;
    double avgCSE578 = totalCSE578 / 10.0;
    double avgAllCourses = totalAllCourses / 30.0;

    cout << "Average grade in CSE141: " << avgCSE141 << endl;
    cout << "Average grade in CSE141-lab: " << avgCSE141Lab << endl;
    cout << "Average grade in CSE578: " << avgCSE578 << endl;
    cout << "Average grade of all students in all courses: " << avgAllCourses << endl;


}

