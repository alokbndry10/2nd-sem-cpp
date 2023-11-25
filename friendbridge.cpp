#include<iostream>
using namespace std;

class two; // Second class declaration

class one {
    int x, y; // Data members
public:
    void getdata() { // Member function
        cout << "Enter values of x and y for class one";
        cin >> x >> y;
    }
    friend int display(one a, two b); // Friend function declaration with keyword friend and argument as object
};

class two {
    int x, y; // Data members
public:
    void getdata() { // Member function
        cout << "Enter values of x and y for class two";
        cin >> x >> y;
    }
    friend int display(one a, two b); // Friend function declaration with keyword friend and argument as object
};

int display(one a, two b) { // Non-member function
    return a.x + b.x;
}

int main() {
    one a; // Object
    two b;
    a.getdata();
    b.getdata();
    cout << display(a, b);
}
