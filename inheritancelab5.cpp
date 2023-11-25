//write a program to illistrate the use of virtual function
#include<iostream>
using namespace std;
class A{
public:
int a;
int b;
A(){
    a=0;
    b=0;
}
virtual void ask(){
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;
}
virtual void sum(){
    int c;
    c=a+b;
    cout<<"sum of a and b is "<<c<<endl;
}
};
class B:public A{
    public:
    void ask(){
        cout<<"1";
    }
    void sum(){
        cout<<"2";
    }
};
int main(){
 A *a;
 B b;
 a=&b;
 a->ask();
 a->sum();
    return 0;
}