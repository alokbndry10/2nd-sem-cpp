//protected data

#include<iostream>
using namespace std;
class base{
    protected:
    int x;
    public:
    void getdata(){
        cout<<"enter the value for x and y";
        cin>>x>>y;
    }
    int y;
};
class derived : protected base{
    public:
    void showdata(){
        cout<<"value of x and y is"<<x<<y;
    }
    void getdata1(){
        getdata();
    }
};
int main(){
    derived A;
        A.getdata1();
        A.showdata();
}