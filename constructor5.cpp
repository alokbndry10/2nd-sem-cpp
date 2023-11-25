/*Create a class name 'Rectangle' with two data members - length and breadth and a function to calculate area
 the class has three constructor:
 1. having no parameter - values of both lenght and breadth are assigned zero 
 2.having two numbers a parameters the two numbers are assigned as length and breadth respectively
 3. having one number as parameter both length and breadth are assigned that number 
 
 Now, create object of the 'Rectangle' class having none, one and two parameters and print their area*/
#include <iostream>
using namespace std;

class rectangle {
private:
    int length, breadth;

public:
    rectangle() {
        length = 0;
        breadth = 0;
        cout << "length is " << length << endl;
        cout << "breadth is " << breadth << endl;
        cout << "area is " << (length * breadth) << endl;
    }

    rectangle(int a, int b) {
        length = a;
        breadth = b;
        int area = a * b;
        cout << "area is " << area << endl;
    }

    rectangle(int a) {
        length = a;
        breadth = a;
        int area = a * a;
        cout << "area is " << area << endl;
    }
};

int main() {
    cout << "how many parameters do you want to pass? Press 0 for 0 parameter, 2 for 2 parameters, and 1 for 1 parameters: ";
    int a;
    cin >> a;

    switch (a) {
        case 0: {
            rectangle A;
            break;
        }
        case 2: {
            int length, breadth;
            cout << "enter the length and breadth: " << endl;
            cin >> length >> breadth;
            rectangle A(length, breadth);
            break;
        }
        case 3: {
            int length;
            cout << "enter the length: " << endl;
            cin >> length;
            rectangle A(length);
            break;
        }
        default:
            cout << "error" << endl;
            break;
    }

    return 0;
}