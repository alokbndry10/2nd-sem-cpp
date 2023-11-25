//WAP to swap data using template function 
#include<iostream>
using namespace std;
template<class T>
void swapValues(T x,T y) {
    cout << endl << "the value of x before swapping is " << x;
    cout << endl << "the value of y before swapping is " << y;
    T z;
    z = x;
    x = y;
    y = z;
    cout << endl << "the value of x after swapping is " << x;
    cout << endl << "the value of y after swapping is " << y << endl;
}

template<class T>
void inputData() {
    T u;
    T v;
    cout << "enter two data values: ";
    cin >> u >> v;
    swapValues(u, v);
}
int main() {
        inputData<string>();//universal data acceptor
    return 0;
}
