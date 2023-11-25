#include<iostream>
using namespace std;
class A{
    protected://can use public but not private 
    int x;
    A(){
        x=10;
    }
};
class B : A{//we can write it as private A or public A  or protected A
    public:
    int showdata(){
        cout<<x;
        return 0;
    }
};
int main(){
    B a;
    a.showdata();
    return 0;
}