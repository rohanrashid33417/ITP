#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) { 
        cout << "negative ";
        num = -num;
    }

    if (num == 0) { 
        cout << "zero. ";
        return 0;
    }

    string arr1[9] = {"one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string arr2[9] = {"Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string arr3[9] = {"ten","twenty ","thirty ","forty ","fifty ","sixty ","seventy ","eighty ","ninety "};

    if (num == 10) {
        cout << arr3[0];
    }
    else if (num >= 1 && num <= 9) {
        cout << arr1[num - 1];
    }
    else if (num > 10 && num <= 19) {
        cout << arr2[num - 11];
    }
    else if (num < 100 && num % 10 == 0) {
        cout << arr3[(num / 10) - 1];
    }
    else if (num < 100 && num % 10 != 0) {
        cout << arr3[(num / 10) - 1] << arr1[(num % 10) - 1];
    }
    else if (num < 1000 && num % 100 == 0) {
        cout << arr1[(num / 100) - 1] << " hundred";
    }
    else if (num < 1000) {
        cout << arr1[(num / 100) - 1] << " hundred ";
        int lt1 = num % 100;

        if (lt1 == 0) {}
        else if (lt1 == 10) { cout << arr3[0]; }
        else if (lt1 >= 1 && lt1 <= 9) { cout << arr1[lt1 - 1]; }
        else if (lt1 > 10 && lt1 <= 19) { cout << arr2[lt1 - 11]; }
        else if (lt1 % 10 == 0) { cout << arr3[(lt1 / 10) - 1]; }
        else { cout << arr3[(lt1 / 10) - 1] << arr1[(lt1 % 10) - 1]; }
    }
    else if (num >= 1000 && num <= 999999) {
        int left = num / 1000;
        int right = num % 1000;

        if (left == 10) { cout << arr3[0]; }
        else if (left >= 1 && left <= 9) { cout << arr1[left - 1]; }
        else if (left > 10 && left <= 19) { cout << arr2[left - 11]; }
        else if (left < 100 && left % 10 == 0) { cout << arr3[(left / 10) - 1]; }
        else if (left < 100 && left % 10 != 0) { cout << arr3[(left / 10) - 1] << arr1[(left % 10) - 1]; }
        else if (left < 1000 && left % 100 == 0) { cout << arr1[(left / 100) - 1] << " hundred"; }
        else if (left < 1000) {
            cout << arr1[(left / 100) - 1] << " hundred ";
            int lt2 = left % 100;

            if (lt2 == 0) {}
            else if (lt2 == 10) { cout << arr3[0]; }
            else if (lt2 >= 1 && lt2 <= 9) { cout << arr1[lt2 - 1]; }
            else if (lt2 > 10 && lt2 <= 19) { cout << arr2[lt2 - 11]; }
            else if (lt2 % 10 == 0) { cout << arr3[(lt2 / 10) - 1]; }
            else { cout << arr3[(lt2 / 10) - 1] << arr1[(lt2 % 10) - 1]; }
        }

        cout << " thousand ";

        if (right == 10) { cout << arr3[0]; }
        else if (right >= 1 && right <= 9) { cout << arr1[right - 1]; }
        else if (right > 10 && right <= 19) { cout << arr2[right - 11]; }
        else if (right < 100 && right % 10 == 0) { cout << arr3[(right / 10) - 1]; }
        else if (right < 100 && right % 10 != 0) { cout << arr3[(right / 10) - 1] << arr1[(right % 10) - 1]; }
        else if (right < 1000 && right % 100 == 0) { cout << arr1[(right / 100) - 1] << " hundred"; }
        else if (right < 1000) {
            cout << arr1[(right / 100) - 1] << " hundred ";
            int lt3 = right % 100;

            if (lt3 == 0) {}
            else if (lt3 == 10) { cout << arr3[0]; }
            else if (lt3 >= 1 && lt3 <= 9) { cout << arr1[lt3 - 1]; }
            else if (lt3 > 10 && lt3 <= 19) { cout << arr2[lt3 - 11]; }
            else if (lt3 % 10 == 0) { cout << arr3[(lt3 / 10) - 1]; }
            else { cout << arr3[(lt3 / 10) - 1] << arr1[(lt3 % 10) - 1]; }
        }
    }

    return 0;
}
