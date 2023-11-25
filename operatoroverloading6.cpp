//WAP overloading <= operator which in turn can be used for user defined object for a class 'distance' to 
// compare the two distance object 

#include<iostream>
using namespace std;

class d {
public:
    int dis;
    int op;

    d() {
        dis = 0;
        op = 0;
    }
    void get_data() {
        cout << "Enter the distance: ";
        cin >> dis;
    }

    d operator<=(d b) {
        if (dis == b.dis) {
            op = 0;
        } else if (dis > b.dis) {
            op = 1;
        } else {
            op = -1;
        }
        return *this;
    }
};

int main() {
    d a, b, c;
    a.get_data();
    b.get_data();
    c = a <= b;

    if (c.op == 0) {
        cout << "Distance is equal, i.e. " << a.dis << endl;
    } else if (c.op == 1) {
        cout << "Distance a is greater than b, i.e. " << a.dis << " > " << b.dis << endl;
    } else {
        cout << "Distance b is greater than a, i.e. " << a.dis << " < " << b.dis << endl;
    }
    return 0;
}
