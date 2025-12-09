#include <iostream>
using namespace std;

void f(int a[10][10],int b[10][10],int c[10][10],int i,int j,int k,int n) {
if (k == n)
return;
c[i][j] += a[i][k] * b[k][j];
f(a, b, c, i, j, k + 1, n);
}

void g(int a[10][10], int b[10][10], int c[10][10],int i,int j,int m,int n,int p) {
    if (j == p) 
    return;
f(a, b, c, i, j, 0, n);
g(a, b, c, i, j + 1, m, n, p);
}

void h(int a[10][10],int b[10][10],int c[10][10],int i, int m,int n, int p) {
    if (i == m)
    return;
g(a, b, c, i, 0, m, n, p);
h(a, b, c, i + 1, m, n, p);
}

int main() {
int m, n, p;
int a[10][10], b[10][10], c[10][10] = {0};

cout << "enter number of rows of first matrix: ";
cin >> m;
cout << "enter number of columns of first matrix: ";
cin >> n;
cout << "enter number of columns of second matrix: ";
cin >> p;
cout << "first matrix size is " << m << " x " << n << endl;
cout << "second matrix size is " << n << " x " << p << endl;
cout << "enter first matrix (" << m << " rows, " << n << " columns):\n";
for (int i = 0; i < m; i++)
for (int j = 0; j < n; j++)
cin >> a[i][j];
cout << "enter second matrix (" << n << " rows, " << p << " columns):\n";
for (int i = 0; i < n; i++)
for (int j = 0; j < p; j++)
cin >> b[i][j];
h(a, b, c, 0, m, n, p);
cout << "result:\n";
for (int i = 0; i < m; i++) {
for (int j = 0; j < p; j++)
cout << c[i][j] << " ";
cout << endl;
}
return 0;
}
