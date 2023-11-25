// WAP to overload unary operator ie. increment and decrement 
#include<iostream>
using namespace std;
class test{
    int count;
    public:
    test ()
    {
count=0;
    }
    void show(){
        cout<<count;
    }
    
     test operator ++()
     {
        ++count;
    return * this;
     }
     test operator --(){

        --count;
        return * this;
     }   
};
int main(){
    test t;
    ++t;
    t.show();
    --t;
    t.show();
    }