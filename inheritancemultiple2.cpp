//amguity in multiple inheritance
#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void show(){
        cout<<a+1;
    }
};
class B{
    protected:
    int b;
    public:
    void show(){
        cout<<b-1;
            }
};
class C:public A,public B{

};
int main(){
    C c;
    c.A::show();//here we didinot used C.show because ambiguity arises due to confussion in selsction of show function among b and a class.
    c.B::show();
    return 0;
}