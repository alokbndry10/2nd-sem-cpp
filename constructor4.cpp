//create a class name programming while creating an object of a class,if nothing is passed to it,then print
//message" i love cpp" if someone string is passed ,then print the passed string in place og c++ i.e print "I love your passed string"

#include<iostream>
using namespace std;
#include<string.h>
class programming{
    public:
    programming(){
        cout<<"I love CPP";
    }
    programming(string a){
        cout<<"i love "<<a<<""<<endl;
    }
};
int main(){

    string a;
    cout<<"please enter your name or press any number"<<endl;
    cin>>a;
    int b = a.length();
     if (b <= 1) {
        programming A;
    } else {
        programming A(a); 
    }
    return 0;
}