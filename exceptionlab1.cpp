//WAP containing a possible exception use a try block to throw it and a catch block to handle it promptly
#include<iostream>
using namespace std;
int main(){
    int x=10;
    try{
        throw x; 
    }
    catch(int a){
    cout<<"You have thrown "<<a<<endl;}
    return 0;
}