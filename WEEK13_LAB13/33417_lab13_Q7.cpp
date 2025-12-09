#include <iostream>
#include <string>
using namespace std;

struct addr{
string street;
string city;
string state;
string zip;};

struct cours{
string name;
float gpa;};

struct stud{
string name;
float cgpa;
cours c[3];
addr a;};


int main() {
stud s[2];
for (int i = 0; i < 2; i++) {
cout << "enter name of student " << i + 1 << ": ";
cin.ignore();
getline(cin, s[i].name);
cout << "enter cgpa: ";
cin >> s[i].cgpa;
for (int j = 0; j < 3; j++) {
cout << "enter course " << j + 1 << " name: ";
cin.ignore();
getline(cin, s[i].c[j].name);
cout << "enter gpa for " << s[i].c[j].name << ": ";
cin >> s[i].c[j].gpa;}

cin.ignore();
cout << "enter street: ";
getline(cin, s[i].a.street);
cout << "enter city: ";
getline(cin, s[i].a.city);
cout << "enter state: ";
getline(cin, s[i].a.state);
cout << "enter zip: ";
getline(cin, s[i].a.zip);
cout << endl;}
    
cout << "\nhighest gpa in each course:\n";
for (int j = 0; j < 3; j++) {
if (s[0].c[j].gpa > s[1].c[j].gpa)
cout << s[0].name << " has highest gpa in " << s[0].c[j].name << endl;
else if (s[1].c[j].gpa > s[0].c[j].gpa)
cout << s[1].name << " has highest gpa in " << s[1].c[j].name << endl;
else cout << "both students have same gpa in " << s[0].c[j].name << endl;
}
cout << "\nhighest overall cgpa:\n";
if (s[0].cgpa > s[1].cgpa)
cout << s[0].name << " has the highest cgpa: " << s[0].cgpa << endl;
else if (s[1].cgpa > s[0].cgpa)
cout << s[1].name << " has the highest cgpa: " << s[1].cgpa << endl;
else
cout << "both students have same cgpa: " << s[0].cgpa << endl;

    
}

