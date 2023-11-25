// write a program to print the fibonacci series
#include<iostream>
using namespace std;
int fibbo(int n){
    if(n<=1){
        return n;
    }else{
        return fibbo(n-1)+fibbo(n-2);
    }
}
  int displayfibbo(int n){
    cout<<"fibbo series up to "<<n<<"terms is:"<<endl;
    for(int i =0;i<=n;i++){
        cout<<fibbo(i)<<" ";
    }
    return 0;
  }

int main(){
 int n;
 cout<<"enter a value to print fibonacci series"<<endl;
 cin>>n;
 if(n<=0){
    cout<<"error ! type a number greater than 0 "<<endl;
 }else{
    displayfibbo(n);
 }
return 0;
}