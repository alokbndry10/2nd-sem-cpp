#include <iostream>
using namespace std;

class Calculator; // Forward declaration of the friend class

class Data {
private:
    int x, y;

public:
    void getInput() {
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }

    // Friend class declaration
    friend class Calculator;
};

class Calculator {
public:
int x;
    int sum(Data data) {
        x= data.x + data.y;
        return 0;
    }
};

int main() {
    Data data;
    Calculator a;
    //Calculator a;
    data.getInput();
    a.sum(data);
    //int result = a.sum(data);
    cout << "Sum of the numbers: " << a.x<< endl;

    return 0;
}

    