#include <iostream>
using namespace std;

int main() {
    char order;

    cout << "Food Menu" << endl;
    cout << "Burger " << endl;
    cout << "French Fries " << endl;
    cout << "Pizza " << endl;
    cout << "Sandwiches" << endl;

    cout << "Enter your order (B/F/P/S): ";
    cin >>order;

    if (order == 'B' || order == 'b') {
        cout << "You ordered a Burger. Price: Rs. 200" << endl;
    } 
    
    else {
        if (order == 'F' || order == 'f') {
  cout << "You ordered French Fries. Price: Rs. 50" << endl;
        }
        
        else {
  if (order == 'P' || order == 'p') {
   cout << "You ordered a Pizza. Price: Rs. 500" << endl;
            } 
            
            
else {
     if (order == 'S' || order == 's') {
        cout << "You ordered Sandwiches. Price: Rs. 150" << endl;
                 } 
                
    else {
      cout << "Invalid choice. Please enter B, F, P, or S." << endl;
  }
     }
        }
    }

    
}
