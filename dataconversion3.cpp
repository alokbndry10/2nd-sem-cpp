//write a program to convert basic to userdefine (int = object);
#include<iostream>
using namespace std;
class A{
    private:
    float length;
    public:
    A(){
        length=0;
    }
    A(float a){
        length=a;
    }
    void getdata(){
        cout<<"enter the lenght if float format eg:1.00"<<endl;
        cin>>length;
    }
    void showdata(){
        cout<<"length is "<<length;
    }
};
int main(){
    A m1;
    float l1=10.00;
    m1.getdata();
    m1 = l1;   //basic to userdefine
    m1.showdata();
    return 0;
}