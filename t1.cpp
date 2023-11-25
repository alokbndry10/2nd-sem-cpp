#include <iostream>
using namespace std;

template <class T>
class Test {
public:
    T var;
    Test() {
        var = 0;
    }
    Test(T x) {
        var = x;
    }
    void output() {
        cout << var << endl;
    }
};

int main() {
    Test<int> a(5);
    a.output();
    return 0;
}



