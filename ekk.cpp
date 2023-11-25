#include<iostream>
using namespace std;

template<class T, class Y>
class A {
public:
    T z;

    T sum(T x, Y y) { 
        z = x + y;
        cout << z << endl;
    }
};

int main() {
    A<int, float> a1;
    a1.sum(7, 1.5);
    return 0;
}