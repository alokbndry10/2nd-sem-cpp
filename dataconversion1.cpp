//write a program to convert basic data type to basic data type( int to float)
#include<iostream>
using namespace std;
class A{
    private:
    int a;
    float b;
    public:
    A(){
        a=20.55;
        b=30.333;
    }
    data_conversion(){
        cout<<"before conversion the value was "<<a<<" and "<<b<<endl;
        a=float(a);           //or we can directly convert a=b(where a int will change into float b)
        b=int(b);
        cout<<"after conversion float was changed to int and int to float and the data are "<<(a+0.555)<<" and "<<b;
    }
};
int main(){
    A a;
    a.data_conversion();
    return 0;
}