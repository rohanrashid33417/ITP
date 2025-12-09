#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
    srand(time(0));
   
double a = (double) rand() / RAND_MAX;
double b = (double) rand() / RAND_MAX;
double c = (double) rand() / RAND_MAX;
double d = (double) rand() / RAND_MAX;
double e = (double) rand() / RAND_MAX;

cout << "The Maximum Number is: " << max({a, b, c, d, e});
cout << "\nThe Minimum Number is: " << min({a, b, c, d, e});
cout << "\nThe Average Of Five Numbers Is: " << (a + b + c + d + e) / 5;
}
