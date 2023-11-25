//WAP to find sum of numbers using function template overloading
#include<iostream>
using namespace std;
template<class T>
T sum(T a, T b) {
    return a + b;
}

template <class T>
T sum(T a, T b, T c) {
    return a + b + c;
}
int main(){
    cout<<sum(4.5,3.7)<<endl;
    cout<<sum(5,9,7)<<endl;
    return 0;
}