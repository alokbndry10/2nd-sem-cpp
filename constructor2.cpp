#include<iostream> //parametric constructor example
using namespace std;
class test{
    int x,y;
    public:
    test(int x,int y){
        cout<<x<<y;
    }
};
int main(){
    test(4,5);
    //or test t = test(7,8);
}