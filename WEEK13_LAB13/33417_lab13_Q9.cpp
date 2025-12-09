#include <iostream>
using namespace std;

struct complex {
float real;
float imag;
};

complex readComplex() {
complex c;
cout << "Enter real part: ";
cin >> c.real;
cout << "Enter imaginary part: ";
cin >> c.imag;
return c;}

void writeComplex(complex c) {
if(c.imag >= 0)
cout << c.real << " + " << c.imag << "i";
    else
cout << c.real << " - " << -c.imag << "i";}

complex addComplex(complex c1, complex c2) {
complex c;
  c.real = c1.real + c2.real;
c.imag = c1.imag + c2.imag;
return c;}

complex multiplyComplex(complex c1, complex c2) {
complex c;
c.real = c1.real * c2.real - c1.imag * c2.imag;
c.imag = c1.real * c2.imag + c1.imag * c2.real;
return c;}


int main() {
cout << "Enter first complex number:\n";
complex c1 = readComplex();
cout << "Enter second complex number:\n";
complex c2 = readComplex();
complex sum = addComplex(c1, c2);
complex prod = multiplyComplex(c1, c2);
cout << "\nFirst number: ";
writeComplex(c1);
cout << "\nSecond number: ";
writeComplex(c2);
cout << "\n\nSum: ";
writeComplex(sum);
cout << "\nProduct: ";
writeComplex(prod);cout << endl;}

 

