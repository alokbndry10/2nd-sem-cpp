#include<iostream> //default constructor example
using namespace std;
class test{
    int x,y;
    public:
    test(){
        cout<<"enter x and y";
        cin>>x>>y;
        cout<<x<<y;
    }
};
int main(){
    test t;
}