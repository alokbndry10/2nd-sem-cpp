// WAP to concanate two object using + operator
#include<iostream>
using namespace std;
class alok{
    private: 
    string a;
    public:
    alok(){
        a="";
    }
    alok operator + (alok b){
        alok temp;
        temp.a=a+b.a;
        return temp;
    }
    get_data(){
        cout<<"enter the string for a"<<endl;
        cin>>a;
    }
    show_data(){
        cout<<a<<endl;
    }
};
int main(){
    alok a1,a2,a3;
    a1.get_data();
    a2.get_data();
    a3=a1+a2;
    a3.show_data();
}