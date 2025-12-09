#include <iostream>
using namespace std;

int f(int a[],int n,int x,int i) {
if (i == n) return -1;
if (a[i] ==x) return i;
return f(a,n,x,i + 1);
}

int main() {
  int a[10];
  cout << "enter numbers:\n";
 for (int i = 0;i < 10;i++) cin >> a[i];
int x;
cout << "enter number you want to search: ";
cin >> x;
int p = f(a, 10, x, 0);
if (p == -1)
cout << "element not found";
 else
cout << "element found at index " << p;
return 0;
}
