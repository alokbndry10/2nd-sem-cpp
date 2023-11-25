//WAP to illustrate concept of function overriding
#include<iostream>
using namespace std;
class intro{
    protected:
    string fname;
    int age;
    public:
    void write(){
        cout<<"enter your first name"<<endl;
        cin>>fname;
        cout<<endl<<"enter your age"<<endl;
        cin>>age;
    }
    void read(){
        cout<<"your name is "<<fname;
        cout<<endl<<"your age is"<<age<<endl;
    }
};
class detail:public intro{
    protected:
    string lname;
    int phoneno;
    public:
    void write(){
        intro::write();
        cout<<"enter your lastname"<<endl;
        cin>>lname;
        cout<<endl<<"enter your phone number"<<endl;
        cin>>phoneno;
    }
    void read(){
        intro::read();
        cout<<"your ;ast name is "<<lname;
        cout<<endl<<"your phone number is"<<phoneno<<endl;

    }
};
class test:public intro{

};
int main(){
    detail a,b;
    a.write();
    b.write();
    a.read();
    b.read();
    test a1,b1;
    a1.write();
    a1.read();
}