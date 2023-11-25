//write a program to resolve ambiguity problem in multipath inheritance
#include<iostream>
using namespace std;
class A{
    protected:
    int a;
    public:
    void show(){
        cout<<"a";
    }
};
class B:public A{

    protected:
    int b;
    public:
    void show(){
        cout<<"b";
            }
};
class C:public A{
    protected:
    int c;
    public:
    void show(){
        cout<<"c";
            }

};
class D:public B, public C
{

};
int main(){

    D c;
    c.C::show();//here we didinot used C.show because ambiguity arises due to confussion in selsction of show function among b and a class.
    return 0;

}