//WAP with abstract class using concept of pure virtual function
#include<iostream>
using namespace std;
class A{
    public:
    virtual void show()=0;
};
class B:public A{
    public:
    void show(){
        cout << "I am Derived Class" << endl;
        }
};
int main(){
    A* a1;
    B b1;
    a1=&b1;
    a1->show();
    return 0;
}