#include <iostream>
#include <string>
using namespace std;

struct student {
string name;
int roll;
float cgpa;
};

int main() {
int n;
cout << "enter number of students: ";
cin >> n;
cin.ignore();
student s[n];
for (int i = 0; i < n; i++) {
cout << "enter name of student " << i + 1 << ": ";
getline(cin, s[i].name);
cout << "enter roll number: ";
cin >> s[i].roll;
cout << "enter cgpa: ";
cin >> s[i].cgpa;
cin.ignore();
cout << endl;}
cout << "\nstudents information:\n";
for (int i = 0; i < n; i++) {
cout << "name: " << s[i].name << ", roll: " << s[i].roll << ", cgpa: " << s[i].cgpa << endl;}

}
