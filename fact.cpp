#include<iostream>
using namespace std;
int fact(int);
int main(){
    int n;
    cout<<"write a number to print the factorial of"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}
int fact(int n){
    if(n<=0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}