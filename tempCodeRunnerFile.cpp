#include<iostream>
using namespace std;
class alok1{
    private: 
    int real,imaginary;
    public:
    alok1(){
        real=0;
        imaginary=0;
    }
    get_data(){
        cout<<"enter the value for real part"<<endl;
        cin>>real;
        cout<<"enter the value for imaginary part"<<endl;
        cin>>imaginary;
    }
    show_data(){
        cout<<"the imaginary number is "<<real<<"+ i"<<imaginary<<endl;
    }  
 friend alok1 operator +(alok1 a,alok1 b);
};
alok1 operator +(alok1 a,alok1 b){
    alok1 temp;
    temp.real=a.real+b.real;
    temp.imaginary=a.imaginary+b.imaginary;
    return temp;
}
int main(){
    alok1 a,b,c;
    a.get_data();
    b.get_data();
    c=a+b;
    c.show_data();
    return 0;
}