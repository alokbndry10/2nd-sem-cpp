#include<iostream>
using namespace std;
class one{
    int x,y;   //if data and function are bind together inside a function then the fuction is called encapsulation.
    public:
    void get(){
        cin>>x>>y;
    }
    friend one display(one C);
};
one display(one C){
    cout<<C.x<<endl<<C.y;
}
int main(){
    one A;
    A.get();
    display(A);
    return 0;
}