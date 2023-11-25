// WAP to overload '+' operator to find sum of two immaginary number

#include<iostream>
using namespace std;
class test{
    private:
    int a,b;
    public: test(){
        a=0;
        b=0;
    }
    get_data(){
        cout<<"enter the value of a and b in imaginary number a+ib form"<<endl;
        cin>>a>>b;
    }
    show_data(){
        cout<<"the value of a1+ib1 + a2+ib2 is"<<a<<"+ i"<<b;
    }
    test operator + (test c){
        test temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main(){
    test A,B,C;
    A.get_data();
    B.get_data();
    C=A+B;
    C.show_data();
    return 0;
}