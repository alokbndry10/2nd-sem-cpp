#include<iostream>
using namespace std;
class alok{
    int a,b;
    public:
    void getdata(){
        cout<<"enter the value of a and b in the form (a+ib) "<<endl;
        cin>>a>>b;
    }
    alok add(alok a,alok b){
        alok a4;
        a4.a=a.a+b.a;
        a4.b=a.b+b.a;
        return a4;
    }
    void showdata(){
        cout<<a<<"+ i"<<b;
    }
};
int main(){
    alok a1,a2,a3,a4;
    a1.getdata();
    a2.getdata();
    a4=a3.add(a1,a2);
    a4.showdata();
}