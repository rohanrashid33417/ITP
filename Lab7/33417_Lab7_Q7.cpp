#include <iostream>
using namespace std;

int main() {
    const int PRODUCTS = 6;
    const int EMPLOYEES = 4;
   double sales[PRODUCTS][EMPLOYEES];
double totalProduct[PRODUCTS] = {0};
    double totalEmployee[EMPLOYEES] = {0};

    cout << "Enter total sales for each product by each employee:\n";
    for (int i = 0; i < PRODUCTS; i++) {
   cout << "\nProduct " << i + 1 << ":\n";
        for (int j = 0; j < EMPLOYEES; j++) {
          cout << "  Employee " << j + 1 << ": ";
    cin >> sales[i][j];
            totalProduct[i] += sales[i][j];
     totalEmployee[j] += sales[i][j];
        }
    }
    cout << "\n\n=== Monthly Sales Summary ===\n\n";
    cout << "Product\t\t";
    for (int j = 0; j < EMPLOYEES; j++)
cout << "Emp" << j + 1 << "\t";
    cout << "Total/Product\n";
    for (int i = 0; i < PRODUCTS; i++) {
cout << "Product " << i + 1 << "\t";
        for (int j = 0; j < EMPLOYEES; j++)
 cout << sales[i][j] << "\t";
        cout << totalProduct[i] << "\n";
    }
    cout << "Total/Emp\t";
    for (int j = 0; j < EMPLOYEES; j++)
 cout << totalEmployee[j] << "\t";
    cout << "\n";

    return 0;
}
