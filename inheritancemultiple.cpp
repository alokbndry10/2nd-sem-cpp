#include<iostream>
using namespace std;
class B{
    public:
    B(int b){
        cout<<"hhello"<<b;
    }};
class A{
    public:
    A(int a){
        cout<<"Hello"<<a;
    }
};

class C:public B,public A{
    public:
    C(int c ):B(c),A(c){
    cout<<"hello"<<c;       
    }
};
int main(){
    C a(5);
    return 0;
}