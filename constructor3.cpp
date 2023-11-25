#include<iostream> //copy constructor example
using namespace std;
class test{
    private:
    int id;
    public:
    test(){
        cout<<"enter id";
        cin>>id;
    }
    test(test &x){
        id = x.id;
        cout<<id;
    }
};
int main(){
    test x;
    test y = x; //copy constructor
    test z(y); //or 
}