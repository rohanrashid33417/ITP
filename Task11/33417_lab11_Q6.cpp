#include <iostream>
using namespace std;

void SentenceCase(char *text, int size) {
    if (text[0] >= 'a' && text[0] <= 'z') {
        text[0] -= 32;}

    for (int i = 1; i < size; i++) {
        if (text[i] == '.') {
 if (text[i + 1] == ' ') {
     if (text[i + 2] >= 'a' && text[i + 2] <= 'z') {
     text[i + 2] -= 32;}}
                         
else {                
if (text[i + 1] >= 'a' && text[i + 1] <= 'z') {
text[i + 1] -= 32;}}}
                
else {
if (text[i] >= 'A' && text[i] <= 'Z') {
    text[i] += 32;
            }}}}
int main() {
    char text[100];
cout << "Enter a sentence: ";
    cin.getline(text, 100);
 int size = 0;
 while (text[size] != '\0') {
        size++;
    }
 SentenceCase(text, size);
cout << "Sentence in sentence case: " <<text << endl;
    return 0;
}