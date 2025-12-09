#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

for (int i = 1; i <= a; i++) 
{
    for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
        
    }

}
