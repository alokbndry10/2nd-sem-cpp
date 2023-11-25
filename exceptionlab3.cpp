//WAP that uses catch (..)handler
#include<iostream>
using namespace std;
int main() {
    int a = 42;
    char b = 'b';
    int c = 1;

    try {
        if (c == 0) {
            throw a;
        } else {
            throw b;
        }
    } catch (...) {
        cout << "You threw something!" << endl;
    }
    return 0;
}