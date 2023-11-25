//parametraized constructor in both class:(base class ma matra rakhda error auxa)

#include<iostream>
using namespace std;
class A{
    protected://can use public but not private 
    int x;
    A(int z){
        x=30;
    }
};
class B : A{//we can write it as private A or public A  or protected A
    public:
    B(int z):A(z){
        x=z;
    }
    int showdata(){
        cout<<x;
        return 0;
    }
};
int main(){
    B a(60);
    a.showdata();
    return 0;
}