//WAP that illistrates the application of multiple catch statements
#include<iostream>
using namespace std;
void check(int x){
    try{
        if(x>=0){
        throw x;
    }
    else{
        throw 'x';
    }
    }
    catch(int x){
        cout<<"The number "<<x<<" is positive."<<endl;
        }
    catch(char x){
        cout<<"The number is negative.";
    }
}
int main(){
    check(10);
    check(-5);
    return 0;
}