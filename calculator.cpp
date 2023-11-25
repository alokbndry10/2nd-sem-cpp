#include<iostream>
using namespace std;

template<class T>
class calculator {
public:
    void calculate(T x, T y) {
        cout << "sum is " << x + y << " and difference is " << x - y << endl;
    }
};

int main() {
    char c;

    cout << "enter the type of data you want to enter like i for int and f for float" << endl;
    cin >> c;

    if (c == 'i') {
        int x, y;
        cout << "enter two integers" << endl;
        cin >> x >> y;
        calculator<int> alok;
        alok.calculate(x, y);
    }
    else if (c == 'f') {
        float x, y;
        cout << "enter two floats" << endl;
        cin >> x >> y;
        calculator<float> alok;
        alok.calculate(x, y);
    }
    else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
