#include<iostream>
using namespace std;

int main() {
    char c;

    cout << "Enter the type of data you want to enter like 'i' for int and 'f' for float: ";
    cin >> c;

    if (c == 'i') {
        int x, y;
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Sum is " << x + y << " and difference is " << x - y << endl;
    }
    else if (c == 'f') {
        float x, y;
        cout << "Enter two floats: ";
        cin >> x >> y;
        cout << "Sum is " << x + y << " and difference is " << x - y << endl;
    }
    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}




